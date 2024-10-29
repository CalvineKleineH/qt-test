#ifndef DATABASEHANDLER_H
#define DATABASEHANDLER_H
/*jbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb*/
#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QSet>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class dataBaseHandler;
}
QT_END_NAMESPACE

class dataBaseHandler : public QMainWindow
{
    Q_OBJECT

public:
    dataBaseHandler(QWidget *parent = nullptr);
    ~dataBaseHandler();

private:
    Ui::dataBaseHandler *ui;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QTimer *timer;
    QSet<QString> displayed;
private slots:
    void readyReply();
    void on_pushButton_clicked();
};
#endif // DATABASEHANDLER_H

