#include "A_Simple_Game_qt_1.h"

int tbtn = 0, score = 0, cbtn/*button[n] clicked*/ = 0, temp = 0;
QPushButton* btn[25];
QLabel* label;
QColor c1, c2;

A_Simple_Game_qt_1::A_Simple_Game_qt_1(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	srand(time(NULL));
	
	//pushButton_[n]->>btn[n-1]
	{
		btn[0] = (ui.pushButton);
		btn[1] = (ui.pushButton_2);
		btn[2] = (ui.pushButton_3);
		btn[3] = (ui.pushButton_4);
		btn[4] = (ui.pushButton_5);
		btn[5] = (ui.pushButton_6);
		btn[6] = (ui.pushButton_7);
		btn[7] = (ui.pushButton_8);
		btn[8] = (ui.pushButton_9);
		btn[9] = (ui.pushButton_10);
		btn[10] = (ui.pushButton_11);
		btn[11] = (ui.pushButton_12);
		btn[12] = (ui.pushButton_13);
		btn[13] = (ui.pushButton_14);
		btn[14] = (ui.pushButton_15);
		btn[15] = (ui.pushButton_16);
		btn[16] = (ui.pushButton_17);
		btn[17] = (ui.pushButton_18);
		btn[18] = (ui.pushButton_19);
		btn[19] = (ui.pushButton_20);
		btn[20] = (ui.pushButton_21);
		btn[21] = (ui.pushButton_22);
		btn[22] = (ui.pushButton_23);
		btn[23] = (ui.pushButton_24);
		btn[24] = (ui.pushButton_25);
		label = ui.label;
	}
	
	ainit();
	ui.label->setText(QString("Your Score : %1").arg(score));
	QObject::connect((ui.CloseButton), &QPushButton::clicked, &QApplication::quit);
	QObject::connect((ui.StartButton), &QPushButton::clicked, &ainit);

	QObject::connect(btn[0], SIGNAL(clicked()), this, SLOT(WhenClickBtn0()));
	QObject::connect(btn[1], SIGNAL(clicked()), this, SLOT(WhenClickBtn1()));
	QObject::connect(btn[2], SIGNAL(clicked()), this, SLOT(WhenClickBtn2()));
	QObject::connect(btn[3], SIGNAL(clicked()), this, SLOT(WhenClickBtn3()));
	QObject::connect(btn[4], SIGNAL(clicked()), this, SLOT(WhenClickBtn4()));
	QObject::connect(btn[5], SIGNAL(clicked()), this, SLOT(WhenClickBtn5()));
	QObject::connect(btn[6], SIGNAL(clicked()), this, SLOT(WhenClickBtn6()));
	QObject::connect(btn[7], SIGNAL(clicked()), this, SLOT(WhenClickBtn7()));
	QObject::connect(btn[8], SIGNAL(clicked()), this, SLOT(WhenClickBtn8()));
	QObject::connect(btn[9], SIGNAL(clicked()), this, SLOT(WhenClickBtn9()));
	QObject::connect(btn[10], SIGNAL(clicked()), this, SLOT(WhenClickBtn10()));
	QObject::connect(btn[11], SIGNAL(clicked()), this, SLOT(WhenClickBtn11()));
	QObject::connect(btn[12], SIGNAL(clicked()), this, SLOT(WhenClickBtn12()));
	QObject::connect(btn[13], SIGNAL(clicked()), this, SLOT(WhenClickBtn13()));
	QObject::connect(btn[14], SIGNAL(clicked()), this, SLOT(WhenClickBtn14()));
	QObject::connect(btn[15], SIGNAL(clicked()), this, SLOT(WhenClickBtn15()));
	QObject::connect(btn[16], SIGNAL(clicked()), this, SLOT(WhenClickBtn16()));
	QObject::connect(btn[17], SIGNAL(clicked()), this, SLOT(WhenClickBtn17()));
	QObject::connect(btn[18], SIGNAL(clicked()), this, SLOT(WhenClickBtn18()));
	QObject::connect(btn[19], SIGNAL(clicked()), this, SLOT(WhenClickBtn19()));
	QObject::connect(btn[20], SIGNAL(clicked()), this, SLOT(WhenClickBtn20()));
	QObject::connect(btn[21], SIGNAL(clicked()), this, SLOT(WhenClickBtn21()));
	QObject::connect(btn[22], SIGNAL(clicked()), this, SLOT(WhenClickBtn22()));
	QObject::connect(btn[23], SIGNAL(clicked()), this, SLOT(WhenClickBtn23()));
	QObject::connect(btn[24], SIGNAL(clicked()), this, SLOT(WhenClickBtn24()));
	//QObject::connect(btn[0], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(0)));
	//QObject::connect(btn[1], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(1)));
	//QObject::connect(btn[2], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(2)));
	//QObject::connect(btn[3], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(3)));
	//QObject::connect(btn[4], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(4)));
	//QObject::connect(btn[5], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(5)));
	//QObject::connect(btn[6], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(6)));
	//QObject::connect(btn[7], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(7)));
	//QObject::connect(btn[8], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(8)));
	//QObject::connect(btn[9], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(9)));
	//QObject::connect(btn[10], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(10)));
	//QObject::connect(btn[11], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(11)));
	//QObject::connect(btn[12], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(12)));
	//QObject::connect(btn[13], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(13)));
	//QObject::connect(btn[14], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(14)));
	//QObject::connect(btn[15], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(15)));
	//QObject::connect(btn[16], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(16)));
	//QObject::connect(btn[17], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(17)));
	//QObject::connect(btn[18], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(18)));
	//QObject::connect(btn[19], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(19)));
	//QObject::connect(btn[20], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(20)));
	//QObject::connect(btn[21], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(21)));
	//QObject::connect(btn[22], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(22)));
	//QObject::connect(btn[23], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(23)));
	//QObject::connect(btn[24], SIGNAL(QPushButton::clicked()), this, SLOT(WhenClickBtn(24)));
}
