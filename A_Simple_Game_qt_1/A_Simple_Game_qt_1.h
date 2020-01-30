#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_A_Simple_Game_qt_1.h"
extern QColor c1, c2;
extern QPushButton* btn[];
extern QLabel* label;
extern int tbtn, score, cbtn/*button[n] clicked*/, temp;


#define SetBtnClr2(bt,r,g,b) (bt)->setStyleSheet(QString("background-color: %1;").arg(QColor((r),(g),(b)).name()))
#define SetBtnClr(button,color) (button)->setStyleSheet(QString("background-color: %1;").arg(color.name()))
#define GetClrName(r,g,b) (QColor((r),(g),(b)))
#define whenclkbtn(n) do	\
	{						\
		if (n == tbtn) {	\
			score += 1;		\
			SetColors();	\
			RefreshLabel();	\
		}					\
	} while(false);
#define RefreshLabel() do{ label->setText(QString("Your Score : %1").arg(score)); }while(0)

class A_Simple_Game_qt_1 : public QMainWindow
{
	Q_OBJECT

public:
	A_Simple_Game_qt_1(QWidget* parent = Q_NULLPTR);
	//QColor c1, c2;
	//static QPushButton* btn[25];
	//int tm = 1, tbtn = 0, score = 0, cbtn/*button[n] clicked*/ = 0, temp = 0;

public slots:
	static void SetColors() {
		int r, g, b, dr, dg, db;
		r = rand() % 150 + 50;
		g = rand() % 150 + 50;
		b = rand() % 150 + 50;
		dr = 10;
		dg = -10;
		db = 10;
		c1 = QColor(r, g, b);
		c2 = QColor(r + dr, g + dg, b + db);
		tbtn = rand() % 25;
		for (int i = 0; i < 25; i++)
			SetBtnClr(btn[i], (i == tbtn ? c2 : c1));
	}
	static void WhenClickBtn0() { whenclkbtn(0); }
	static void WhenClickBtn1() { whenclkbtn(1); }
	static void WhenClickBtn2() { whenclkbtn(2); }
	static void WhenClickBtn3() { whenclkbtn(3); }
	static void WhenClickBtn4() { whenclkbtn(4); }
	static void WhenClickBtn5() { whenclkbtn(5); }
	static void WhenClickBtn6() { whenclkbtn(6); }
	static void WhenClickBtn7() { whenclkbtn(7); }
	static void WhenClickBtn8() { whenclkbtn(8); }
	static void WhenClickBtn9() { whenclkbtn(9); }
	static void WhenClickBtn10() { whenclkbtn(10); }
	static void WhenClickBtn11() { whenclkbtn(11); }
	static void WhenClickBtn12() { whenclkbtn(12); }
	static void WhenClickBtn13() { whenclkbtn(13); }
	static void WhenClickBtn14() { whenclkbtn(14); }
	static void WhenClickBtn15() { whenclkbtn(15); }
	static void WhenClickBtn16() { whenclkbtn(16); }
	static void WhenClickBtn17() { whenclkbtn(17); }
	static void WhenClickBtn18() { whenclkbtn(18); }
	static void WhenClickBtn19() { whenclkbtn(19); }
	static void WhenClickBtn20() { whenclkbtn(20); }
	static void WhenClickBtn21() { whenclkbtn(21); }
	static void WhenClickBtn22() { whenclkbtn(22); }
	static void WhenClickBtn23() { whenclkbtn(23); }
	static void WhenClickBtn24() { whenclkbtn(24); }

	static void ainit() {
		srand(time(NULL));
		tbtn = 0, score = 0, cbtn = 0, temp = 0;
		SetColors();
		RefreshLabel();
	}

private:
	Ui::MainWindow ui;

};
