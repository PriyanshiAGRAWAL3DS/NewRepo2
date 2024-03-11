#pragma once
#ifndef IUNKNOWN
#define IUNKNOWN

class iUnknown {

public:
	iUnknown();
	virtual ~iUnknown();
	virtual void QueryInterface(int i, void** input) = 0;
};

#endif // !...