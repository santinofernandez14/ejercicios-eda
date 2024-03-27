#include <iostream>


using namespace std;


int main(){
	int n,a=0,b=1,j=1;
	cout<<"ingrese un numero para hacer la serie fibonacci ";cin>>n;
	
	cout<<" 1 ";
	for(int i=1; i<n;i++){
	j=a+b;
	cout<<j<<" ";
	
	a=b;
	b=j;	
	}
	cout<<"\n";

	return 0;
}
