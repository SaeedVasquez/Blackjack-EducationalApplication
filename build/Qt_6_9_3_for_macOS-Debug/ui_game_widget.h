/********************************************************************************
** Form generated from reading UI file 'game_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_WIDGET_H
#define UI_GAME_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWidget
{
public:
    QVBoxLayout *mainVerticalLayout;
    QHBoxLayout *topHorizontalLayout;
    QVBoxLayout *labelsVerticalLayout;
    QLabel *balanceLabel;
    QLabel *balanceUpdateLabel;
    QPushButton *numberOfDecksButton;
    QPushButton *showCountButton;
    QPushButton *strategyChartButton;
    QPushButton *returnButton;
    QSpacerItem *betDisplayTopSpacer;
    QHBoxLayout *betDisplayLayout;
    QSpacerItem *displayChipsLeftSpacer;
    QVBoxLayout *betDisplay1Layout;
    QPushButton *betDisplay1Button;
    QLabel *betDisplay1CountLabel;
    QVBoxLayout *betDisplay5Layout;
    QPushButton *betDisplay5Button;
    QLabel *betDisplay5CountLabel;
    QVBoxLayout *betDisplay10Layout;
    QPushButton *betDisplay10Button;
    QLabel *betDisplay10CountLabel;
    QVBoxLayout *betDisplay25Layout;
    QPushButton *betDisplay25Button;
    QLabel *betDisplay25CountLabel;
    QVBoxLayout *betDisplay50Layout;
    QPushButton *betDisplay50Button;
    QLabel *betDisplay50CountLabel;
    QVBoxLayout *betDisplay100Layout;
    QPushButton *betDisplay100Button;
    QLabel *betDisplay100CountLabel;
    QSpacerItem *displayChipsRightSpacer;
    QSpacerItem *betDisplayBottomSpacer;
    QVBoxLayout *bottomVerticalLayout;
    QHBoxLayout *startButtonLayout;
    QPushButton *startRoundButton;
    QHBoxLayout *bottomButtonsLayout;
    QSpacerItem *chipButtonsLeftSpacer;
    QPushButton *chip1Button;
    QPushButton *chip5Button;
    QPushButton *chip10Button;
    QPushButton *chip25Button;
    QPushButton *chip50Button;
    QPushButton *chip100Button;
    QPushButton *hitButton;
    QPushButton *standButton;
    QPushButton *doubleButton;
    QPushButton *splitButton;
    QPushButton *surrenderButton;
    QSpacerItem *chipButtonsRightSpacer;

    void setupUi(QWidget *GameWidget)
    {
        if (GameWidget->objectName().isEmpty())
            GameWidget->setObjectName("GameWidget");
        GameWidget->setWindowModality(Qt::WindowModality::ApplicationModal);
        GameWidget->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameWidget->sizePolicy().hasHeightForWidth());
        GameWidget->setSizePolicy(sizePolicy);
        GameWidget->setMinimumSize(QSize(640, 360));
        GameWidget->setAutoFillBackground(false);
        GameWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 100, 0);"));
        mainVerticalLayout = new QVBoxLayout(GameWidget);
        mainVerticalLayout->setSpacing(10);
        mainVerticalLayout->setObjectName("mainVerticalLayout");
        mainVerticalLayout->setContentsMargins(10, 10, 10, 10);
        topHorizontalLayout = new QHBoxLayout();
        topHorizontalLayout->setObjectName("topHorizontalLayout");
        labelsVerticalLayout = new QVBoxLayout();
        labelsVerticalLayout->setSpacing(5);
        labelsVerticalLayout->setObjectName("labelsVerticalLayout");
        balanceLabel = new QLabel(GameWidget);
        balanceLabel->setObjectName("balanceLabel");

        labelsVerticalLayout->addWidget(balanceLabel, 0, Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        balanceUpdateLabel = new QLabel(GameWidget);
        balanceUpdateLabel->setObjectName("balanceUpdateLabel");
        balanceUpdateLabel->setMinimumSize(QSize(0, 25));
        balanceUpdateLabel->setVisible(false);

        labelsVerticalLayout->addWidget(balanceUpdateLabel, 0, Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignBottom);


        topHorizontalLayout->addLayout(labelsVerticalLayout);

        numberOfDecksButton = new QPushButton(GameWidget);
        numberOfDecksButton->setObjectName("numberOfDecksButton");
        numberOfDecksButton->setStyleSheet(QString::fromUtf8("font-size: 14pt; font-weight: bold;\n"
"background-color: rgb(61, 56, 70);"));

        topHorizontalLayout->addWidget(numberOfDecksButton, 0, Qt::AlignmentFlag::AlignRight);

        showCountButton = new QPushButton(GameWidget);
        showCountButton->setObjectName("showCountButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(64);
        sizePolicy1.setVerticalStretch(64);
        sizePolicy1.setHeightForWidth(showCountButton->sizePolicy().hasHeightForWidth());
        showCountButton->setSizePolicy(sizePolicy1);
        showCountButton->setMinimumSize(QSize(64, 64));
        showCountButton->setMaximumSize(QSize(64, 64));
        showCountButton->setStyleSheet(QString::fromUtf8("font-size: 14pt; font-weight: bold;\n"
"background-color: rgb(61, 56, 70);"));

        topHorizontalLayout->addWidget(showCountButton);

        strategyChartButton = new QPushButton(GameWidget);
        strategyChartButton->setObjectName("strategyChartButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(strategyChartButton->sizePolicy().hasHeightForWidth());
        strategyChartButton->setSizePolicy(sizePolicy2);
        strategyChartButton->setMinimumSize(QSize(64, 64));
        strategyChartButton->setMaximumSize(QSize(64, 64));
        strategyChartButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        topHorizontalLayout->addWidget(strategyChartButton);

        returnButton = new QPushButton(GameWidget);
        returnButton->setObjectName("returnButton");
        sizePolicy1.setHeightForWidth(returnButton->sizePolicy().hasHeightForWidth());
        returnButton->setSizePolicy(sizePolicy1);
        returnButton->setMinimumSize(QSize(64, 64));
        returnButton->setMaximumSize(QSize(64, 64));
        returnButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        topHorizontalLayout->addWidget(returnButton);


        mainVerticalLayout->addLayout(topHorizontalLayout);

        betDisplayTopSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        mainVerticalLayout->addItem(betDisplayTopSpacer);

        betDisplayLayout = new QHBoxLayout();
        betDisplayLayout->setSpacing(10);
        betDisplayLayout->setObjectName("betDisplayLayout");
        displayChipsLeftSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        betDisplayLayout->addItem(displayChipsLeftSpacer);

        betDisplay1Layout = new QVBoxLayout();
        betDisplay1Layout->setSpacing(5);
        betDisplay1Layout->setObjectName("betDisplay1Layout");
        betDisplay1Button = new QPushButton(GameWidget);
        betDisplay1Button->setObjectName("betDisplay1Button");
        betDisplay1Button->setMinimumSize(QSize(150, 150));
        betDisplay1Button->setMaximumSize(QSize(150, 150));
        betDisplay1Button->setVisible(false);

        betDisplay1Layout->addWidget(betDisplay1Button);

        betDisplay1CountLabel = new QLabel(GameWidget);
        betDisplay1CountLabel->setObjectName("betDisplay1CountLabel");
        betDisplay1CountLabel->setVisible(false);
        betDisplay1CountLabel->setStyleSheet(QString::fromUtf8("font-size: 14pt; font-weight: bold; color: white;"));
        betDisplay1CountLabel->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        betDisplay1Layout->addWidget(betDisplay1CountLabel);


        betDisplayLayout->addLayout(betDisplay1Layout);

        betDisplay5Layout = new QVBoxLayout();
        betDisplay5Layout->setSpacing(5);
        betDisplay5Layout->setObjectName("betDisplay5Layout");
        betDisplay5Button = new QPushButton(GameWidget);
        betDisplay5Button->setObjectName("betDisplay5Button");
        betDisplay5Button->setMinimumSize(QSize(150, 150));
        betDisplay5Button->setMaximumSize(QSize(150, 150));
        betDisplay5Button->setVisible(false);

        betDisplay5Layout->addWidget(betDisplay5Button);

        betDisplay5CountLabel = new QLabel(GameWidget);
        betDisplay5CountLabel->setObjectName("betDisplay5CountLabel");
        betDisplay5CountLabel->setVisible(false);
        betDisplay5CountLabel->setStyleSheet(QString::fromUtf8("font-size: 14pt; font-weight: bold; color: white;"));
        betDisplay5CountLabel->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        betDisplay5Layout->addWidget(betDisplay5CountLabel);


        betDisplayLayout->addLayout(betDisplay5Layout);

        betDisplay10Layout = new QVBoxLayout();
        betDisplay10Layout->setSpacing(5);
        betDisplay10Layout->setObjectName("betDisplay10Layout");
        betDisplay10Button = new QPushButton(GameWidget);
        betDisplay10Button->setObjectName("betDisplay10Button");
        betDisplay10Button->setMinimumSize(QSize(150, 150));
        betDisplay10Button->setMaximumSize(QSize(150, 150));
        betDisplay10Button->setVisible(false);

        betDisplay10Layout->addWidget(betDisplay10Button);

        betDisplay10CountLabel = new QLabel(GameWidget);
        betDisplay10CountLabel->setObjectName("betDisplay10CountLabel");
        betDisplay10CountLabel->setVisible(false);
        betDisplay10CountLabel->setStyleSheet(QString::fromUtf8("font-size: 14pt; font-weight: bold; color: white;"));
        betDisplay10CountLabel->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        betDisplay10Layout->addWidget(betDisplay10CountLabel);


        betDisplayLayout->addLayout(betDisplay10Layout);

        betDisplay25Layout = new QVBoxLayout();
        betDisplay25Layout->setSpacing(5);
        betDisplay25Layout->setObjectName("betDisplay25Layout");
        betDisplay25Button = new QPushButton(GameWidget);
        betDisplay25Button->setObjectName("betDisplay25Button");
        betDisplay25Button->setMinimumSize(QSize(150, 150));
        betDisplay25Button->setMaximumSize(QSize(150, 150));
        betDisplay25Button->setVisible(false);

        betDisplay25Layout->addWidget(betDisplay25Button);

        betDisplay25CountLabel = new QLabel(GameWidget);
        betDisplay25CountLabel->setObjectName("betDisplay25CountLabel");
        betDisplay25CountLabel->setVisible(false);
        betDisplay25CountLabel->setStyleSheet(QString::fromUtf8("font-size: 14pt; font-weight: bold; color: white;"));
        betDisplay25CountLabel->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        betDisplay25Layout->addWidget(betDisplay25CountLabel);


        betDisplayLayout->addLayout(betDisplay25Layout);

        betDisplay50Layout = new QVBoxLayout();
        betDisplay50Layout->setSpacing(5);
        betDisplay50Layout->setObjectName("betDisplay50Layout");
        betDisplay50Button = new QPushButton(GameWidget);
        betDisplay50Button->setObjectName("betDisplay50Button");
        betDisplay50Button->setMinimumSize(QSize(150, 150));
        betDisplay50Button->setMaximumSize(QSize(150, 150));
        betDisplay50Button->setVisible(false);

        betDisplay50Layout->addWidget(betDisplay50Button);

        betDisplay50CountLabel = new QLabel(GameWidget);
        betDisplay50CountLabel->setObjectName("betDisplay50CountLabel");
        betDisplay50CountLabel->setVisible(false);
        betDisplay50CountLabel->setStyleSheet(QString::fromUtf8("font-size: 14pt; font-weight: bold; color: white;"));
        betDisplay50CountLabel->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        betDisplay50Layout->addWidget(betDisplay50CountLabel);


        betDisplayLayout->addLayout(betDisplay50Layout);

        betDisplay100Layout = new QVBoxLayout();
        betDisplay100Layout->setSpacing(5);
        betDisplay100Layout->setObjectName("betDisplay100Layout");
        betDisplay100Button = new QPushButton(GameWidget);
        betDisplay100Button->setObjectName("betDisplay100Button");
        betDisplay100Button->setMinimumSize(QSize(150, 150));
        betDisplay100Button->setMaximumSize(QSize(150, 150));
        betDisplay100Button->setVisible(false);

        betDisplay100Layout->addWidget(betDisplay100Button);

        betDisplay100CountLabel = new QLabel(GameWidget);
        betDisplay100CountLabel->setObjectName("betDisplay100CountLabel");
        betDisplay100CountLabel->setVisible(false);
        betDisplay100CountLabel->setStyleSheet(QString::fromUtf8("font-size: 14pt; font-weight: bold; color: white;"));
        betDisplay100CountLabel->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        betDisplay100Layout->addWidget(betDisplay100CountLabel);


        betDisplayLayout->addLayout(betDisplay100Layout);

        displayChipsRightSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        betDisplayLayout->addItem(displayChipsRightSpacer);


        mainVerticalLayout->addLayout(betDisplayLayout);

        betDisplayBottomSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        mainVerticalLayout->addItem(betDisplayBottomSpacer);

        bottomVerticalLayout = new QVBoxLayout();
        bottomVerticalLayout->setSpacing(15);
        bottomVerticalLayout->setObjectName("bottomVerticalLayout");
        startButtonLayout = new QHBoxLayout();
        startButtonLayout->setObjectName("startButtonLayout");
        startRoundButton = new QPushButton(GameWidget);
        startRoundButton->setObjectName("startRoundButton");
        sizePolicy2.setHeightForWidth(startRoundButton->sizePolicy().hasHeightForWidth());
        startRoundButton->setSizePolicy(sizePolicy2);
        startRoundButton->setMinimumSize(QSize(400, 100));
        startRoundButton->setMaximumSize(QSize(400, 100));
        startRoundButton->setStyleSheet(QString::fromUtf8("font-size: 16pt; font-weight: bold;\n"
"background-color: rgb(61, 56, 70);"));

        startButtonLayout->addWidget(startRoundButton, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);


        bottomVerticalLayout->addLayout(startButtonLayout);

        bottomButtonsLayout = new QHBoxLayout();
        bottomButtonsLayout->setSpacing(10);
        bottomButtonsLayout->setObjectName("bottomButtonsLayout");
        chipButtonsLeftSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        bottomButtonsLayout->addItem(chipButtonsLeftSpacer);

        chip1Button = new QPushButton(GameWidget);
        chip1Button->setObjectName("chip1Button");
        chip1Button->setMinimumSize(QSize(150, 150));
        chip1Button->setMaximumSize(QSize(150, 150));
        chip1Button->setStyleSheet(QString::fromUtf8("font-size: 14pt; font-weight: bold;\n"
"background-color: rgb(61, 56, 70);"));

        bottomButtonsLayout->addWidget(chip1Button);

        chip5Button = new QPushButton(GameWidget);
        chip5Button->setObjectName("chip5Button");
        chip5Button->setMinimumSize(QSize(150, 150));
        chip5Button->setMaximumSize(QSize(150, 150));
        chip5Button->setStyleSheet(QString::fromUtf8("font-size: 14pt; font-weight: bold;\n"
"background-color: rgb(61, 56, 70);"));

        bottomButtonsLayout->addWidget(chip5Button);

        chip10Button = new QPushButton(GameWidget);
        chip10Button->setObjectName("chip10Button");
        chip10Button->setMinimumSize(QSize(150, 150));
        chip10Button->setMaximumSize(QSize(150, 150));
        chip10Button->setStyleSheet(QString::fromUtf8("font-size: 14pt; font-weight: bold;\n"
"background-color: rgb(61, 56, 70);"));

        bottomButtonsLayout->addWidget(chip10Button);

        chip25Button = new QPushButton(GameWidget);
        chip25Button->setObjectName("chip25Button");
        chip25Button->setMinimumSize(QSize(150, 150));
        chip25Button->setMaximumSize(QSize(150, 150));
        chip25Button->setStyleSheet(QString::fromUtf8("font-size: 14pt; font-weight: bold;\n"
"background-color: rgb(61, 56, 70);"));

        bottomButtonsLayout->addWidget(chip25Button);

        chip50Button = new QPushButton(GameWidget);
        chip50Button->setObjectName("chip50Button");
        chip50Button->setMinimumSize(QSize(150, 150));
        chip50Button->setMaximumSize(QSize(150, 150));
        chip50Button->setStyleSheet(QString::fromUtf8("font-size: 14pt; font-weight: bold;\n"
"background-color: rgb(61, 56, 70);"));

        bottomButtonsLayout->addWidget(chip50Button);

        chip100Button = new QPushButton(GameWidget);
        chip100Button->setObjectName("chip100Button");
        chip100Button->setMinimumSize(QSize(150, 150));
        chip100Button->setMaximumSize(QSize(150, 150));
        chip100Button->setStyleSheet(QString::fromUtf8("font-size: 14pt; font-weight: bold;\n"
"background-color: rgb(61, 56, 70);"));

        bottomButtonsLayout->addWidget(chip100Button);

        hitButton = new QPushButton(GameWidget);
        hitButton->setObjectName("hitButton");
        sizePolicy2.setHeightForWidth(hitButton->sizePolicy().hasHeightForWidth());
        hitButton->setSizePolicy(sizePolicy2);
        hitButton->setMinimumSize(QSize(100, 100));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        hitButton->setFont(font);
        hitButton->setStyleSheet(QString::fromUtf8("font-size: 16pt; font-weight: bold;\n"
"background-color: rgb(61, 56, 70);"));

        bottomButtonsLayout->addWidget(hitButton);

        standButton = new QPushButton(GameWidget);
        standButton->setObjectName("standButton");
        sizePolicy2.setHeightForWidth(standButton->sizePolicy().hasHeightForWidth());
        standButton->setSizePolicy(sizePolicy2);
        standButton->setMinimumSize(QSize(100, 100));
        standButton->setFont(font);
        standButton->setStyleSheet(QString::fromUtf8("font-size: 16pt; font-weight: bold;\n"
"background-color: rgb(61, 56, 70);"));

        bottomButtonsLayout->addWidget(standButton);

        doubleButton = new QPushButton(GameWidget);
        doubleButton->setObjectName("doubleButton");
        sizePolicy2.setHeightForWidth(doubleButton->sizePolicy().hasHeightForWidth());
        doubleButton->setSizePolicy(sizePolicy2);
        doubleButton->setMinimumSize(QSize(100, 100));
        doubleButton->setStyleSheet(QString::fromUtf8("font-size: 16pt; font-weight: bold;\n"
"background-color: rgb(61, 56, 70);"));

        bottomButtonsLayout->addWidget(doubleButton);

        splitButton = new QPushButton(GameWidget);
        splitButton->setObjectName("splitButton");
        splitButton->setMinimumSize(QSize(100, 100));
        splitButton->setStyleSheet(QString::fromUtf8("font-size: 16pt; font-weight: bold;\n"
"background-color: rgb(61, 56, 70);"));

        bottomButtonsLayout->addWidget(splitButton);

        surrenderButton = new QPushButton(GameWidget);
        surrenderButton->setObjectName("surrenderButton");
        sizePolicy2.setHeightForWidth(surrenderButton->sizePolicy().hasHeightForWidth());
        surrenderButton->setSizePolicy(sizePolicy2);
        surrenderButton->setMinimumSize(QSize(100, 100));
        surrenderButton->setStyleSheet(QString::fromUtf8("font-size: 16pt; font-weight: bold;\n"
"background-color: rgb(61, 56, 70);"));

        bottomButtonsLayout->addWidget(surrenderButton);

        chipButtonsRightSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        bottomButtonsLayout->addItem(chipButtonsRightSpacer);


        bottomVerticalLayout->addLayout(bottomButtonsLayout);


        mainVerticalLayout->addLayout(bottomVerticalLayout);


        retranslateUi(GameWidget);

        QMetaObject::connectSlotsByName(GameWidget);
    } // setupUi

    void retranslateUi(QWidget *GameWidget)
    {
        GameWidget->setWindowTitle(QCoreApplication::translate("GameWidget", "Form", nullptr));
        balanceLabel->setStyleSheet(QCoreApplication::translate("GameWidget", "font-size: 16pt; font-weight: bold; color: #d4af37;", nullptr));
        balanceLabel->setText(QCoreApplication::translate("GameWidget", "$1000", nullptr));
        balanceUpdateLabel->setStyleSheet(QCoreApplication::translate("GameWidget", "font-size: 14pt; font-weight: bold; color: #ff4444;", nullptr));
        balanceUpdateLabel->setText(QString());
        numberOfDecksButton->setText(QCoreApplication::translate("GameWidget", "Decks", nullptr));
        showCountButton->setText(QCoreApplication::translate("GameWidget", "Ct", nullptr));
        strategyChartButton->setText(QCoreApplication::translate("GameWidget", "hint", nullptr));
        returnButton->setText(QCoreApplication::translate("GameWidget", "menu", nullptr));
        betDisplay1Button->setStyleSheet(QCoreApplication::translate("GameWidget", "font-size: 12pt; font-weight: bold; background-color: #2b1f0e; color: #d4af37; border: 2px solid #d4af37; border-radius: 40px;", nullptr));
        betDisplay1Button->setText(QCoreApplication::translate("GameWidget", "$1", nullptr));
        betDisplay1CountLabel->setText(QString());
        betDisplay5Button->setStyleSheet(QCoreApplication::translate("GameWidget", "font-size: 12pt; font-weight: bold; background-color: #2b1f0e; color: #d4af37; border: 2px solid #d4af37; border-radius: 40px;", nullptr));
        betDisplay5Button->setText(QCoreApplication::translate("GameWidget", "$5", nullptr));
        betDisplay5CountLabel->setText(QString());
        betDisplay10Button->setStyleSheet(QCoreApplication::translate("GameWidget", "font-size: 12pt; font-weight: bold; background-color: #2b1f0e; color: #d4af37; border: 2px solid #d4af37; border-radius: 40px;", nullptr));
        betDisplay10Button->setText(QCoreApplication::translate("GameWidget", "$10", nullptr));
        betDisplay10CountLabel->setText(QString());
        betDisplay25Button->setStyleSheet(QCoreApplication::translate("GameWidget", "font-size: 12pt; font-weight: bold; background-color: #2b1f0e; color: #d4af37; border: 2px solid #d4af37; border-radius: 40px;", nullptr));
        betDisplay25Button->setText(QCoreApplication::translate("GameWidget", "$25", nullptr));
        betDisplay25CountLabel->setText(QString());
        betDisplay50Button->setStyleSheet(QCoreApplication::translate("GameWidget", "font-size: 12pt; font-weight: bold; background-color: #2b1f0e; color: #d4af37; border: 2px solid #d4af37; border-radius: 40px;", nullptr));
        betDisplay50Button->setText(QCoreApplication::translate("GameWidget", "$50", nullptr));
        betDisplay50CountLabel->setText(QString());
        betDisplay100Button->setStyleSheet(QCoreApplication::translate("GameWidget", "font-size: 12pt; font-weight: bold; background-color: #2b1f0e; color: #d4af37; border: 2px solid #d4af37; border-radius: 40px;", nullptr));
        betDisplay100Button->setText(QCoreApplication::translate("GameWidget", "$100", nullptr));
        betDisplay100CountLabel->setText(QString());
        startRoundButton->setText(QCoreApplication::translate("GameWidget", "Start Round", nullptr));
        chip1Button->setText(QCoreApplication::translate("GameWidget", "$1", nullptr));
        chip5Button->setText(QCoreApplication::translate("GameWidget", "$5", nullptr));
        chip10Button->setText(QCoreApplication::translate("GameWidget", "$10", nullptr));
        chip25Button->setText(QCoreApplication::translate("GameWidget", "$25", nullptr));
        chip50Button->setText(QCoreApplication::translate("GameWidget", "$50", nullptr));
        chip100Button->setText(QCoreApplication::translate("GameWidget", "$100", nullptr));
        hitButton->setText(QCoreApplication::translate("GameWidget", "HIT", nullptr));
        standButton->setText(QCoreApplication::translate("GameWidget", "STAND", nullptr));
        doubleButton->setText(QCoreApplication::translate("GameWidget", "DOUBLE", nullptr));
        splitButton->setText(QCoreApplication::translate("GameWidget", "SPLIT", nullptr));
        surrenderButton->setText(QCoreApplication::translate("GameWidget", "Surrender", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameWidget: public Ui_GameWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_WIDGET_H
