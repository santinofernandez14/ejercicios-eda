#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	string nombre1,nombre2;
	float tiempo1,tiempo2;
	cout<<"ingrese su nombre ";cin>>nombre1;
	cout<<"ingrese su tiempo ";cin>>tiempo1;
		cout<<"ingrese su nombre ";cin>>nombre2;
	cout<<"ingrese su tiempo ";cin>>tiempo2;
	
	if(tiempo1<tiempo2){
		cout<<"\n la nadadora que llego primero es " <<nombre1<<endl;
	}else{
		cout<<"\n la nadadora que llego primero es " <<nombre2<<endl;	
	}
	
	return 0;
	
}
