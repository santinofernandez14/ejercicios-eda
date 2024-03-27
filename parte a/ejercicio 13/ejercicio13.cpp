#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a,b,c,d,e,f,resultado1=0,resultado2=0,resultado3=0,resultado4=0;
	
	cout<<"ingrese un valor para a ";cin>>a;
	cout<<"ingrese un valor para b ";cin>>b;
	cout<<"ingrese un valor para c "; cin>>c;
	cout<<"ingrese un valor para d "; cin>>d;
	cout<<"ingrese un valor para e "; cin>>e;
	cout<<"ingrese un valor para f "; cin>>f;
		
	
	resultado1=(a/b)+1;
	resultado2=(a+b)/(c+d);
	resultado3=(a+(b/c))/(d+(e/f));
	resultado4=a+(b/(c-d));
	
	cout<<"\nel resultado de (a/b)+1 es "<<resultado1<<endl;
	cout<<"\nel resultado de (a+b)/(c+d) es "<<resultado2<<endl;
	cout<<"\nel resultado de (a+(b/c))/(d+(e/f)) es "<<resultado3<<endl;
	cout<<"\nel resultado de a+(b/(c-d)) es "<<resultado4<<endl;
	
	return 0;
	
	
}
