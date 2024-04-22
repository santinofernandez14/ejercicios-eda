#include <iostream>

using namespace std;


int main(){
	int matriz[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"ingrese un numero ["<<i<<"] ["<<j<<"] ";
			cin>> matriz[i][j];  
		}
	}
	
	cout<<"matriz original\n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		cout<<matriz[i][j]<<" ";
	}
	cout<<"\n";
	
	}
	
	cout<<"\n";
	
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		cout<<matriz[j][i]<<" ";
	}
	cout<<"\n";
	
	}
	
	return 0;
	
}
