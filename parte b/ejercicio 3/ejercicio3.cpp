#include <iostream>

using namespace std;


int main(){
	int suma=0,cuadrado,num,cont=0;

		do{
			cout<<"ingrese un numero ";cin>> num;
			if(num<0){
				cout<<"no ingrese un numero negativo";
				break;
			}else if(num==0 || num>10){
				cout<<"no ingrese numeros mayores a diez o un 0";
			
				break;
			
			
			}
			
				
				
			
			
		
				cont++;
					cuadrado=num*num;
					suma+=cuadrado;
					
				
		}while(cont!=10) ;
		
		if(cont==10){
			cout<<"\n el resultado de la suma es "<<suma<<endl;	
		}
		
	
		return 0;
}
