#include <iostream>
#include<stdlib.h>
#include <cmath>

using namespace std;


int main(){
float a,b,c,x1,x2,resultado;


cout<<"ingrese el primer numero ";cin>>a;
cout<<"ingrese el segundo numero ";cin>>b;
cout<<"ingrese el tercer numero ";cin>>c;

resultado=sqrt(pow(b,2))-4*a*c;
x1=(-b+resultado)/2*a;	
x2=(-b-resultado)/2*a;
cout<<"los resultados son "<<x1<< " y "<<x2<<endl;	
	
	return 0;
}
