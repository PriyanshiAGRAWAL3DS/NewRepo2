#ifndef CATBASEUNKNOWN_H
#define CATBASEUNKNOWN_H

#include "iUnknown.h"
class CATBaseUnknown : public iUnknown
{
protected:
	int _ref;
public:
	CATBaseUnknown();
	virtual ~CATBaseUnknown();
	void addref();
	void release();
};

#endif // !...
