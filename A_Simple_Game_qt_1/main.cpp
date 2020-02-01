#include "A_Simple_Game_qt_1.h"
#include "ASG_Thread.h"
#include "ASG_Thread.cpp"
#include <QtWidgets/QApplication>
#include <stdio.h>
#include <QDebug>
#include <string>
#include <QPushButton>
#include <stdlib.h>

//void GetColors()
//{
//	int r, g, b, tr, tg, tb;
//	r = rand() % 150 + 50;
//	g = rand() % 150 + 50;
//	b = rand() % 150 + 50;
//	tr = 10;
//	tg = -10;
//	tb = 10;
//	c1 = QColor(r, g, b);
//	c2 = QColor(r + tr, g + tg, b + tb);
//}
//void SetColors()
//{
//	int r, g, b, dr, dg, db;
//	r = rand() % 150 + 50;
//	g = rand() % 150 + 50;
//	b = rand() % 150 + 50;
//	dr = 10;
//	dg = -10;
//	db = 10;
//	c1 = QColor(r, g, b);
//	c2 = QColor(r + dr, g + dg, b + db);
//	tbtn = rand() % 25;
//	QString s1 = c2.name();
//	//btn[1]->setStyleSheet(QString("background-color: %1;").arg(GetClrName(10,200,250).name()));
//	for (int i = 0; i < 25; i++)
//		SetBtnClr(btn[i], (i == tbtn ? c2 : c1));
//}
//void WhenClickBtn()
//{
//	cbtn = temp;
//	if (cbtn == tbtn)
//	{
//		score += 1;
//		SetColors();
//	}
//}
int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	A_Simple_Game_qt_1 w;
	w.show();

	return a.exec();
}
