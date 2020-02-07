#pragma once
#include "vect.h"

class vectb : public vect
{
	int debut;
	int fin;

public:
	vectb(int undebut, int unefin);
	~vectb();
	int& operator[](int x);
};

