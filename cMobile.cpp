#ifndef CMOBILE_H
#define CMOBILE_H

#include "cMobile.h"
#include "TIE_ICalculator.h"

#include <iostream>
using namespace std;

cMobile::cMobile() {
	pTieCalc = NULL;
	this->addref();
	cout << "Inside cMobile() refCount = " << _ref << endl;
}
cMobile::cMobile(TIE_ICalculator* ptieCal) {
	this->pTieCalc = ptieCal;
}

cMobile::~cMobile() {
	cout << "Inside ~cMobile()" << endl;
}
void cMobile::makeCall() {
	cout << "Make call!\n";
}
void cMobile:: add(int a, int b) {
	cout << "Addition = " << (a + b)<<endl;

}
void cMobile:: substract(int a, int b) {
	cout << "Substraction = " << (a - b) << endl;
}
void cMobile::QueryInterface(int i, void** input) {
	addref();
	switch (i) {
	case 1:   // change from iMobile to iCalC
	{	if (!pTieCalc) {
		pTieCalc = new TIE_ICalculator(this);
		*input = pTieCalc;
	}
	else
		*input = (iMobile*)pTieCalc;
	break;
	}
	case 2:
	{	*input = (iMobile*)this;
	//cout << "ref is " << this->_ref << endl;
	break;
	}
	}
	cout << "refCount = " << _ref << endl;

}


//iMobile* mobileFactory::getMobile() {
//
//	iMobile* pMobile = new cMobile();
//	cout << "ref count = 1 here. " << endl;
//	return pMobile;
//}
void mobileFactory::getMobile(int i, void** input) {
	cMobile* pMobile = new cMobile;
	switch (i) {
	case 1:  // Mobile to Calculator
	{
		pMobile->QueryInterface(1, input);
		break;
		}
	case 2:
		*input = (iMobile*)pMobile;
		break;
	}
}



#endif // !...