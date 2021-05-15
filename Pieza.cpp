#include "Pieza.h"

Pieza::Pieza()
{
}

Pieza::~Pieza()
{
}

Pieza::Pieza(bool _bando, bool _reina){
	this->bando = _bando;
	this->reina = _reina;
}

string Pieza::toString(){   //to string y otro to string en casilla
	if(bando){
		return "O";
	}else{
		return "X";
	}
}

bool Pieza:: getBando() {
	return this->bando;
}

void Pieza::setBando(bool _bando) {
	this->bando = _bando;
}

bool Pieza:: getReina() {
	return this->reina;
}

void Pieza::setReina(bool _reina) {
	this->reina = _reina;
}