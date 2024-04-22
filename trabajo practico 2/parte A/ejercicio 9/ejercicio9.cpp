#include<iostream>
using namespace std;
#include <conio.h>


int main(){
	
	int vectorA[100],a,b=0;
	

	
	for(int i=0;i<100;i++){
		cout<<"ingrese un numero ";
		cin>>vectorA[i];
		
	}
	
	for(int i=0;i<100;i++){	
		if(i==1){
			a=vectorA[i];
		}else if(a>vectorA[i]){
			b=1;
		}else{
			a=vectorA[i];
		}	
	}
	

	if(b==1){
		cout<<"el vector no esta ordenado ";
	}else{
		cout<<"el vector esta ordenado de forma creciente ";
	}
	_getch();
	
	return 0;
	
}
