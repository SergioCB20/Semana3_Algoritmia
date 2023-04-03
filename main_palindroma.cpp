#include <iostream>

using namespace std;

int palindroma(char arreglo[5],int posI,int posD){
	if(arreglo[posI]!=arreglo[posD]){
		return 0;
	}
	if(posI>=posD){
		return 1;
	}
	return palindroma(arreglo,posI+1,posD-1);
}

int main(){
	char palabra[5] = {'l','e','v','e','l'};
	int posI =0,posD = 4; 
	cout << "Es palindroma? : "<<palindroma(palabra,posI,posD);
	return 0;
}
