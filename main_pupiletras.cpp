#include <iostream>
#define MAXF 5
#define MAXC 4
using namespace std;

int busca(char tablero[MAXF][MAXC],char palabra[3],int sizePalabra,int movimientos[8][2],int posInitI,int posInitJ){
	int posI,posJ;
	if(tablero[posInitI][posInitJ]!=palabra[0]){
		return 0;
	}
	for(int i=0;i<8;i++){
		posI  = posInitI + movimientos[i][0];
		posJ  = posInitJ + movimientos[i][1];
		
	//Ahora a buscar la palabra en esa dirección
	//Ojo, las letras de las palabras comienzan en 1
	for(int j=1;j<sizePalabra;j++){
		if(posI<0 || posI>=MAXF || posJ >=MAXC || posJ < 0)
		break;
		if(palabra[j]!=tablero[posI][posJ])
		break;
		posI  = posI + movimientos[i][0];
		posJ  = posJ + movimientos[i][1];
		if(j==sizePalabra){
			return 1;
		}
	}
	}
}


int main(){
	
	char tablero[MAXF][MAXC] = {{'A','B','G','O'},
	                           {'J','Z','O','A'},
	                           {'K','H','L','R'},
						  {'L','M','A','B'},
						  {'A','R','Z','A'}};
	char palabra[3] = {'G','O','L'};
	int movimientos[8][2] = {{-1,-1},
	                        {-1,0},
					    {-1,1},
					    {0,-1},
					    {0,1},
					    {1,-1},
					    {1,0},
					    {1,1}};
	int sizePalabra = 3;
		
	//Vamos  a recorrer todo el tablero por todas las posiciones
	
	for(int i=0;i<MAXF;i++){
		for(int j=0;j<MAXC;j++){
			if(busca(tablero,palabra,sizePalabra,movimientos,i,j)){
				cout<<"La Palabra esta en la posicion: "<<i<<","<<j<<endl;
			}
		}
	}
	
	return 0;
}
