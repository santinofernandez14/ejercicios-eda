#include <iostream>


using namespace std;



int main(){
	

	int n=0,num;
	char a='F';
	cout<<"ingrese la fila de la matriz ";
	cin>>n;
	cout<<"ingrese la columna de la matriz ";
	cin>>num;
	int matriz[n][num];


		for(int i=0;i<n;i++){
	for(int j=0;j<num;j++){
		cout<<"ingrese un numero ["<<i<<"] ["<<j<<"] ";
		cin>>matriz[i][j];
	}
	}
	
	
	if(n==num){
		for(int i=0;i<n;i++){
	for(int j=0;j<num;j++){
	if(matriz[i][j]==matriz[j][i]){
		a='V';
	}
		}	
		
		}
	}
	
cout<<"\n";

if(a=='V'){
	cout<<"la matriz es simetrica ";
}else{
	cout<<"la matriz no es simetrica ";
}	
	
		



return 0;



}
