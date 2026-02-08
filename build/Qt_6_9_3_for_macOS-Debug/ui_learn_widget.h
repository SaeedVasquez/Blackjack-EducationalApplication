/********************************************************************************
** Form generated from reading UI file 'learn_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEARN_WIDGET_H
#define UI_LEARN_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LearnWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *mainMenuButton;
    QPushButton *nextButton;
    QPushButton *previousButton;
    QPushButton *checkButton;
    QLabel *headerLabel;
    QSpinBox *spinBox;
    QLabel *instructionLabel;
    QGraphicsView *graphicsView;
    QFormLayout *formLayout;
    QPushButton *practiceDealButton;
    QPushButton *practiceHitButton;
    QPushButton *practiceStandButton;

    void setupUi(QWidget *LearnWidget)
    {
        if (LearnWidget->objectName().isEmpty())
            LearnWidget->setObjectName("LearnWidget");
        LearnWidget->resize(400, 300);
        LearnWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(LearnWidget);
        gridLayout->setObjectName("gridLayout");
        mainMenuButton = new QPushButton(LearnWidget);
        mainMenuButton->setObjectName("mainMenuButton");
        mainMenuButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(mainMenuButton, 0, 0, 1, 1, Qt::AlignmentFlag::AlignLeft);

        nextButton = new QPushButton(LearnWidget);
        nextButton->setObjectName("nextButton");
        nextButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(nextButton, 4, 3, 1, 1, Qt::AlignmentFlag::AlignRight);

        previousButton = new QPushButton(LearnWidget);
        previousButton->setObjectName("previousButton");
        previousButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(previousButton, 4, 0, 1, 1, Qt::AlignmentFlag::AlignLeft);

        checkButton = new QPushButton(LearnWidget);
        checkButton->setObjectName("checkButton");
        checkButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: qlineargradient(\n"
"		spread:pad,\n"
"		x1:0, y1:0, x2:0, y2:1,\n"
"		stop:0 #2E8B57\n"
"		stop:1 #32CD32 \n"
"	);\n"
"\n"
"	color: white;\n"
"	font-weight: bold;\n"
"	border: 3px solid #006400; \n"
"	border-radius: 15px;\n"
"	padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qlineargradient(\n"
"		spread:pad,\n"
"		x1:0, y1:0, x2:0, y2:1,\n"
"		stop:0 #3CB371,\n"
"		stop:1 #90EE90\n"
"	);\n"
"}"));

        gridLayout->addWidget(checkButton, 4, 2, 1, 1);

        headerLabel = new QLabel(LearnWidget);
        headerLabel->setObjectName("headerLabel");
        headerLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #ffd700;\n"
"	font-family: 'Georgia';\n"
"	font-size: 32px;\n"
"	font-weight: bold;\n"
"}"));

        gridLayout->addWidget(headerLabel, 0, 1, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        spinBox = new QSpinBox(LearnWidget);
        spinBox->setObjectName("spinBox");

        gridLayout->addWidget(spinBox, 4, 1, 1, 1);

        instructionLabel = new QLabel(LearnWidget);
        instructionLabel->setObjectName("instructionLabel");

        gridLayout->addWidget(instructionLabel, 1, 1, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        graphicsView = new QGraphicsView(LearnWidget);
        graphicsView->setObjectName("graphicsView");

        gridLayout->addWidget(graphicsView, 2, 1, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        practiceDealButton = new QPushButton(LearnWidget);
        practiceDealButton->setObjectName("practiceDealButton");
        practiceDealButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, practiceDealButton);

        practiceHitButton = new QPushButton(LearnWidget);
        practiceHitButton->setObjectName("practiceHitButton");
        practiceHitButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, practiceHitButton);

        practiceStandButton = new QPushButton(LearnWidget);
        practiceStandButton->setObjectName("practiceStandButton");
        practiceStandButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, practiceStandButton);


        gridLayout->addLayout(formLayout, 2, 3, 1, 1);


        retranslateUi(LearnWidget);

        QMetaObject::connectSlotsByName(LearnWidget);
    } // setupUi

    void retranslateUi(QWidget *LearnWidget)
    {
        LearnWidget->setWindowTitle(QCoreApplication::translate("LearnWidget", "Form", nullptr));
        mainMenuButton->setText(QCoreApplication::translate("LearnWidget", "main menu", nullptr));
        nextButton->setText(QCoreApplication::translate("LearnWidget", "next", nullptr));
        previousButton->setText(QCoreApplication::translate("LearnWidget", "prev", nullptr));
        checkButton->setText(QCoreApplication::translate("LearnWidget", "check", nullptr));
        headerLabel->setText(QString());
        instructionLabel->setText(QString());
        practiceDealButton->setText(QCoreApplication::translate("LearnWidget", "Deal", nullptr));
        practiceHitButton->setText(QCoreApplication::translate("LearnWidget", "Hit", nullptr));
        practiceStandButton->setText(QCoreApplication::translate("LearnWidget", "Stand", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LearnWidget: public Ui_LearnWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEARN_WIDGET_H
