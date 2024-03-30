#include <iostream>

using namespace std;


int main(){
	float precio,iva=0;
	
	cout<<"ingrese el precio de un producto ";cin>>precio;
	
	iva=precio*1.21;
	
	cout<<"el precio del producto con iva es "<<iva;
	
	return 0;
	
}
