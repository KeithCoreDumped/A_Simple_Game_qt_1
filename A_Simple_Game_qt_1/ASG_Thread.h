#pragma once

#include <QObject>

class ASG_Thread : public QObject
{
	Q_OBJECT

public:
	ASG_Thread(QObject *parent);
	~ASG_Thread();

	void stop();

protected:
	void run();

private:
	volatile bool stopped;
};
