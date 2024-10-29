/********************************************************************************
** Form generated from reading UI file 'databasehandler.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASEHANDLER_H
#define UI_DATABASEHANDLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dataBaseHandler
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *zoneMessage;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dataBaseHandler)
    {
        if (dataBaseHandler->objectName().isEmpty())
            dataBaseHandler->setObjectName("dataBaseHandler");
        dataBaseHandler->resize(637, 557);
        centralwidget = new QWidget(dataBaseHandler);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 410, 591, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        zoneMessage = new QLineEdit(horizontalLayoutWidget);
        zoneMessage->setObjectName("zoneMessage");

        horizontalLayout->addWidget(zoneMessage);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(90, 90, 431, 281));
        dataBaseHandler->setCentralWidget(centralwidget);
        menubar = new QMenuBar(dataBaseHandler);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 637, 25));
        dataBaseHandler->setMenuBar(menubar);
        statusbar = new QStatusBar(dataBaseHandler);
        statusbar->setObjectName("statusbar");
        dataBaseHandler->setStatusBar(statusbar);

        retranslateUi(dataBaseHandler);

        QMetaObject::connectSlotsByName(dataBaseHandler);
    } // setupUi

    void retranslateUi(QMainWindow *dataBaseHandler)
    {
        dataBaseHandler->setWindowTitle(QCoreApplication::translate("dataBaseHandler", "dataBaseHandler", nullptr));
        pushButton->setText(QCoreApplication::translate("dataBaseHandler", "Envoyer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dataBaseHandler: public Ui_dataBaseHandler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASEHANDLER_H
