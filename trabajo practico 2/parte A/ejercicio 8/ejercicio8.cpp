#include<iostream>
using namespace std;
#include <conio.h>


int main(){
	
	int vectorA[5];
	int vectorB[5];
	
	for(int i=0;i<5;i++){
		cout<<"ingrese un numero ";
		cin>>vectorA[i];
		
		
	}
	
	for(int i=0;i<5;i++){
		vectorB[i]=vectorA[i];
		cout<<vectorB[i]<<endl;
	}
	
	_getch();
	
	return 0;
	
}
