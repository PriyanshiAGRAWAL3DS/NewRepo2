#ifndef ABSTRACTMOBILE_CPP
#define ABSTRACTMOBILE_CPP

#include "iMobile.h"
#include <iostream>
using namespace std;
iMobile::iMobile() {
	cout << "inside iMobile() refCount =- " << _ref << "\n";
}

iMobile::~iMobile() {
	cout << "inside ~iMobile()\n";
}

#endif // !...
