#include "vectb.h"
#include "vect.h"

vectb::vectb(int undebut, int unefin) : vect(fin - debut + 1)
{
	debut = undebut;
	fin = unefin;
}

vectb::~vectb()
{
}

int& vectb::operator[](int x) 
{
	return vect::operator[](x - debut);
}
