#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_A_Simple_Game_qt_1.h"
extern QColor c1, c2;
extern QPushButton* btn[];
extern QLabel* label, * label_2;
extern int tbtn, score, cbtn/*button[n] clicked*/, temp;

#define SetBtnClr2(bt,r,g,b) (bt)->setStyleSheet(QString("background-color: %1;").arg(QColor((r),(g),(b)).name()))
#define SetBtnClr(button,color) (button)->setStyleSheet(QString("background-color: %1;").arg(color.name()))
#define GetClrName(r,g,b) (QColor((r),(g),(b)))
#define whenclkbtn(n)		\
	do{						\
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

public slots:

	static void SetColors();

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
	static void init();
	static void Start();
private:
	Ui::MainWindow ui;

};
