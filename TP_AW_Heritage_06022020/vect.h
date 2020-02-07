#pragma once
class vect
{
protected:
	int nElem;
	int * nAdr;

public:
	vect(int nElem2);
	~vect();
	int& operator[] (int nElem);
};

