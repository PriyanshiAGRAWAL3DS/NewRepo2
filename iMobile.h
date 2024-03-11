#pragma once
#ifndef ABSTRACTMOBILE
#define ABSTRACTMOBILE
#include "CATBaseUnknown.h"
#include "iUnknown.h"
class iMobile : public virtual CATBaseUnknown
{
public:
	iMobile();
	~iMobile();
	virtual void makeCall() = 0;
	virtual void QueryInterface(int i, void** pInput) = 0;

};

#endif //--

