#include <iostream>

using namespace std;


int main(){
	float suma=0,n;
	
	cout<<"ingrese cuantos numeros quiere sumar y restar "; cin>>n;
	
	for(int i=1;i<=n;i++){
		if(i%2){
			suma+=i;
		}else{
			suma-=i;
		}
	}
	
	cout<<"\n el resultado de la suma es " <<suma<<endl;
	
	return 0;
}
