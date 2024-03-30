#include <iostream>

using namespace std;



int main(){

int a,suma=0,factorial=1;


cout<<"ingrese los numeros "; cin>>a;



for(int i=1;i<=a;i++){
	factorial*=i;
	suma+=factorial;
}

cout<<"\n el resultado de la suma es "<<suma<<endl;
return 0;

}
