#ifndef CATBASEUNKNOWN_CPP
#define CATBASEUNKNOWN_CPP

#include "CATBaseUnknown.h"
#include <iostream>
using namespace std;

CATBaseUnknown::CATBaseUnknown() {
	cout << "Inside CATBaseUnknown() ";
	this->_ref = 0;
	cout << "refCount = " << _ref << endl;
}
CATBaseUnknown::~CATBaseUnknown() {
	cout << "Inside ~CATBaseUnknown()\n";
	return;
}
void CATBaseUnknown::release() {
	cout << "inside release() refCount = " << --_ref << "\n";
	if (_ref == 0) {
		delete this;
	}
}
void CATBaseUnknown::addref() {
	++_ref;
}

#endif // !...