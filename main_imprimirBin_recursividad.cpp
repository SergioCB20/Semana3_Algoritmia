#include <iostream>

using namespace std;

void imprimeBin(int num){
	int digito;
	if(num>0){
		digito = num%2;
		num = num/2;
		imprimeBin(num);
		cout<<digito;
	}
}

int main(){
	imprimeBin(120);
	return  0;
}
