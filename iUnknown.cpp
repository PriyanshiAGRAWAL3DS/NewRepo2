#ifndef IUNKNOWN_H
#define IUNKNOWN_H
#include "iUnknown.h"
#include <iostream>
using namespace std;
iUnknown::iUnknown() {
	cout << "Inside iUnknown()\n";
}
iUnknown::~iUnknown() {
	cout << "Inside ~iUnknown()\n";
}


#endif // !...