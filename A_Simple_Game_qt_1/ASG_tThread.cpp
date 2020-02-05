#include "ASG_tThread.h"

ASG_tThread::ASG_tThread(QObject *parent)
	: QThread(parent)
{
	connect(qApp, SIGNAL(aboutToQuit()), this, SLOT(terminate()));/////////////////////
	stopped = false;
}

ASG_tThread::~ASG_tThread()
{
	stopped = true;
}

void ASG_tThread::run()
{
	while (!stopped)
	{
		timerem -= 1;
		label_2->setText(QString("Time Remain : %1 s").arg(timerem));
		_sleep(1000);
	}
}

void ASG_tThread::stop()
{
	stopped = true;
}