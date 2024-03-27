#include <iostream>

using namespace std;


int main(){
	
	float num,cont=0;
	
	cout<<"ingrese un numero mayor que cero "; cin>>num;
	
	do{
	
	cout<<"ingrese un numero mayor que cero "; cin>>num;
	cont++;

		
	}while(num!=0);
	
		cout<<"\n la cantidad de numeros ingresados es " <<cont<<endl;
}
