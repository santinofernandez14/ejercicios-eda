#include <iostream>

using namespace std;


int main(){
	float factorial=1,n;
	
	cout<<"ingrese cuantos numeros quiere multiplicar "; cin>>n;
	
	for(int i=1;i<=n;i++){
		factorial*=i;
	}
	
	cout<<"\n el resultado de la multiplicacion es " <<factorial<<endl;
	return 0;
}
