#include <iostream>

using namespace std;


int main(){
	int matriz[3][3],suma=0,m=1,matriz2[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"ingrese un numero ["<<i<<"] ["<<j<<"] ";
			cin>> matriz[i][j];  
		}
	}
	

	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		suma+=matriz[i][j];
		cout<<matriz[i][j]<<" ";
	}
	cout<<"\n";
	
	}
	
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"ingrese un numero ["<<i<<"] ["<<j<<"] ";
			cin>> matriz2[i][j];  
		}
	}
	

	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		m*=matriz2[i][j];
		cout<<matriz2[i][j]<<" ";
	}
	cout<<"\n";
	
	}
	
	cout<<"la suma de la matriz es "<<suma<<endl;
	cout<<"la multiplicacion de la otra matriz es  "<<m<<endl;
	
	return 0;
	
}
