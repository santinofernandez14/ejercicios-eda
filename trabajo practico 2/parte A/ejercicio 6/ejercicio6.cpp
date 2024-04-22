#include <iostream>
using namespace std;
#include <conio.h>

int main(){
	int numElementos,mayor=0,sum=0,a;
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
	
		for(int i=0;i<numElementos;i++){
			
			sum+=vector[i];
			a=sum-mayor;
			}

		




	
	
		cout<<"la suma del vector es "<<sum<<endl;
		cout<<"el numero mayor del vector es "<<mayor<<endl;
		
		
		
		if(a==mayor){
			cout<<"el numero equivalente a la suma es "<<mayor<<endl;
		}else{
			cout<<"no hay numero equivalente ";
		}
		
			

	_getch();
	return 0;
}
