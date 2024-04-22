#include <iostream>
using namespace std;
#include <conio.h>


int main(){
	int n,aux;
	cout<<"ingrese la cantidad de elementos del vector ";
	cin>>n;
	int vector[n];
	for(int i=0;i<n;i++){
		cout<<"ingrese un numero ";
		cin>>vector[i];
		
		
	}
	
		for(int i=0;i<n/2;i++){
		aux=vector[i];
		vector[i]=vector[n-1-i];
		vector[n-1-i]=aux;
		

	}
	
	cout<<endl;
	
	for(int i=0;i<n;i++){
		cout<<"el vector en orden inverso "<<vector[i]<<endl;
		
		
		
	}
	
return 0;
_getch();	
	
}
