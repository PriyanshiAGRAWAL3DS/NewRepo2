#pragma once
#ifndef TIEICALCULATOR_H
#define TIEICALCULATOR_H

#include "iCalculator.h"
class cMobile;

class TIE_ICalculator : public iCalculator
{
	cMobile* pMobile;
public:
	TIE_ICalculator();
	TIE_ICalculator(cMobile*);
	~TIE_ICalculator();
	void add(int a, int b);
	void substract(int a, int b);
	void QueryInterface(int i, void** input);
};
class CalCFactory {
public:
	static iCalculator* getCalc();
};

#endif // !...