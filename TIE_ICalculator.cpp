#include "TIE_ICalculator.h"
#include <iostream>
#include "cMobile.h"
using  namespace std;

TIE_ICalculator::TIE_ICalculator() {
	cout << "Inside TIE_ICalculator()\n";
	this->addref();
}
TIE_ICalculator::TIE_ICalculator(cMobile* pmobile) {
	this->pMobile = pmobile;
}
TIE_ICalculator::~TIE_ICalculator() {
	cout << "Inside ~TIE_ICalculator()\n";
}
void TIE_ICalculator::add(int a, int b) {
	/*cout << "Addition = " << (a + b);*/
	pMobile->add(a,b);
}
void TIE_ICalculator::substract(int a, int b) {
	//cout << "Substraction = " << (a - b);
	pMobile->substract(a,b);
}
void TIE_ICalculator::QueryInterface(int i, void** input) {
	if (!pMobile) {
		pMobile = new cMobile();
	}
	pMobile->QueryInterface(i, input);
	//switch (i) {
	//case 1:   // change from iMobile to iCalC
	//	*input = (TIE_ICalculator*)this;
	//	break;
	//case 2:
	//	if (!pMobile) {
	//		*input = new cMobile(this);
	//		pMobile = (cMobile*)*input;
	//	}
	//	else *input = pMobile;
	//	break;
	//}
}
iCalculator* CalCFactory::getCalc() {
	return new TIE_ICalculator();
}
