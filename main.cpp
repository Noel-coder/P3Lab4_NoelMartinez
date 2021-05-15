#include <iostream>
#include "Pieza.h"
#include "Casilla.h" 
#include "Dama.h" 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Dama* dama = new Dama();
	dama->imprimirTablero();
	return 0;
}