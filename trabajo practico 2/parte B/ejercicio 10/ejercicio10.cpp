#include <iostream>

using namespace std;


int main(){
	int matriz[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"ingrese un numero ["<<i<<"] ["<<j<<"] ";
			cin>> matriz[i][j];  
		}
	}
	
	
		for(int i=0;i<1;i++){
		for(int j=0;j<1;j++){
			cout<<"ingrese las coordenadas x y ";
			cin>>i;
			cout<<"ingrese las coordenadas x y ";
			cin>>j;
			
			cout<<"en la posicion ["<<i<<"] ["<<j<<"] se encuentra el numero "<<matriz[i][j];
			
		}
		
	}
	
	return 0;
	
}
