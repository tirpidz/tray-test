#include "background.h"

#include <QTimerEvent>

#include <QDebug>

background::background(QObject *parent) : QObject(parent) {}

void background::start() { _timer = startTimer(10, Qt::PreciseTimer); }

void background::stop() { killTimer(_timer); }

void background::timerEvent(QTimerEvent *event) {
  if (event->timerId() == _timer) {
    qDebug() << "on tick...";
  }
}
