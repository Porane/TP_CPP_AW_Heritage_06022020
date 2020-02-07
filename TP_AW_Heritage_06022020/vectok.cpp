#include "vectok.h"

int vectok::taille()
{
	return nElem;
}

vectok::vectok(vectok& unVect) : vect(unVect.nElem)
{
	for (int x = 0; x < nElem; x++)
	{
		nAdr[x] = unVect.nAdr[x];
	}
}

vectok::vectok(int uneDim) : vect(uneDim)
{

}

vectok::~vectok()
{
}
