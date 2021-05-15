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
	for(int i = 0; i < 8 ; i++) {
		for(int j=0; j < 8; j++) {
			//PIEZAS BLANCAS
			if(i==0 && j%2==0) {
				tablero[i][j]=new Casilla(new Pieza(false,NULL));//si la casilla esta vacia se haria se haria NULL
			} else if(i==0 && j%2==1) {
				tablero[i][j]=new Casilla(NULL);
			}
			//SEGUNDA FILA BLANCAS
			if(i==1 && j%2==1) {
				tablero[i][j]=new Casilla(new Pieza(false,NULL));//si la casilla esta vacia se haria se haria NULL
			} else if(i==1 && j%2 == 0) {
				tablero[i][j]=new Casilla(NULL);
			}
			//TERCER FILA BLANCAS
			if(i==2 && j%2==0) {
				tablero[i][j]=new Casilla(new Pieza(false,NULL));//si la casilla esta vacia se haria se haria NULL
			} else if(i==2 && j%2 == 1) {
				tablero[i][j]=new Casilla(NULL);
			}

			//LINEAS CENTRALES
			if(i==3 || i==4) {
				tablero[i][j]=new Casilla(new Pieza(NULL,NULL));//si la casilla esta vacia se haria se haria NULL
			}

			//PIEZAS NEGRAS
			if(i==5 && j%2==1) {
				tablero[i][j]=new Casilla(new Pieza(true,NULL));//si la casilla esta vacia se haria se haria NULL
			} else if(i==5 && j%2==0) {
				tablero[i][j]=new Casilla(NULL);
			}
			//SEGUNDA FILA NEGRAS
			if(i==6 && j%2==0) {
				tablero[i][j]=new Casilla(new Pieza(true,NULL));//si la casilla esta vacia se haria se haria NULL
			} else if(i==6 && j%2 == 1) {
				tablero[i][j]=new Casilla(NULL);
			}
			//TERCER FILA NEGRAS
			if(i==7 && j%2==1) {
				tablero[i][j]=new Casilla(new Pieza(true,NULL));//si la casilla esta vacia se haria se haria NULL
			} else if(i==7 && j%2 == 0) {
				tablero[i][j]=new Casilla(NULL);
			}
		}
	}
}

void Dama::imprimirTablero() {
	for(int i = 0; i < 8 ; i++) {
		for(int j = 0; j < 8; j++) {
			cout << "[ "<<tablero[i][j]->toString()<< " ]";
		}
		cout<<endl;
	}
}

bool Dama::validarMovimiento(int x,int y){
	//VALIDAR QUE NO SE SALGA DEL RANGO
	bool decision;
	while (!decision){
		if(x < 0 && x > 7 && y < 0 && y > 7){
			cout << "No puede salirse del tablero!!" << endl;
			cout << "Ingrese la fila: " << endl;
			cin >> x;
			cout << "Ingrese la columna: " << endl;
			cin >> y;
		}else{
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

void Jugar(){
	
}

