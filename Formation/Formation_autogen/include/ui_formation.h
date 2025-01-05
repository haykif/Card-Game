/********************************************************************************
** Form generated from reading UI file 'formation.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMATION_H
#define UI_FORMATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formation
{
public:
    QWidget *centralwidget;
    QPushButton *demarrer;
    QListWidget *listWidget;
    QLineEdit *reponseUser;
    QPushButton *valider;
    QLabel *affImg;
    QPushButton *chargerImg;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Formation)
    {
        if (Formation->objectName().isEmpty())
            Formation->setObjectName("Formation");
        Formation->resize(440, 450);
        Formation->setMinimumSize(QSize(440, 450));
        Formation->setMaximumSize(QSize(440, 450));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("face-laugh")));
        Formation->setWindowIcon(icon);
        Formation->setIconSize(QSize(48, 48));
        centralwidget = new QWidget(Formation);
        centralwidget->setObjectName("centralwidget");
        demarrer = new QPushButton(centralwidget);
        demarrer->setObjectName("demarrer");
        demarrer->setGeometry(QRect(40, 20, 211, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Lucida Sans Unicode")});
        font.setPointSize(13);
        demarrer->setFont(font);
        demarrer->setCursor(QCursor(Qt::PointingHandCursor));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(40, 70, 361, 351));
        reponseUser = new QLineEdit(centralwidget);
        reponseUser->setObjectName("reponseUser");
        reponseUser->setGeometry(QRect(110, 380, 171, 24));
        QFont font1;
        font1.setPointSize(10);
        reponseUser->setFont(font1);
        valider = new QPushButton(centralwidget);
        valider->setObjectName("valider");
        valider->setGeometry(QRect(290, 380, 91, 24));
        valider->setFont(font1);
        affImg = new QLabel(centralwidget);
        affImg->setObjectName("affImg");
        affImg->setGeometry(QRect(60, 130, 321, 231));
        chargerImg = new QPushButton(centralwidget);
        chargerImg->setObjectName("chargerImg");
        chargerImg->setGeometry(QRect(50, 80, 131, 31));
        chargerImg->setFont(font1);
        Formation->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Formation);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 440, 21));
        Formation->setMenuBar(menubar);
        statusbar = new QStatusBar(Formation);
        statusbar->setObjectName("statusbar");
        Formation->setStatusBar(statusbar);

        retranslateUi(Formation);

        QMetaObject::connectSlotsByName(Formation);
    } // setupUi

    void retranslateUi(QMainWindow *Formation)
    {
        Formation->setWindowTitle(QCoreApplication::translate("Formation", "Formation", nullptr));
        demarrer->setText(QCoreApplication::translate("Formation", "D\303\251marrer Entrainement", nullptr));
        reponseUser->setText(QString());
        valider->setText(QCoreApplication::translate("Formation", "Valider", nullptr));
        affImg->setText(QString());
        chargerImg->setText(QCoreApplication::translate("Formation", "Charger les images", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Formation: public Ui_Formation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMATION_H
