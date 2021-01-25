#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <QObject>

class background : public QObject {
  Q_OBJECT
public:
  explicit background(QObject *parent = nullptr);

  void start();
  void stop();

protected:
  void timerEvent(QTimerEvent *event) override;

  int _timer;
};

#endif // BACKGROUND_H
