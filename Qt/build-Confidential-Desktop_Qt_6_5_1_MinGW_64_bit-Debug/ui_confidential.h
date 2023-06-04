/********************************************************************************
** Form generated from reading UI file 'confidential.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIDENTIAL_H
#define UI_CONFIDENTIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Confidential
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *login_label;
    QPushButton *login_pushButton;
    QPushButton *registerpushButton;
    QLabel *register_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Confidential)
    {
        if (Confidential->objectName().isEmpty())
            Confidential->setObjectName("Confidential");
        Confidential->resize(800, 600);
        centralwidget = new QWidget(Confidential);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(340, 220, 82, 102));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        login_label = new QLabel(widget);
        login_label->setObjectName("login_label");
        login_label->setLayoutDirection(Qt::LeftToRight);
        login_label->setTextFormat(Qt::AutoText);
        login_label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(login_label);


        verticalLayout->addLayout(verticalLayout_2);

        login_pushButton = new QPushButton(widget);
        login_pushButton->setObjectName("login_pushButton");

        verticalLayout->addWidget(login_pushButton);

        registerpushButton = new QPushButton(widget);
        registerpushButton->setObjectName("registerpushButton");

        verticalLayout->addWidget(registerpushButton);

        register_label = new QLabel(widget);
        register_label->setObjectName("register_label");
        register_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(register_label);

        Confidential->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Confidential);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Confidential->setMenuBar(menubar);
        statusbar = new QStatusBar(Confidential);
        statusbar->setObjectName("statusbar");
        Confidential->setStatusBar(statusbar);

        retranslateUi(Confidential);

        QMetaObject::connectSlotsByName(Confidential);
    } // setupUi

    void retranslateUi(QMainWindow *Confidential)
    {
        Confidential->setWindowTitle(QCoreApplication::translate("Confidential", "Confidential", nullptr));
        login_label->setText(QCoreApplication::translate("Confidential", "False", nullptr));
        login_pushButton->setText(QCoreApplication::translate("Confidential", "Login", nullptr));
        registerpushButton->setText(QCoreApplication::translate("Confidential", "Register", nullptr));
        register_label->setText(QCoreApplication::translate("Confidential", "False", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Confidential: public Ui_Confidential {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIDENTIAL_H
