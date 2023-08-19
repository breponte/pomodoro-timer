#ifndef POMODORO_TIMER_H
#define POMODORO_TIMER_H

#include <QWidget>
#include <QTimer>
#include <QSoundEffect>

QT_BEGIN_NAMESPACE
namespace Ui { class Pomodoro_Timer; }
QT_END_NAMESPACE

class Pomodoro_Timer : public QWidget
{
    Q_OBJECT

public:
    Pomodoro_Timer(QWidget *parent = nullptr);
    ~Pomodoro_Timer();

public slots:
    void timerClock();

private slots:

    void on_dial_sliderReleased();

    void on_start_button_clicked();

    void on_reset_button_clicked();

    void on_notes_button_clicked();

    void on_settings_button_clicked();

    void updateTimerDisplay();

private:
    Ui::Pomodoro_Timer *ui;
    enum State{ study, breakShort, breakLong };
    State state;
    int hours;
    int minutes;
    int seconds;
    QTimer *timer;
    QSoundEffect effect;
};
#endif // POMODORO_TIMER_H
