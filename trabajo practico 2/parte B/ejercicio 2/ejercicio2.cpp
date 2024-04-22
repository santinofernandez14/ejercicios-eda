#include <iostream>
#include <conio.h>

using namespace std;



int main(){
	int n=0,num;
	cout<<"ingrese la fila de la matriz ";
	cin>>n;
	cout<<"ingrese la columna de la matriz ";
	cin>>num;
	int matriz[n][num];
	if(n>=3 && n<=7 && num>=3 && num<=7){

		for(int i=0;i<n;i++){
	for(int j=0;j<num;j++){
		cout<<"ingrese el siguiente numero ["<<i<<"] ["<<j<<"] ";
		cin>>matriz[i][j];
	}
	}
	
	cout<<"\n";

for(int i=0;i<n;i++){
	for(int j=0;j<num;j++){
		cout<<matriz[i][j];
		
		}
		
		cout<<"\n";
		}

for(int i=0;i<n;i++){
	for(int j=0;j<num;j++){
		if(i==j){
	
		cout<<matriz[i][j]<<" ";
			}
		}
		
		cout<<"\n";
		}

}else{
		cout<<"ingrese una matriz valida ";
		
		
		}

return 0;
_getch();


}
