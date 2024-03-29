#include<iostream>

using namespace std;


int main(){
	
	int a,b,x,aux;
	
	cout<< "ingrese el valor de a ";cin>>a;
	cout<< "ingrese el valor de b "; cin>>b;
	cout<< "ingrese el valor de x "; cin>>x;
	
	aux=a;
	a=b;
	b=aux;
	aux=x;
	x=a;
	a=aux;

	
	cout<<"\n el valor de a es "<<a<<endl;
	cout<<"\n el valor de b es "<<b<<endl;
	cout<<"\n el valor de x es "<<x<<endl;
	
	return 0;
}
