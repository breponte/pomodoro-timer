/********************************************************************************
** Form generated from reading UI file 'pomodoro_timer.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POMODORO_TIMER_H
#define UI_POMODORO_TIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pomodoro_Timer
{
public:
    QLCDNumber *hours_display;
    QLCDNumber *minutes_display;
    QLCDNumber *seconds_display;
    QPushButton *start_button;
    QPushButton *reset_button;
    QDial *dial;
    QLabel *state_label;
    QPushButton *settings_button;
    QPushButton *notes_button;
    QTextEdit *notes_text;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_2;

    void setupUi(QWidget *Pomodoro_Timer)
    {
        if (Pomodoro_Timer->objectName().isEmpty())
            Pomodoro_Timer->setObjectName("Pomodoro_Timer");
        Pomodoro_Timer->resize(411, 292);
        QFont font;
        font.setPointSize(6);
        Pomodoro_Timer->setFont(font);
        hours_display = new QLCDNumber(Pomodoro_Timer);
        hours_display->setObjectName("hours_display");
        hours_display->setGeometry(QRect(90, 100, 71, 61));
        hours_display->setDigitCount(2);
        hours_display->setProperty("value", QVariant(24.000000000000000));
        minutes_display = new QLCDNumber(Pomodoro_Timer);
        minutes_display->setObjectName("minutes_display");
        minutes_display->setGeometry(QRect(170, 100, 71, 61));
        minutes_display->setDigitCount(2);
        minutes_display->setProperty("value", QVariant(60.000000000000000));
        seconds_display = new QLCDNumber(Pomodoro_Timer);
        seconds_display->setObjectName("seconds_display");
        seconds_display->setEnabled(true);
        seconds_display->setGeometry(QRect(250, 100, 71, 61));
        seconds_display->setDigitCount(2);
        seconds_display->setProperty("value", QVariant(60.000000000000000));
        start_button = new QPushButton(Pomodoro_Timer);
        start_button->setObjectName("start_button");
        start_button->setGeometry(QRect(120, 170, 80, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("8514oem")});
        font1.setPointSize(18);
        start_button->setFont(font1);
        reset_button = new QPushButton(Pomodoro_Timer);
        reset_button->setObjectName("reset_button");
        reset_button->setGeometry(QRect(220, 170, 80, 21));
        reset_button->setFont(font1);
        dial = new QDial(Pomodoro_Timer);
        dial->setObjectName("dial");
        dial->setGeometry(QRect(180, 20, 51, 51));
        dial->setMaximum(90);
        dial->setSingleStep(1);
        dial->setPageStep(10);
        dial->setValue(90);
        dial->setSliderPosition(90);
        dial->setOrientation(Qt::Horizontal);
        dial->setInvertedAppearance(false);
        dial->setWrapping(true);
        dial->setNotchTarget(30.000000000000000);
        dial->setNotchesVisible(true);
        state_label = new QLabel(Pomodoro_Timer);
        state_label->setObjectName("state_label");
        state_label->setGeometry(QRect(150, 70, 111, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("8514oem")});
        font2.setPointSize(9);
        state_label->setFont(font2);
        settings_button = new QPushButton(Pomodoro_Timer);
        settings_button->setObjectName("settings_button");
        settings_button->setGeometry(QRect(349, 10, 51, 21));
        QFont font3;
        font3.setPointSize(9);
        settings_button->setFont(font3);
        notes_button = new QPushButton(Pomodoro_Timer);
        notes_button->setObjectName("notes_button");
        notes_button->setGeometry(QRect(289, 10, 51, 21));
        notes_button->setFont(font3);
        notes_text = new QTextEdit(Pomodoro_Timer);
        notes_text->setObjectName("notes_text");
        notes_text->setEnabled(false);
        notes_text->setGeometry(QRect(0, 40, 0, 0));
        widget = new QWidget(Pomodoro_Timer);
        widget->setObjectName("widget");
        widget->setEnabled(false);
        widget->setGeometry(QRect(330, 40, 74, 131));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName("radioButton");

        verticalLayout->addWidget(radioButton);

        radioButton_3 = new QRadioButton(widget);
        radioButton_3->setObjectName("radioButton_3");

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(widget);
        radioButton_4->setObjectName("radioButton_4");

        verticalLayout->addWidget(radioButton_4);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName("radioButton_2");

        verticalLayout->addWidget(radioButton_2);


        retranslateUi(Pomodoro_Timer);

        QMetaObject::connectSlotsByName(Pomodoro_Timer);
    } // setupUi

    void retranslateUi(QWidget *Pomodoro_Timer)
    {
        Pomodoro_Timer->setWindowTitle(QCoreApplication::translate("Pomodoro_Timer", "Pomodoro_Timer", nullptr));
        start_button->setText(QCoreApplication::translate("Pomodoro_Timer", "Start", nullptr));
        reset_button->setText(QCoreApplication::translate("Pomodoro_Timer", "Reset", nullptr));
        state_label->setText(QCoreApplication::translate("Pomodoro_Timer", "Short Break", nullptr));
        settings_button->setText(QCoreApplication::translate("Pomodoro_Timer", "Settings", nullptr));
        notes_button->setText(QCoreApplication::translate("Pomodoro_Timer", "Notes", nullptr));
        notes_text->setHtml(QCoreApplication::translate("Pomodoro_Timer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:6pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Hello</p></body></html>", nullptr));
        radioButton->setText(QCoreApplication::translate("Pomodoro_Timer", "RadioButton", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Pomodoro_Timer", "RadioButton", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Pomodoro_Timer", "RadioButton", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Pomodoro_Timer", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pomodoro_Timer: public Ui_Pomodoro_Timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POMODORO_TIMER_H
