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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
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
    QWidget *notes_widget;
    QTextEdit *notes_text;
    QPushButton *notes_button;
    QWidget *settings_widget;
    QGridLayout *gridLayout;
    QSpinBox *edit_seconds_2;
    QSpinBox *edit_hours_2;
    QLabel *settings_seconds_3;
    QSpinBox *edit_hours;
    QLabel *settings_hours_2;
    QLabel *settings_minutes_3;
    QLabel *settings_seconds_2;
    QSpinBox *edit_minutes_2;
    QLabel *settings_seconds;
    QSpinBox *edit_minutes;
    QSpinBox *edit_seconds;
    QLabel *settings_hours_3;
    QLabel *settings_hours;
    QLabel *settings_minutes;
    QLabel *settings_minutes_2;
    QSpinBox *edit_hours_3;
    QSpinBox *edit_minutes_3;
    QSpinBox *edit_seconds_3;
    QLabel *settings_freq;
    QSpinBox *edit_freq;
    QLabel *lobreak_label;
    QLabel *shbreak_label;
    QLabel *study_label;

    void setupUi(QWidget *Pomodoro_Timer)
    {
        if (Pomodoro_Timer->objectName().isEmpty())
            Pomodoro_Timer->setObjectName("Pomodoro_Timer");
        Pomodoro_Timer->resize(411, 292);
        QFont font;
        font.setPointSize(6);
        Pomodoro_Timer->setFont(font);
        Pomodoro_Timer->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 137, 139)"));
        hours_display = new QLCDNumber(Pomodoro_Timer);
        hours_display->setObjectName("hours_display");
        hours_display->setGeometry(QRect(90, 100, 71, 61));
        hours_display->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgb(175, 255, 184)"));
        hours_display->setSmallDecimalPoint(false);
        hours_display->setDigitCount(2);
        hours_display->setMode(QLCDNumber::Dec);
        hours_display->setSegmentStyle(QLCDNumber::Filled);
        hours_display->setProperty("value", QVariant(0.000000000000000));
        minutes_display = new QLCDNumber(Pomodoro_Timer);
        minutes_display->setObjectName("minutes_display");
        minutes_display->setGeometry(QRect(170, 100, 71, 61));
        minutes_display->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgb(175, 255, 184)"));
        minutes_display->setDigitCount(2);
        minutes_display->setProperty("value", QVariant(0.000000000000000));
        seconds_display = new QLCDNumber(Pomodoro_Timer);
        seconds_display->setObjectName("seconds_display");
        seconds_display->setEnabled(true);
        seconds_display->setGeometry(QRect(250, 100, 71, 61));
        seconds_display->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgb(175, 255, 184)"));
        seconds_display->setDigitCount(2);
        seconds_display->setProperty("value", QVariant(0.000000000000000));
        start_button = new QPushButton(Pomodoro_Timer);
        start_button->setObjectName("start_button");
        start_button->setGeometry(QRect(120, 170, 80, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("8514oem")});
        font1.setPointSize(18);
        start_button->setFont(font1);
        start_button->setCursor(QCursor(Qt::PointingHandCursor));
        start_button->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgb(113, 255, 103)"));
        reset_button = new QPushButton(Pomodoro_Timer);
        reset_button->setObjectName("reset_button");
        reset_button->setGeometry(QRect(220, 170, 80, 21));
        reset_button->setFont(font1);
        reset_button->setCursor(QCursor(Qt::PointingHandCursor));
        reset_button->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgb(113, 255, 103)"));
        dial = new QDial(Pomodoro_Timer);
        dial->setObjectName("dial");
        dial->setGeometry(QRect(180, 20, 51, 51));
        dial->setCursor(QCursor(Qt::PointingHandCursor));
        dial->setMouseTracking(false);
        dial->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(175, 255, 184)"));
        dial->setMaximum(90);
        dial->setSingleStep(1);
        dial->setPageStep(10);
        dial->setValue(0);
        dial->setSliderPosition(0);
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
        state_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgb(175, 255, 184)"));
        state_label->setTextFormat(Qt::AutoText);
        state_label->setAlignment(Qt::AlignCenter);
        settings_button = new QPushButton(Pomodoro_Timer);
        settings_button->setObjectName("settings_button");
        settings_button->setGeometry(QRect(290, 10, 51, 21));
        QFont font3;
        font3.setPointSize(9);
        settings_button->setFont(font3);
        settings_button->setCursor(QCursor(Qt::PointingHandCursor));
        settings_button->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgb(113, 255, 103)"));
        notes_widget = new QWidget(Pomodoro_Timer);
        notes_widget->setObjectName("notes_widget");
        notes_widget->setEnabled(true);
        notes_widget->setGeometry(QRect(10, 40, 391, 251));
        notes_widget->setStyleSheet(QString::fromUtf8("background-color: white;"));
        notes_text = new QTextEdit(notes_widget);
        notes_text->setObjectName("notes_text");
        notes_text->setEnabled(true);
        notes_text->setGeometry(QRect(10, 10, 371, 231));
        QFont font4;
        font4.setPointSize(10);
        notes_text->setFont(font4);
        notes_text->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        notes_text->setAutoFillBackground(false);
        notes_text->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgb(254, 255, 216);"));
        notes_button = new QPushButton(Pomodoro_Timer);
        notes_button->setObjectName("notes_button");
        notes_button->setGeometry(QRect(350, 10, 51, 21));
        notes_button->setFont(font3);
        notes_button->setCursor(QCursor(Qt::PointingHandCursor));
        notes_button->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgb(113, 255, 103)"));
        settings_widget = new QWidget(Pomodoro_Timer);
        settings_widget->setObjectName("settings_widget");
        settings_widget->setGeometry(QRect(90, 40, 311, 151));
        settings_widget->setStyleSheet(QString::fromUtf8("background-color: white;"));
        gridLayout = new QGridLayout(settings_widget);
        gridLayout->setObjectName("gridLayout");
        edit_seconds_2 = new QSpinBox(settings_widget);
        edit_seconds_2->setObjectName("edit_seconds_2");
        edit_seconds_2->setStyleSheet(QString::fromUtf8("color: black;"));
        edit_seconds_2->setMaximum(59);

        gridLayout->addWidget(edit_seconds_2, 3, 3, 1, 1);

        edit_hours_2 = new QSpinBox(settings_widget);
        edit_hours_2->setObjectName("edit_hours_2");
        edit_hours_2->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(edit_hours_2, 1, 3, 1, 1);

        settings_seconds_3 = new QLabel(settings_widget);
        settings_seconds_3->setObjectName("settings_seconds_3");
        settings_seconds_3->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(settings_seconds_3, 3, 4, 1, 1);

        edit_hours = new QSpinBox(settings_widget);
        edit_hours->setObjectName("edit_hours");
        edit_hours->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(edit_hours, 1, 1, 1, 1);

        settings_hours_2 = new QLabel(settings_widget);
        settings_hours_2->setObjectName("settings_hours_2");
        settings_hours_2->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(settings_hours_2, 1, 2, 1, 1);

        settings_minutes_3 = new QLabel(settings_widget);
        settings_minutes_3->setObjectName("settings_minutes_3");
        settings_minutes_3->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(settings_minutes_3, 2, 4, 1, 1);

        settings_seconds_2 = new QLabel(settings_widget);
        settings_seconds_2->setObjectName("settings_seconds_2");
        settings_seconds_2->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(settings_seconds_2, 3, 2, 1, 1);

        edit_minutes_2 = new QSpinBox(settings_widget);
        edit_minutes_2->setObjectName("edit_minutes_2");
        edit_minutes_2->setStyleSheet(QString::fromUtf8("color: black;"));
        edit_minutes_2->setMaximum(59);
        edit_minutes_2->setValue(5);

        gridLayout->addWidget(edit_minutes_2, 2, 3, 1, 1);

        settings_seconds = new QLabel(settings_widget);
        settings_seconds->setObjectName("settings_seconds");
        settings_seconds->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(settings_seconds, 3, 0, 1, 1);

        edit_minutes = new QSpinBox(settings_widget);
        edit_minutes->setObjectName("edit_minutes");
        edit_minutes->setStyleSheet(QString::fromUtf8("color: black;"));
        edit_minutes->setMaximum(59);
        edit_minutes->setValue(30);

        gridLayout->addWidget(edit_minutes, 2, 1, 1, 1);

        edit_seconds = new QSpinBox(settings_widget);
        edit_seconds->setObjectName("edit_seconds");
        edit_seconds->setStyleSheet(QString::fromUtf8("color: black;"));
        edit_seconds->setMaximum(59);

        gridLayout->addWidget(edit_seconds, 3, 1, 1, 1);

        settings_hours_3 = new QLabel(settings_widget);
        settings_hours_3->setObjectName("settings_hours_3");
        settings_hours_3->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(settings_hours_3, 1, 4, 1, 1);

        settings_hours = new QLabel(settings_widget);
        settings_hours->setObjectName("settings_hours");
        settings_hours->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(settings_hours, 1, 0, 1, 1);

        settings_minutes = new QLabel(settings_widget);
        settings_minutes->setObjectName("settings_minutes");
        settings_minutes->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(settings_minutes, 2, 0, 1, 1);

        settings_minutes_2 = new QLabel(settings_widget);
        settings_minutes_2->setObjectName("settings_minutes_2");
        settings_minutes_2->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(settings_minutes_2, 2, 2, 1, 1);

        edit_hours_3 = new QSpinBox(settings_widget);
        edit_hours_3->setObjectName("edit_hours_3");
        edit_hours_3->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(edit_hours_3, 1, 5, 1, 1);

        edit_minutes_3 = new QSpinBox(settings_widget);
        edit_minutes_3->setObjectName("edit_minutes_3");
        edit_minutes_3->setStyleSheet(QString::fromUtf8("color: black;"));
        edit_minutes_3->setMaximum(59);
        edit_minutes_3->setValue(30);

        gridLayout->addWidget(edit_minutes_3, 2, 5, 1, 1);

        edit_seconds_3 = new QSpinBox(settings_widget);
        edit_seconds_3->setObjectName("edit_seconds_3");
        edit_seconds_3->setStyleSheet(QString::fromUtf8("color: black;"));
        edit_seconds_3->setMaximum(59);

        gridLayout->addWidget(edit_seconds_3, 3, 5, 1, 1);

        settings_freq = new QLabel(settings_widget);
        settings_freq->setObjectName("settings_freq");
        settings_freq->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(settings_freq, 12, 4, 1, 1);

        edit_freq = new QSpinBox(settings_widget);
        edit_freq->setObjectName("edit_freq");
        edit_freq->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(edit_freq, 12, 5, 1, 1);

        lobreak_label = new QLabel(settings_widget);
        lobreak_label->setObjectName("lobreak_label");
        lobreak_label->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(lobreak_label, 0, 4, 1, 2);

        shbreak_label = new QLabel(settings_widget);
        shbreak_label->setObjectName("shbreak_label");
        shbreak_label->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(shbreak_label, 0, 2, 1, 2);

        study_label = new QLabel(settings_widget);
        study_label->setObjectName("study_label");
        study_label->setStyleSheet(QString::fromUtf8("color: black;"));

        gridLayout->addWidget(study_label, 0, 0, 1, 2);

        dial->raise();
        hours_display->raise();
        minutes_display->raise();
        seconds_display->raise();
        start_button->raise();
        reset_button->raise();
        state_label->raise();
        settings_button->raise();
        notes_widget->raise();
        notes_button->raise();
        settings_widget->raise();

        retranslateUi(Pomodoro_Timer);

        QMetaObject::connectSlotsByName(Pomodoro_Timer);
    } // setupUi

    void retranslateUi(QWidget *Pomodoro_Timer)
    {
        Pomodoro_Timer->setWindowTitle(QCoreApplication::translate("Pomodoro_Timer", "Pomodoro_Timer", nullptr));
        start_button->setText(QCoreApplication::translate("Pomodoro_Timer", "Start", nullptr));
        reset_button->setText(QCoreApplication::translate("Pomodoro_Timer", "Reset", nullptr));
        state_label->setText(QCoreApplication::translate("Pomodoro_Timer", "Study", nullptr));
        settings_button->setText(QCoreApplication::translate("Pomodoro_Timer", "Settings", nullptr));
        notes_text->setHtml(QCoreApplication::translate("Pomodoro_Timer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        notes_text->setPlaceholderText(QCoreApplication::translate("Pomodoro_Timer", "Type notes here!", nullptr));
        notes_button->setText(QCoreApplication::translate("Pomodoro_Timer", "Notes", nullptr));
        settings_seconds_3->setText(QCoreApplication::translate("Pomodoro_Timer", "Seconds", nullptr));
        settings_hours_2->setText(QCoreApplication::translate("Pomodoro_Timer", "Hours", nullptr));
        settings_minutes_3->setText(QCoreApplication::translate("Pomodoro_Timer", "Minutes", nullptr));
        settings_seconds_2->setText(QCoreApplication::translate("Pomodoro_Timer", "Seconds", nullptr));
        settings_seconds->setText(QCoreApplication::translate("Pomodoro_Timer", "Seconds", nullptr));
        settings_hours_3->setText(QCoreApplication::translate("Pomodoro_Timer", "Hours", nullptr));
        settings_hours->setText(QCoreApplication::translate("Pomodoro_Timer", "Hours", nullptr));
        settings_minutes->setText(QCoreApplication::translate("Pomodoro_Timer", "Minutes", nullptr));
        settings_minutes_2->setText(QCoreApplication::translate("Pomodoro_Timer", "Minutes", nullptr));
        settings_freq->setText(QCoreApplication::translate("Pomodoro_Timer", "Frequency", nullptr));
        lobreak_label->setText(QCoreApplication::translate("Pomodoro_Timer", "LONG BREAK", nullptr));
        shbreak_label->setText(QCoreApplication::translate("Pomodoro_Timer", "SHORT BREAK", nullptr));
        study_label->setText(QCoreApplication::translate("Pomodoro_Timer", "STUDY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pomodoro_Timer: public Ui_Pomodoro_Timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POMODORO_TIMER_H
