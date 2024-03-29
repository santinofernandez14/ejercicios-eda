#include <iostream>

using namespace std;


int main(){
	
	int x,min,horas,seg;
	
	cout<<"ingrese la cantidad de segundos ";cin>>x;
	horas=x/3600;
	x%=3600;
	min=x/60;
	seg=x%60;
	
	cout<<"\n tiempo convertido es igual a "<<endl;
	cout<<"\n horas "<<horas<<endl;
	cout<<"\n minutos "<<min<<endl;
	cout<<"\n segundos "<<seg<<endl;
	
	
	return 0;
	

	}
	
	
	
	/*int main(){

	int x=0,min,horas,seg;
	
	cout<<"ingrese la cantidad de horas ";cin>>horas;
	cout<<"ingrese la cantidad de minutos ";cin>>min;
	cout<<"ingrese la cantidad de segundos ";cin>>seg;
	
	x+=horas*60*60;
	x+=min*60;
	x+=seg;
	cout<<"\n el tiempo en segundos es "<<x<<endl;
	
	
	
	return 0;
	

	}*/
