#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;


int main(){
int vectorV[20],a;
int vectorA[20];
int vectorB[20];


for(int i=0;i<4;i++){
	cout<<"ingrese un numero ";
	cin>>vectorV[i];
	
}

for(int i=0;i<20;i++){
	vectorA[i]=vectorV[i];
	if(vectorA[i]<0){

	cout<<"los numeros negativos en el vector A son "<<vectorA[i]<<endl;
	}
}

for(int i=0;i<20;i++){
	vectorB[i]=vectorV[i];
	if(vectorB[i]>=0){

	a=pow(vectorB[i],2);
	cout<<"los numeros positivos elevados al cuadrado son "<<a<<endl;
	}
}

_getch();
return 0;

}
