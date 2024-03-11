#pragma once
#ifndef CMOBILE_CPP
#define CMOBILE_CPP
#include <iostream>
#include "iMobile.h"
class TIE_ICalculator;
class cMobile : public iMobile
{	
	TIE_ICalculator* pTieCalc;
public:
	cMobile();
	cMobile(TIE_ICalculator*);
	~cMobile();
	void makeCall();
	void add(int a, int b);
	void substract(int a, int b);
	void QueryInterface(int i, void** input);

};

class mobileFactory {
public:
	//template <typename T> static T* getMobile();
	static void getMobile(int i, void** input);
};


//template <typename T> 
//T* mobileFactory::getMobile() {
//	cMobile* pMobile = new cMobile;
//	switch (i) {
//	case 1:  // Mobile to Calculator
//		pMobi
//		return (T*)pMobile;
//		break;
//	case 2:
//		*input = (iMobile*)pMobile;
//		break;
//	}
//}




#endif // !...