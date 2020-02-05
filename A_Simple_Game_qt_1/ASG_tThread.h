#pragma once

#include <QThread>
#include "A_Simple_Game_qt_1.h"


class ASG_tThread : public QThread
{
	Q_OBJECT

public:
	ASG_tThread(QObject *parent);
	~ASG_tThread();
	void stop();

protected:
	void run();

private:
	volatile bool stopped;

};
