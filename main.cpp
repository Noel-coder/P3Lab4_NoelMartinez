#include <iostream>
#include "Pieza.h"
#include "Casilla.h" 
#include "Dama.h" 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	system("color 0a");
	Dama* dama = new Dama();
	dama->PrepararTablero();
	dama->imprimirTablero();
	dama->Jugar();
	delete dama;
	return 0;
}