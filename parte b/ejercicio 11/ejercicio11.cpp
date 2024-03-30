#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;


int main(){
	int suma=0,e=0,a;
	
	cout<<"ingrese los numeros ";cin>> a;
	
	for(int i=1;i<=a;i++){
		e=pow(2,i);
		suma+=e;
	}
	
	cout<<"\n la suma de los numeros es "<<suma<<endl;
	
	return 0;
}
