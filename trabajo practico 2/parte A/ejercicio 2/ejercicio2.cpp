#include <iostream>
using namespace std;
#include <conio.h>

int main(){
	int m=1,numElementos;
	cout<<"ingrese numeros de elementos al vector ";
	cin>>numElementos;
	float vector[numElementos];
	for(int i=m=1;i<numElementos;i++){
		cout<<"ingrese el siguiente numero ";
		cin>>vector[i];
		m*=vector[i];
	}
	
	cout<<"la multiplicacion de los elementos es "<<m<<endl;
	cout<<"presione una tecla para salir... ";
	_getch();
	return 0;
}
