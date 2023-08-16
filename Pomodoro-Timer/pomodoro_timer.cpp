#include "pomodoro_timer.h"
#include "./ui_pomodoro_timer.h"
#include <QDebug>
using namespace std;

Pomodoro_Timer::Pomodoro_Timer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Pomodoro_Timer)
{
    ui->setupUi(this);
    state = study;
    hours = 0;
    minutes = 30;
    seconds = 0;
    updateTimerDisplay();
}

Pomodoro_Timer::~Pomodoro_Timer()
{
    delete ui;
}

void Pomodoro_Timer::on_dial_sliderReleased()
{
    return;
}


void Pomodoro_Timer::on_start_button_clicked()
{
    return;
}


void Pomodoro_Timer::on_reset_button_clicked()
{
    qDebug() << "Resetting time";
    switch (state) {
        case study:
            hours = 0;
            minutes = 30;
            seconds = 0;
            break;
        case breakShort:
            hours = 0;
            minutes = 5;
            seconds = 0;
            break;
        case breakLong:
            hours = 0;
            minutes = 30;
            seconds = 0;
            break;
        default:
            qDebug() << "Invalid State: " << state;
            return;
    }

    updateTimerDisplay();
}

void Pomodoro_Timer::updateTimerDisplay()
{
    qDebug() << "Updating time";
    ui->hours_display->setProperty("value", hours);
    ui->minutes_display->setProperty("value", minutes);
    ui->seconds_display->setProperty("value", seconds);
}


void Pomodoro_Timer::on_notes_button_clicked()
{
    if (!ui->notes_text->isEnabled()) {
        qDebug() << "Opening notes";
        ui->notes_text->setProperty("enabled", true);
        ui->notes_text->setGeometry(0, 40, 410, 250);
    } else {
        qDebug() << "Closing notes";
        ui->notes_text->setProperty("enabled", false);
        ui->notes_text->setGeometry(0, 40, 0, 0);
    }
}


void Pomodoro_Timer::on_settings_button_clicked()
{
    return;
}

