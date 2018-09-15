/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *StatusLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *RoomNumLabel;
    QLineEdit *RoomNumLineEdit;
    QLabel *UserIDLabel;
    QLineEdit *UserIDLineEdit;
    QPushButton *LoginBtn;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *RoomTempLabel;
    QLabel *HighestTemperature;
    QLabel *LowestTemperature;
    QVBoxLayout *verticalLayout_4;
    QLabel *RealTimeTemperatureLabel;
    QLabel *HighestTemperatureLabel;
    QLabel *LowestTemperatureLabel;
    QVBoxLayout *verticalLayout_5;
    QLabel *WorkMode;
    QLabel *Consumption;
    QLabel *Fee;
    QVBoxLayout *verticalLayout_6;
    QLabel *WorkModeLabel;
    QLabel *ConsumptionLabel;
    QLabel *FeeLabel;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *TargetTempLabel;
    QLabel *TargetTemperatureLabel;
    QPushButton *UpTemperatureBtn;
    QPushButton *DownTemperatureBtn;
    QVBoxLayout *verticalLayout_2;
    QLabel *WindVelocity;
    QLabel *WindVelocityLabel;
    QPushButton *HighVelocityBtn;
    QPushButton *MidVelocityBtn;
    QPushButton *LowVelocityBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(746, 426);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_8 = new QVBoxLayout(centralWidget);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        StatusLabel = new QLabel(centralWidget);
        StatusLabel->setObjectName(QStringLiteral("StatusLabel"));

        horizontalLayout_3->addWidget(StatusLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        RoomNumLabel = new QLabel(centralWidget);
        RoomNumLabel->setObjectName(QStringLiteral("RoomNumLabel"));

        horizontalLayout_2->addWidget(RoomNumLabel);

        RoomNumLineEdit = new QLineEdit(centralWidget);
        RoomNumLineEdit->setObjectName(QStringLiteral("RoomNumLineEdit"));

        horizontalLayout_2->addWidget(RoomNumLineEdit);

        UserIDLabel = new QLabel(centralWidget);
        UserIDLabel->setObjectName(QStringLiteral("UserIDLabel"));

        horizontalLayout_2->addWidget(UserIDLabel);

        UserIDLineEdit = new QLineEdit(centralWidget);
        UserIDLineEdit->setObjectName(QStringLiteral("UserIDLineEdit"));

        horizontalLayout_2->addWidget(UserIDLineEdit);

        LoginBtn = new QPushButton(centralWidget);
        LoginBtn->setObjectName(QStringLiteral("LoginBtn"));

        horizontalLayout_2->addWidget(LoginBtn);


        verticalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        RoomTempLabel = new QLabel(centralWidget);
        RoomTempLabel->setObjectName(QStringLiteral("RoomTempLabel"));

        verticalLayout_3->addWidget(RoomTempLabel);

        HighestTemperature = new QLabel(centralWidget);
        HighestTemperature->setObjectName(QStringLiteral("HighestTemperature"));

        verticalLayout_3->addWidget(HighestTemperature);

        LowestTemperature = new QLabel(centralWidget);
        LowestTemperature->setObjectName(QStringLiteral("LowestTemperature"));

        verticalLayout_3->addWidget(LowestTemperature);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        RealTimeTemperatureLabel = new QLabel(centralWidget);
        RealTimeTemperatureLabel->setObjectName(QStringLiteral("RealTimeTemperatureLabel"));

        verticalLayout_4->addWidget(RealTimeTemperatureLabel);

        HighestTemperatureLabel = new QLabel(centralWidget);
        HighestTemperatureLabel->setObjectName(QStringLiteral("HighestTemperatureLabel"));

        verticalLayout_4->addWidget(HighestTemperatureLabel);

        LowestTemperatureLabel = new QLabel(centralWidget);
        LowestTemperatureLabel->setObjectName(QStringLiteral("LowestTemperatureLabel"));

        verticalLayout_4->addWidget(LowestTemperatureLabel);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        WorkMode = new QLabel(centralWidget);
        WorkMode->setObjectName(QStringLiteral("WorkMode"));

        verticalLayout_5->addWidget(WorkMode);

        Consumption = new QLabel(centralWidget);
        Consumption->setObjectName(QStringLiteral("Consumption"));

        verticalLayout_5->addWidget(Consumption);

        Fee = new QLabel(centralWidget);
        Fee->setObjectName(QStringLiteral("Fee"));

        verticalLayout_5->addWidget(Fee);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        WorkModeLabel = new QLabel(centralWidget);
        WorkModeLabel->setObjectName(QStringLiteral("WorkModeLabel"));

        verticalLayout_6->addWidget(WorkModeLabel);

        ConsumptionLabel = new QLabel(centralWidget);
        ConsumptionLabel->setObjectName(QStringLiteral("ConsumptionLabel"));

        verticalLayout_6->addWidget(ConsumptionLabel);

        FeeLabel = new QLabel(centralWidget);
        FeeLabel->setObjectName(QStringLiteral("FeeLabel"));

        verticalLayout_6->addWidget(FeeLabel);


        horizontalLayout_4->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        TargetTempLabel = new QLabel(centralWidget);
        TargetTempLabel->setObjectName(QStringLiteral("TargetTempLabel"));

        verticalLayout->addWidget(TargetTempLabel);

        TargetTemperatureLabel = new QLabel(centralWidget);
        TargetTemperatureLabel->setObjectName(QStringLiteral("TargetTemperatureLabel"));

        verticalLayout->addWidget(TargetTemperatureLabel);

        UpTemperatureBtn = new QPushButton(centralWidget);
        UpTemperatureBtn->setObjectName(QStringLiteral("UpTemperatureBtn"));

        verticalLayout->addWidget(UpTemperatureBtn);

        DownTemperatureBtn = new QPushButton(centralWidget);
        DownTemperatureBtn->setObjectName(QStringLiteral("DownTemperatureBtn"));

        verticalLayout->addWidget(DownTemperatureBtn);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        WindVelocity = new QLabel(centralWidget);
        WindVelocity->setObjectName(QStringLiteral("WindVelocity"));

        verticalLayout_2->addWidget(WindVelocity);

        WindVelocityLabel = new QLabel(centralWidget);
        WindVelocityLabel->setObjectName(QStringLiteral("WindVelocityLabel"));

        verticalLayout_2->addWidget(WindVelocityLabel);

        HighVelocityBtn = new QPushButton(centralWidget);
        HighVelocityBtn->setObjectName(QStringLiteral("HighVelocityBtn"));

        verticalLayout_2->addWidget(HighVelocityBtn);

        MidVelocityBtn = new QPushButton(centralWidget);
        MidVelocityBtn->setObjectName(QStringLiteral("MidVelocityBtn"));

        verticalLayout_2->addWidget(MidVelocityBtn);

        LowVelocityBtn = new QPushButton(centralWidget);
        LowVelocityBtn->setObjectName(QStringLiteral("LowVelocityBtn"));

        verticalLayout_2->addWidget(LowVelocityBtn);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_7->addLayout(horizontalLayout);


        verticalLayout_8->addLayout(verticalLayout_7);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 746, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        StatusLabel->setText(QApplication::translate("MainWindow", "ShutDown", 0));
        RoomNumLabel->setText(QApplication::translate("MainWindow", "RoomNum:", 0));
        UserIDLabel->setText(QApplication::translate("MainWindow", "UserID:", 0));
        LoginBtn->setText(QApplication::translate("MainWindow", "Login", 0));
        RoomTempLabel->setText(QApplication::translate("MainWindow", "Room Temperature:", 0));
        HighestTemperature->setText(QApplication::translate("MainWindow", "Enable Highedst:", 0));
        LowestTemperature->setText(QApplication::translate("MainWindow", "Enable Lowest:", 0));
        RealTimeTemperatureLabel->setText(QApplication::translate("MainWindow", "25 Celsius", 0));
        HighestTemperatureLabel->setText(QString());
        LowestTemperatureLabel->setText(QString());
        WorkMode->setText(QApplication::translate("MainWindow", "WorkMode:", 0));
        Consumption->setText(QApplication::translate("MainWindow", "Consumption:", 0));
        Fee->setText(QApplication::translate("MainWindow", "Fee:", 0));
        WorkModeLabel->setText(QString());
        ConsumptionLabel->setText(QApplication::translate("MainWindow", "0", 0));
        FeeLabel->setText(QApplication::translate("MainWindow", "0", 0));
        TargetTempLabel->setText(QApplication::translate("MainWindow", "Target Temperature\357\274\232", 0));
        TargetTemperatureLabel->setText(QApplication::translate("MainWindow", "25", 0));
        UpTemperatureBtn->setText(QApplication::translate("MainWindow", "Up", 0));
        DownTemperatureBtn->setText(QApplication::translate("MainWindow", "Down", 0));
        WindVelocity->setText(QApplication::translate("MainWindow", "Wind Velocity:", 0));
        WindVelocityLabel->setText(QApplication::translate("MainWindow", "Low", 0));
        HighVelocityBtn->setText(QApplication::translate("MainWindow", "High", 0));
        MidVelocityBtn->setText(QApplication::translate("MainWindow", "Mid", 0));
        LowVelocityBtn->setText(QApplication::translate("MainWindow", "Low", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
