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
    cycle = 1;
    mod_cycle = ui->settings_widget->findChild<QSpinBox*>("edit_freq")->text().toInt();
    {
        timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(timerClock()));
    }
    {
        effect.setSource(QUrl::fromLocalFile(":/chime.wav"));
        effect.setVolume(0.25);
    }
    updateTimerDisplay();
    ui->notes_widget->setVisible(false);
    ui->settings_widget->setVisible(false);
}

Pomodoro_Timer::~Pomodoro_Timer()
{
    delete ui;
}

void Pomodoro_Timer::timerClock()
{
    if (seconds == 0 && minutes == 0 && hours == 0) {
        on_start_button_clicked();
        switch (state) {
            case study:
                cycle++;
                if (mod_cycle > 0 && cycle % mod_cycle == 0) {
                    state = breakLong;
                } else {
                    state = breakShort;
                }
                break;
            case breakShort:
                state = study;
                break;
            case breakLong:
                state = study;
                break;
            default:
                qDebug() << "Invalid State: " << state;
                return;
        }
        on_reset_button_clicked();
        this->activateWindow();
        effect.play();
        return;
    }

    if (seconds == 0 && minutes == 0) {
        hours--;
        minutes = 59;
        seconds = 60;
    } else if (seconds == 0) {
        minutes--;
        seconds = 60;
    }

    seconds--;
    updateTimerDisplay();
}

void Pomodoro_Timer::on_dial_sliderReleased()
{
    const int value = ui->dial->value();

    qDebug() << "Changed dial to: " << value;
    if (value > 75 || value <= 15) {
        state = study;
        ui->dial->setValue(0);
    } else if (value > 15 && value <= 45) {
        state = breakShort;
        ui->dial->setValue(30);
    } else if (value > 45 && value <= 75) {
        state = breakLong;
        ui->dial->setValue(60);
    } else {
        qDebug() << "Invalid Value: " << value;
    }
    on_reset_button_clicked();
}


void Pomodoro_Timer::on_start_button_clicked()
{
    if (ui->dial->isEnabled()) {
        qDebug() << "Starting";
        ui->start_button->setText("Pause");
        timer->start(1000);
    } else {
        qDebug() << "Stopping";
        ui->start_button->setText("Start");
        timer->stop();
    }

    ui->dial->setEnabled(((!ui->dial->isEnabled())));
}


void Pomodoro_Timer::on_reset_button_clicked()
{
    qDebug() << "Resetting time";
    ui->start_button->setText("Start");
    timer->stop();
    ui->dial->setEnabled(true);
    switch (state) {
        case study:
            hours = ui->settings_widget->findChild<QSpinBox*>("edit_hours")->text().toInt();
            minutes = ui->settings_widget->findChild<QSpinBox*>("edit_minutes")->text().toInt();
            seconds = ui->settings_widget->findChild<QSpinBox*>("edit_seconds")->text().toInt();
            ui->state_label->setText("Study");
            ui->dial->setValue(0);
            break;
        case breakShort:
            hours = ui->settings_widget->findChild<QSpinBox*>("edit_hours_2")->text().toInt();
            minutes = ui->settings_widget->findChild<QSpinBox*>("edit_minutes_2")->text().toInt();
            seconds = ui->settings_widget->findChild<QSpinBox*>("edit_seconds_2")->text().toInt();
            ui->state_label->setText("Short Break");
            ui->dial->setValue(30);
            break;
        case breakLong:
            hours = ui->settings_widget->findChild<QSpinBox*>("edit_hours_3")->text().toInt();
            minutes = ui->settings_widget->findChild<QSpinBox*>("edit_minutes_3")->text().toInt();
            seconds = ui->settings_widget->findChild<QSpinBox*>("edit_seconds_3")->text().toInt();
            ui->state_label->setText("Long Break");
            ui->dial->setValue(60);
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
    ui->hours_display->display(QString::number(hours).rightJustified(2, '0'));
    ui->minutes_display->display(QString::number(minutes).rightJustified(2, '0'));
    ui->seconds_display->display(QString::number(seconds).rightJustified(2, '0'));
}


void Pomodoro_Timer::on_notes_button_clicked()
{
    ui->notes_widget->setVisible(!ui->notes_widget->isVisible());
}


void Pomodoro_Timer::on_settings_button_clicked()
{
    ui->settings_widget->setVisible(!ui->settings_widget->isVisible());
}


void Pomodoro_Timer::on_edit_freq_valueChanged(int arg1)
{
    cycle = 0;
    mod_cycle = cycle = ui->settings_widget->findChild<QSpinBox*>("edit_freq")->text().toInt();
    state = study;
    on_reset_button_clicked();
}

