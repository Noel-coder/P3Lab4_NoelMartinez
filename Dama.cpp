#include "Dama.h"
#include "Casilla.h"

Dama::Dama() {
}

Dama::~Dama() {

}

void Dama::PrepararTablero() {
	tablero= new Casilla**[8];
	for(int i = 0; i<8; i++) {
		tablero[i] = new Casilla*[8];
	}

	//Aqui Ingresariamos las piezas
	tablero[0][0] = new Casilla( new Pieza(false,false));
	tablero[0][1] = new Casilla(NULL);
	tablero[0][2] = new Casilla( new Pieza(false,false));
	tablero[0][3] = new Casilla(NULL);
	tablero[0][4] = new Casilla( new Pieza(false,false));
	tablero[0][5] = new Casilla(NULL);
	tablero[0][6] = new Casilla( new Pieza(false,false));
	tablero[0][7] = new Casilla(NULL);

	tablero[1][0] = new Casilla(NULL);
	tablero[1][1] = new Casilla( new Pieza(false,false));
	tablero[1][2] = new Casilla(NULL);
	tablero[1][3] = new Casilla( new Pieza(false,false));
	tablero[1][4] = new Casilla(NULL);
	tablero[1][5] = new Casilla( new Pieza(false,false));
	tablero[1][6] = new Casilla(NULL);
	tablero[1][7] = new Casilla( new Pieza(false,false));

	tablero[2][0] = new Casilla( new Pieza(false,false));
	tablero[2][1] = new Casilla(NULL);
	tablero[2][2] = new Casilla( new Pieza(false,false));
	tablero[2][3] = new Casilla(NULL);
	tablero[2][4] = new Casilla( new Pieza(false,false));
	tablero[2][5] = new Casilla(NULL);
	tablero[2][6] = new Casilla( new Pieza(false,false));
	tablero[2][7] = new Casilla(NULL);

	tablero[3][0] = new Casilla(NULL);
	tablero[3][1] = new Casilla(NULL);
	tablero[3][2] = new Casilla(NULL);
	tablero[3][3] = new Casilla(NULL);
	tablero[3][4] = new Casilla(NULL);
	tablero[3][5] = new Casilla(NULL);
	tablero[3][6] = new Casilla(NULL);
	tablero[3][7] = new Casilla(NULL);

	tablero[4][0] = new Casilla(NULL);
	tablero[4][1] = new Casilla(NULL);
	tablero[4][2] = new Casilla(NULL);
	tablero[4][3] = new Casilla(NULL);
	tablero[4][4] = new Casilla(NULL);
	tablero[4][5] = new Casilla(NULL);
	tablero[4][6] = new Casilla(NULL);
	tablero[4][7] = new Casilla(NULL);

	tablero[5][0] = new Casilla(NULL);
	tablero[5][1] = new Casilla( new Pieza(true,false));
	tablero[5][2] = new Casilla(NULL);
	tablero[5][3] = new Casilla( new Pieza(true,false));
	tablero[5][4] = new Casilla(NULL);
	tablero[5][5] = new Casilla( new Pieza(true,false));
	tablero[5][6] = new Casilla(NULL);
	tablero[5][7] = new Casilla( new Pieza(true,false));

	tablero[6][0] = new Casilla( new Pieza(true,false));
	tablero[6][1] = new Casilla(NULL);
	tablero[6][2] = new Casilla( new Pieza(true,false));
	tablero[6][3] = new Casilla(NULL);
	tablero[6][4] = new Casilla( new Pieza(true,false));
	tablero[6][5] = new Casilla(NULL);
	tablero[6][6] = new Casilla( new Pieza(true,false));
	tablero[6][7] = new Casilla(NULL);

	tablero[7][0] = new Casilla(NULL);
	tablero[7][1] = new Casilla( new Pieza(true,false));
	tablero[7][2] = new Casilla(NULL);
	tablero[7][3] = new Casilla( new Pieza(true,false));
	tablero[7][4] = new Casilla(NULL);
	tablero[7][5] = new Casilla( new Pieza(true,false));
	tablero[7][6] = new Casilla(NULL);
	tablero[7][7] = new Casilla( new Pieza(true,false));
}

void Dama::imprimirTablero() {
	for(int i = 0; i < 8 ; i++) {
		for(int j = 0; j < 8; j++) {
			cout <<"[ "<<tablero[i][j]->toString()<< " ]";
			cont++;
		}
		cout<<endl;
	}
}

bool Dama::validarMovimiento(int x,int y) {
	//VALIDAR QUE NO SE SALGA DEL RANGO
	bool decision;
	while (!decision) {
		if(x < 0 && x > 7 && y < 0 && y > 7) {
			cout << "No puede salirse del tablero!!" << endl;
			cout << "Ingrese la fila: " << endl;
			cin >> x;
			cout << "Ingrese la columna: " << endl;
			cin >> y;
		} else {
			decision=true;
		}
	}
	//VALIDAR CASILLA OCUPADA
	decision=true;
	/*while(!decision){
		if(tablero[x][y]=='O'||tablero[x][y]=='X'){
			cout << "Esta casilla esta ocupada!" << endl;
			cout << "Ingrese la fila: " << endl;
			cin >> x;
			cout << "Ingrese la columna: " << endl;
			cin >> y;
		}else{
			decision=true;
		}
	}*/
	//VALIDAR QUE LAS FICHAS NORMALES NO SE MUEVAN HACIA ATRAS Y SE MUEVAN DIAGONALMENTE (blancos)
	decision=true;
	/*while(!decision){
		if(){

		}
	}*/
}

void Jugar() {

}

