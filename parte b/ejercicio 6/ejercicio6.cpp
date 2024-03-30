#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <time.h>
using namespace std;


int main(){
	int a,b,x,resultado=1,i;
	srand(time(0));
	a=rand()%40+2;
	cout<<"ingrese un exponente ";
	cin>>b;
		
	
	
	for(int j=1; j<=b;++j){
		resultado*=a;
		
		}
	
	
	if(b>0 && b<=5){
		
		cout<<"el resultado es "<<resultado;	
		}else{
			cout<<"exponente incorrecto";
		
			}	
	
	return 0;
	}
	

