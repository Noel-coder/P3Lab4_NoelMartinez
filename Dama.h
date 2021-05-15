#ifndef DAMA_H
#define DAMA_H
#include "Casilla.h"
#include "Pieza.h"
#include <string>
#include <iostream>
using namespace std;
class Dama {
	public:
		Dama();
		~Dama();
		void imprimirTablero();
		void PrepararTablero();
		bool validarMovimiento(int,int);
		void Jugar();
	private:
		Casilla*** tablero;
};

#endif