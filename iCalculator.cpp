#ifndef ABSTRACTCALC_CPP
#define ABSTRACTCALC_CPP
#include "iCalculator.h"
#include <iostream>
using namespace std;
iCalculator::iCalculator() {
	cout << "Inside iCalculator() refCount =- " << _ref << "\n";
}
iCalculator::~iCalculator() {
	cout << "Inside ~iCalculator()\n";
}

#endif // !...


