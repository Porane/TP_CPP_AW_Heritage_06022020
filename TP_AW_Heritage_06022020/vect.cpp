#include "vect.h"



vect::vect(int nElem2)
{
	nElem = nElem2;
	nAdr = &nElem;
}


vect::~vect()
{
	delete(nAdr);
}

int& vect::operator[](int nElem)
{
	return nAdr[nElem];
}
