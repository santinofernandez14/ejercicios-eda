#include <iostream>
#include <conio.h>
#include <math.h>
#include <time.h>
#include<stdlib.h>

using namespace std;



int main(){
	srand(time(NULL));

	int n=0,num;
	cout<<"ingrese la fila de la matriz ";
	cin>>n;
	cout<<"ingrese la columna de la matriz ";
	cin>>num;
	int matriz[n][num];
	int matriz2[n][num];

		for(int i=0;i<n;i++){
	for(int j=0;j<num;j++){
		matriz[i][j]= rand() %100;
	}
	}
	
	
	
	

for(int i=0;i<n;i++){
	for(int j=0;j<num;j++){
	matriz2[i][j]=matriz[i][j];
		cout<<matriz2[i][j]<<" ";
	}
	cout<<"\n";
	}
	
	
		



return 0;
_getch();


}
