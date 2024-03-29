#include <iostream>
#include <math.h>
using namespace std;


int main(){
	float a,b,perimetro,hipotenusa,superficie;
	
	cout<<"ingrese el valor del primer cateto ";cin>>a;
	cout<<"ingrese el valor del segundo cateto ";cin>>b;
	

	hipotenusa=(pow(a,2))+(pow(b,2));
	superficie=a*b/2;
	perimetro=a+b+superficie;
	
	cout<<"\n el perimetro del triangulo rectangulo es "<<perimetro<<endl;
	cout<<"\n la hipotenusa del triangulo rectangulo es "<<hipotenusa<<endl;
	cout<<"\n la superficie del triangulo rectangulo es "<<superficie<<endl;
	
	
	
	return 0;
}
