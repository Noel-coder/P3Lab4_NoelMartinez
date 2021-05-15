#include "Casilla.h"

Casilla::Casilla() {
}

Casilla::~Casilla() {
}

Casilla::Casilla(Pieza* _piezaAsignada) {
	this->piezaAsignada = _piezaAsignada;
}

string Casilla::toString() {
	if(piezaAsignada == NULL) {
		cout <<  " ";
	} else {
		cout << "[ " << piezaAsignada->toString() << " ]";
	}
}