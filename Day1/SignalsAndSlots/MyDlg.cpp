#include "MyDlg.h"

MyDlg::MyDlg() {
	pBttn1 = new QPushButton ("Button 1");
	pBttn2 = new QPushButton ("Button 2");

	pLayout = new QHBoxLayout(this);

	pLayout->addWidget ( pBttn1 );
	pLayout->addWidget ( pBttn2 );

	setLayout ( pLayout );

	connect (
		pBttn1,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onButton1Clicked() )
	);

	connect (
		pBttn2,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onButton2Clicked() )
	);
}

void MyDlg::onButton1Clicked() {
	qDebug() << "Button 1 clicked.";
}
void MyDlg::onButton2Clicked() {
	qDebug() << "Button 2 clicked.";
}
