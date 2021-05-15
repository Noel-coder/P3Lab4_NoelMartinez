#ifndef CASILLA_H
#define CASILLA_H
#include "Pieza.h"
#include <iostream>
#include <string>
using namespace std;
class Casilla
{
	public:
		Casilla();
		~Casilla();
		Casilla(Pieza*);
		string toString();
	private:
		Pieza* piezaAsignada;//esto puede ser null o una pieza
};

#endif