#include <iostream>
#define N 5

using namespace std;

int buscaMayor(int arreglo[N],int size,int mayorTemporal,int pos){
	//Caso base
	if(posicion>=size){
		return mayorTemporal;
	}else{
		if(arreglo[posicion]>mayorTemporal){
			mayorTemporal =arreglo[posicion];
		}
		return buscarMayor(arreglo,size,mayorTemporal,pos + 1);
	}
}

int main(){
	
	int arreglo[N] = {7,19,2,20,1};
	int size=5;
	mayor = buscaMayor(arreglo,size,arreglo[0],0);
	cout<<"El mayor es: "<<mayor<<endl;
	return 0;
}
