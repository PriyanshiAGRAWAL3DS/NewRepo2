#ifndef ABSTRACTCALC
#define ABSTRACTCALC
#include "CATBaseUnknown.h"
//#include "iUnknown.h"
class iCalculator : public virtual CATBaseUnknown
{
public:
	iCalculator();
	~iCalculator();
	virtual void add(int a, int b) = 0;
	virtual void substract(int a, int b) = 0;
	virtual void QueryInterface(int i, void** pInput) = 0;

};

#endif // !...
