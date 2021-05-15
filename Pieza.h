#ifndef PIEZA_H
#define PIEZA_H
#include <string>
#include <iostream>
using namespace std;
class Pieza
{
	public:
		Pieza();
		~Pieza();
		Pieza(bool,bool);
		char RepresentarPieza();
		bool getBando();
		void setBando(bool);
		bool getReina();
		void setReina(bool);
		string toString();
	private:
		bool bando;//para las piezas blancas y negras
		bool reina;//reina
		string asignacion;
};

#endif