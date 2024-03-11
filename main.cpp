#include<iostream>
#include "cMobile.h"
//#include "iMobile.h"
//#include "iUnknown.h"
#include "iCalculator.h"
using namespace std;
int main() {
	//iMobile* piMobOnMobile = mobileFactory::getMobile();
	//piMobOnMobile->makeCall();
	//iCalculator* piCalcOnMobile = NULL;

	//piMobOnMobile->QueryInterface(1, (void**)&piCalcOnMobile);
	//piCalcOnMobile->add(2,4);
	//piMobOnMobile->release();
	//piCalcOnMobile->release();
	iMobile* pMobOnMobile = NULL;
	mobileFactory::getMobile(2, (void**)&pMobOnMobile);
	iCalculator* pCalcOnMobile = NULL;
	//mobileFactory::getMobile(1,(void**)&pCalcOnMobile);
	pMobOnMobile->QueryInterface(1, (void**)&pCalcOnMobile);
	pCalcOnMobile->add(2,4);
	pCalcOnMobile = NULL;
	pMobOnMobile = NULL;
	iCalculator* piCalcOnMobile2 = NULL;
	mobileFactory::getMobile(1, (void**)&piCalcOnMobile2); //2nd object
	piCalcOnMobile2->add(4, 7);

	iMobile* piMobileOnMobile2 = NULL;
	piCalcOnMobile2->QueryInterface(2, (void**)&piMobileOnMobile2);
	piMobileOnMobile2->makeCall();
}