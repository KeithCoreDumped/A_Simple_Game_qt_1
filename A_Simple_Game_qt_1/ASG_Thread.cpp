#include "ASG_Thread.h"
#include "A_Simple_Game_qt_1.h"


ASG_Thread::ASG_Thread(QObject *parent)
	: QObject(parent)
{
	stopped = false;
}

ASG_Thread::~ASG_Thread()
{
}

void ASG_Thread::run()
{
	while (stopped)
	{
		timerem -= 1;
		label_2->setText(QString("Time Remain : %1 s").arg(timerem));
		_sleep(1000);
		
	}
}

void ASG_Thread::stop()
{
	stopped = true;
}