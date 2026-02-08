/********************************************************************************
** Form generated from reading UI file 'ruleset_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULESET_WIDGET_H
#define UI_RULESET_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ruleset_widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *rulesLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QLabel *label_2;
    QDoubleSpinBox *blackJackPayout;
    QLabel *label_3;
    QSpinBox *numDecks;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QPushButton *saveButton;
    QPushButton *menuButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ruleset_widget)
    {
        if (ruleset_widget->objectName().isEmpty())
            ruleset_widget->setObjectName("ruleset_widget");
        ruleset_widget->resize(1280, 720);
        ruleset_widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #f0f0f0; \n"
"    font-family: \"Segoe UI\", sans-serif; \n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QGroupBox {\n"
"    background-color: white;\n"
"    border: 2px solid #d4af37; \n"
"    border-radius: 10px;\n"
"    margin-top: 20px;\n"
"    padding-top: 25px; \n"
"    color: #2b1f0e; \n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 5px 15px;\n"
"    background-color: #2b1f0e;\n"
"    color: #d4af37;\n"
"    border: 2px solid #d4af37;\n"
"    border-radius: 8px;\n"
"    bottom: 0px;\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #2b1f0e;      \n"
"    font-weight: 600; \n"
"    padding: 2px;   \n"
"}\n"
"\n"
"QCheckBox {\n"
"    spacing: 10px;\n"
"    color: #2b1f0e;\n"
"    font-weight: 600;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"    border: 2px solid #8c6c26; \n"
"    border-radius: 4px;\n"
"    background-color: white;\n"
"}\n"
"\n"
""
                        "QCheckBox::indicator:checked {\n"
"    background-color: #d4af37; \n"
"    border-color: #2b1f0e;\n"
"    image: url(:/images/checkmark.png); \n"
"}\n"
"\n"
"QCheckBox::indicator:hover {\n"
"    border-color: #d4af37; \n"
"}\n"
"\n"
"QSpinBox, QDoubleSpinBox {\n"
"    background-color: #fff;\n"
"    border: 2px solid #8c6c26;\n"
"    border-radius: 5px;\n"
"    padding: 4px;\n"
"    min-width: 60px;\n"
"    color: #2b1f0e;\n"
"    font-weight: bold;\n"
"    selection-background-color: #d4af37;\n"
"}\n"
"\n"
"QSpinBox:hover, QDoubleSpinBox:hover {\n"
"    border-color: #d4af37;\n"
"}\n"
"\n"
"QSpinBox::up-button, QDoubleSpinBox::up-button,\n"
"QSpinBox::down-button, QDoubleSpinBox::down-button {\n"
"    background-color: #d4af37; \n"
"    border-radius: 2px;\n"
"    width: 20px;    \n"
"}\n"
"\n"
"QSpinBox::up-button:hover, QDoubleSpinBox::up-button:hover,\n"
"QSpinBox::down-button:hover, QDoubleSpinBox::down-button:hover {\n"
"    background-color: #ffd700;\n"
"}\n"
"\n"
"QPushButton{\n"
"	background-color: ql"
                        "ineargradient(\n"
"		spread:pad,\n"
"		x1:0, y1:0, x2:0, y2:1,\n"
"		stop:0 #2b1f0e,\n"
"		stop:1 #8c6c26\n"
"	);\n"
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
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #2b1f0e; \n"
"    border-color: #8c6c26;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(ruleset_widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(ruleset_widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #ffd700;\n"
"	font-family: 'Georgia';\n"
"	font-size: 32px;\n"
"	font-weight: bold;\n"
"}"));

        verticalLayout_2->addWidget(label, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        rulesLayout = new QVBoxLayout();
        rulesLayout->setObjectName("rulesLayout");
        checkBox = new QCheckBox(ruleset_widget);
        checkBox->setObjectName("checkBox");

        rulesLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(ruleset_widget);
        checkBox_2->setObjectName("checkBox_2");

        rulesLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(ruleset_widget);
        checkBox_3->setObjectName("checkBox_3");

        rulesLayout->addWidget(checkBox_3);

        label_2 = new QLabel(ruleset_widget);
        label_2->setObjectName("label_2");

        rulesLayout->addWidget(label_2);

        blackJackPayout = new QDoubleSpinBox(ruleset_widget);
        blackJackPayout->setObjectName("blackJackPayout");
        blackJackPayout->setDecimals(1);
        blackJackPayout->setMinimum(1.000000000000000);
        blackJackPayout->setMaximum(3.000000000000000);
        blackJackPayout->setSingleStep(0.100000000000000);

        rulesLayout->addWidget(blackJackPayout);

        label_3 = new QLabel(ruleset_widget);
        label_3->setObjectName("label_3");

        rulesLayout->addWidget(label_3);

        numDecks = new QSpinBox(ruleset_widget);
        numDecks->setObjectName("numDecks");
        numDecks->setMinimum(1);
        numDecks->setMaximum(10);

        rulesLayout->addWidget(numDecks);

        checkBox_4 = new QCheckBox(ruleset_widget);
        checkBox_4->setObjectName("checkBox_4");

        rulesLayout->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(ruleset_widget);
        checkBox_5->setObjectName("checkBox_5");

        rulesLayout->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(ruleset_widget);
        checkBox_6->setObjectName("checkBox_6");

        rulesLayout->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(ruleset_widget);
        checkBox_7->setObjectName("checkBox_7");

        rulesLayout->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(ruleset_widget);
        checkBox_8->setObjectName("checkBox_8");

        rulesLayout->addWidget(checkBox_8);


        verticalLayout_2->addLayout(rulesLayout);

        saveButton = new QPushButton(ruleset_widget);
        saveButton->setObjectName("saveButton");

        verticalLayout_2->addWidget(saveButton);

        menuButton = new QPushButton(ruleset_widget);
        menuButton->setObjectName("menuButton");

        verticalLayout_2->addWidget(menuButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(ruleset_widget);

        QMetaObject::connectSlotsByName(ruleset_widget);
    } // setupUi

    void retranslateUi(QWidget *ruleset_widget)
    {
        ruleset_widget->setWindowTitle(QCoreApplication::translate("ruleset_widget", "Form", nullptr));
        label->setText(QCoreApplication::translate("ruleset_widget", "Ruleset Menu", nullptr));
        checkBox->setText(QCoreApplication::translate("ruleset_widget", "Dealer Hits on Soft 17", nullptr));
        checkBox_2->setText(QCoreApplication::translate("ruleset_widget", "Dealer Peek", nullptr));
        checkBox_3->setText(QCoreApplication::translate("ruleset_widget", "Push on Dealer 22", nullptr));
        label_2->setText(QCoreApplication::translate("ruleset_widget", "BlackJack Payout (1.0-3.0)", nullptr));
        blackJackPayout->setSuffix(QCoreApplication::translate("ruleset_widget", " * bet", nullptr));
        label_3->setText(QCoreApplication::translate("ruleset_widget", "Decks in Shoe (1-10)", nullptr));
        numDecks->setSuffix(QCoreApplication::translate("ruleset_widget", " decks", nullptr));
        checkBox_4->setText(QCoreApplication::translate("ruleset_widget", "Double After Split", nullptr));
        checkBox_5->setText(QCoreApplication::translate("ruleset_widget", "Resplit", nullptr));
        checkBox_6->setText(QCoreApplication::translate("ruleset_widget", "Hit Split Aces", nullptr));
        checkBox_7->setText(QCoreApplication::translate("ruleset_widget", "Resplit Aces", nullptr));
        checkBox_8->setText(QCoreApplication::translate("ruleset_widget", "Surrender", nullptr));
        saveButton->setText(QCoreApplication::translate("ruleset_widget", "Save", nullptr));
        menuButton->setText(QCoreApplication::translate("ruleset_widget", "Main Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ruleset_widget: public Ui_ruleset_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULESET_WIDGET_H
