#pragma once
#include "vect.h"

class vectok : vect
{
public:
	int taille();
	vectok(vectok& unVect);
	vectok(int uneDim);
	~vectok();
};

