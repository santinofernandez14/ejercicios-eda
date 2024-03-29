#include <iostream>
#include <string.h>

using namespace std;


int main(){
	char array[30];
	int b,edad;
	cout<<"ingrese su nombre ";cin>>array;
	cout<<"ingrese el ano de su nacimiento ";cin>>b;
	edad=2024-b;
	if(b<=0 || b<=1922){
		cout<<"ingrese un ano valido ";
	}else{

	cout<<"\n su nombre es "<<array;
	cout<<" y tiene "<<edad;
	cout<<" ano ";
	}
	
	return 0;	
	
}
