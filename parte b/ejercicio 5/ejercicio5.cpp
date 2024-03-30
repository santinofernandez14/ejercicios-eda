#include <iostream>

using namespace std;


int main(){
	int num,suma=0;
	
	do{
	cout<<"ingrese los numeros ";cin>>num;	
	if(num>=20 && num<=30 || num<0 ){
	cout<<"numero incorrecto";
	break;
	}else{
		suma+=num;
		
	}	
		
		
		
	}while(num!=0);
	
	cout<<"\n la suma de los numeros es "<<suma<<endl;
	return 0;
	
}
