#include "ASG_Thread.h"

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
		_sleep(1000);
	}
}

void ASG_Thread::stop()
{
	stopped = true;
}