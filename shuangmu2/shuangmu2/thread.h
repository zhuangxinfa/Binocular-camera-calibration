
#ifndef THREAD_H
#define THREAD_H
#include<QThread>
#include<QString>
#include <QDebug>

class Thread : public QThread
{
	Q_OBJECT
public:
	Thread();
	virtual void run();
	void stop();
signals:

	void send(int i);
private:
	volatile bool stopped;
};


#endif