#include <iostream>
using namespace std;


int main(){
	int num;
	int eleccion;
	
	
	do{
	

	cout<<"ingrese un numero ";cin>>num;
	
	

	}while(cont>10);
	
	for(int i=1;i<=10;i++){
		
		cout<<num<<"*"<<i<<" = "<<num*i<<endl;
	}
	

	do{
	cout<<"desea ingresar otro numero 1/2 ";cin>>eleccion;
	if(eleccion==1){
	cout<<"ingrese un numero ";cin>>num;
		for(int i=1;i<=10;i++){
		
		cout<<num<<"*"<<i<<" = "<<num*i<<endl;
			
	}

	}else if(eleccion==2){
		cout<<"usted eligio no ingresar ningun numero";
	}else{
		cout<<"no eligio una opcion correcta";
		break;
	}
	}while(eleccion!=2);
	

	return 0;
}
