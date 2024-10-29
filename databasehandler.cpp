#include "databasehandler.h"
#include "ui_databasehandler.h"
#include <QNetworkRequest>
#include <QDebug>
#include <QJsonObject>
#include <QJsonDocument>

dataBaseHandler::dataBaseHandler(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dataBaseHandler)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    manager = new QNetworkAccessManager(this);
    ui->listWidget->addItem("");
    // Connecte le timer au slot readyReply et démarre avec un intervalle régulier de 5 secondes
    connect(timer, &QTimer::timeout, this, &dataBaseHandler::readyReply);
    timer->start(1000); // 5 secondes pour chaque rafraîchissement
}

dataBaseHandler::~dataBaseHandler(){
    delete ui;
}

void dataBaseHandler::readyReply()
{
    // Effectue une nouvelle requête GET à chaque appel de readyReply
    QNetworkRequest request(QUrl("https://qttest-8cf98-default-rtdb.firebaseio.com/Data.json"));
    reply = manager->get(request);

    // Connecte le signal finished de la réponse pour traiter les données reçues
    connect(reply, &QNetworkReply::finished, this, [=]() {
        QJsonDocument data = QJsonDocument::fromJson(reply->readAll());
        QJsonObject message = data.object();
        QString m = message["Message"].toString();
        if(!displayed.contains(m)) {
            ui->listWidget->addItem(m);
            displayed.insert(m);
        }

        // Nettoie la réponse une fois les données traitées
        reply->deleteLater();
    });
}

void dataBaseHandler::on_pushButton_clicked()
{
    QJsonObject m;
    m["Message"] = ui->zoneMessage->text();
    qDebug() << "Message envoyé :" << m;
    ui->zoneMessage->clear();

    QJsonDocument j(m);
    QNetworkRequest newRequest(QUrl("https://qttest-8cf98-default-rtdb.firebaseio.com/Data.json"));
    newRequest.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    // Envoie la requête PUT pour mettre à jour la base de données
    manager->put(newRequest, j.toJson());
}
