#include <iostream>
using namespace std;
#include <conio.h>


int main(){
	int vector[100],n;
	cout<<"ingrese la cantidad de numeros que va tener el vector ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"ingrese un numero ";
		cin>>vector[i];
		
	}
	
	for(int i=0;i<n;i++){
		cout<<i<<" -> "<<vector[i]<<endl;
	}
	
	_getch();
	return 0;
}
