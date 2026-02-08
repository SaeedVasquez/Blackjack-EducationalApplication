/********************************************************************************
** Form generated from reading UI file 'strategy_chart_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRATEGY_CHART_DIALOG_H
#define UI_STRATEGY_CHART_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StrategyChartDialog
{
public:
    QWidget *chartWidget;
    QVBoxLayout *verticalLayout;
    QLabel *chartLabel;

    void setupUi(QWidget *StrategyChartDialog)
    {
        if (StrategyChartDialog->objectName().isEmpty())
            StrategyChartDialog->setObjectName("StrategyChartDialog");
        StrategyChartDialog->setEnabled(true);
        StrategyChartDialog->resize(800, 600);
        StrategyChartDialog->setAutoFillBackground(true);
        StrategyChartDialog->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 150)"));
        chartWidget = new QWidget(StrategyChartDialog);
        chartWidget->setObjectName("chartWidget");
        chartWidget->setEnabled(true);
        chartWidget->setGeometry(QRect(100, 100, 600, 400));
        chartWidget->setStyleSheet(QString::fromUtf8("background-color: white; border: 2px solid #333; border-radius: 10px;"));
        verticalLayout = new QVBoxLayout(chartWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        chartLabel = new QLabel(chartWidget);
        chartLabel->setObjectName("chartLabel");
        chartLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(chartLabel);


        retranslateUi(StrategyChartDialog);

        QMetaObject::connectSlotsByName(StrategyChartDialog);
    } // setupUi

    void retranslateUi(QWidget *StrategyChartDialog)
    {
        StrategyChartDialog->setWindowTitle(QCoreApplication::translate("StrategyChartDialog", "Strategy Chart", nullptr));
        chartLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StrategyChartDialog: public Ui_StrategyChartDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRATEGY_CHART_DIALOG_H
