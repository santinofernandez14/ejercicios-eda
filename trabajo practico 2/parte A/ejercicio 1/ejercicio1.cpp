#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;


int main(){
	
	int sum=0,i=0,suma=0,a=0;
	int vector[6];
	cout<<"ingrese los elementos del vector "<<endl;
	while(i<6){
	cout<<"ingrese el siguiente numero ";
	cin>>vector[i];
	
	a=vector[i];
	a=abs(vector[i]);
	if (a % 2==0 && i==0){
	
		sum+=a;
		
	
	}else if(a % 2==1 && i==1){
	
	suma+=a;
		
	
	}else if(a % 2==0 && i==2){
		sum+=a;
	
	}else if(a % 2==0 && i==4){
		
		sum+=a;
	}else if(a % 2==1 && i==3){
		
		suma+=a;
	}else if(a % 2==1 && i==5){
		suma+=a;
	}else{
		a=0;
		
	}
	


	
	
	i++;
	
	
}
cout<<"\nla suma de los elementos del vector es "<<sum<<endl;
	cout<<"\nla suma de los elementos del vector es "<<suma<<endl;
	cout<<"presione una tecla para salir... ";
	_getch();
	return 0;	


}
