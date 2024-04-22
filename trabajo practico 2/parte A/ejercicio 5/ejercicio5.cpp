#include <iostream>
using namespace std;
#include <conio.h>

int main(){
	int numElementos,mayor=0;
	cout<<"ingrese numeros de elementos al vector ";
	cin>>numElementos;
	int vector[numElementos];
	for(int i=0;i<numElementos;i++){
		cout<<"ingrese el siguiente numero ";
		cin>>vector[i];
			if(vector[i]>mayor){
			mayor=vector[i];
		
		}		
		
	}
		cout<<"\nel numero mayor del vector es "<<mayor<<endl;		

	_getch();
	return 0;
}
