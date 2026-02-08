/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionhome;
    QAction *actionlearn;
    QAction *actionpractice;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *practiceButton;
    QSpacerItem *verticalSpacer_9;
    QPushButton *rulesetButton;
    QSpacerItem *verticalSpacer_10;
    QPushButton *learnButton;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1050, 547);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setAnimated(true);
        actionhome = new QAction(MainWindow);
        actionhome->setObjectName("actionhome");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        actionhome->setIcon(icon);
        actionhome->setMenuRole(QAction::MenuRole::NoRole);
        actionlearn = new QAction(MainWindow);
        actionlearn->setObjectName("actionlearn");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::MailMessageNew));
        actionlearn->setIcon(icon1);
        actionlearn->setMenuRole(QAction::MenuRole::NoRole);
        actionpractice = new QAction(MainWindow);
        actionpractice->setObjectName("actionpractice");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::CallStop));
        actionpractice->setIcon(icon2);
        actionpractice->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"border-image: url(:/images/BJbackground.png) \n"
"0 0 0 0 fill stretch;\n"
"}"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        practiceButton = new QPushButton(centralwidget);
        practiceButton->setObjectName("practiceButton");
        practiceButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(\n"
"		spread:pad,\n"
"		x1:0, y1:0, x2:0, y2:1,\n"
"		stop:0 #2b1f0e\n"
"		stop:1 #8c6c26\n"
"	);\n"
"\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border: 3px solid #d4af37;\n"
"	border-radius: 15px;\n"
"	padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qlineargradient(\n"
"		spread:pad,\n"
"		x1:0, y1:0, x2:0, y2:1,\n"
"		stop:0 #3b2f1c,\n"
"		stop:1 #ad8c32\n"
"	);\n"
"}"));

        horizontalLayout->addWidget(practiceButton);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout->addItem(verticalSpacer_9);

        rulesetButton = new QPushButton(centralwidget);
        rulesetButton->setObjectName("rulesetButton");
        rulesetButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(\n"
"		spread:pad,\n"
"		x1:0, y1:0, x2:0, y2:1,\n"
"		stop:0 #2b1f0e\n"
"		stop:1 #8c6c26\n"
"	);\n"
"\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border: 3px solid #d4af37;\n"
"	border-radius: 15px;\n"
"	padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qlineargradient(\n"
"		spread:pad,\n"
"		x1:0, y1:0, x2:0, y2:1,\n"
"		stop:0 #3b2f1c,\n"
"		stop:1 #ad8c32\n"
"	);\n"
"}"));

        horizontalLayout->addWidget(rulesetButton);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout->addItem(verticalSpacer_10);

        learnButton = new QPushButton(centralwidget);
        learnButton->setObjectName("learnButton");
        learnButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(\n"
"		spread:pad,\n"
"		x1:0, y1:0, x2:0, y2:1,\n"
"		stop:0 #2b1f0e\n"
"		stop:1 #8c6c26\n"
"	);\n"
"\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border: 3px solid #d4af37;\n"
"	border-radius: 15px;\n"
"	padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qlineargradient(\n"
"		spread:pad,\n"
"		x1:0, y1:0, x2:0, y2:1,\n"
"		stop:0 #3b2f1c,\n"
"		stop:1 #ad8c32\n"
"	);\n"
"}"));

        horizontalLayout->addWidget(learnButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1050, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionhome->setText(QCoreApplication::translate("MainWindow", "home", nullptr));
#if QT_CONFIG(tooltip)
        actionhome->setToolTip(QCoreApplication::translate("MainWindow", "Home", nullptr));
#endif // QT_CONFIG(tooltip)
        actionlearn->setText(QCoreApplication::translate("MainWindow", "learn", nullptr));
#if QT_CONFIG(tooltip)
        actionlearn->setToolTip(QCoreApplication::translate("MainWindow", "Learn", nullptr));
#endif // QT_CONFIG(tooltip)
        actionpractice->setText(QCoreApplication::translate("MainWindow", "practice", nullptr));
#if QT_CONFIG(tooltip)
        actionpractice->setToolTip(QCoreApplication::translate("MainWindow", "Practice", nullptr));
#endif // QT_CONFIG(tooltip)
        practiceButton->setText(QCoreApplication::translate("MainWindow", "Practice", nullptr));
        rulesetButton->setText(QCoreApplication::translate("MainWindow", "Ruleset", nullptr));
        learnButton->setText(QCoreApplication::translate("MainWindow", "Learn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
