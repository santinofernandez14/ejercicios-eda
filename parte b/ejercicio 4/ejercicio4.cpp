#include <iostream>

using namespace std;


int main(){
	int temp,sumat=0,tempm,tempa,tempb=999;
	
	for(int i=0;i<24;i+=4){
		cout<<"ingrese la temperatura a las " <<i<<endl;
		cin>> temp;
		sumat=+temp;
		if(temp>tempa){
			tempa=temp;
		}
		if(temp<tempb){
			tempb=temp;
		}
		
	}
	
	tempm=sumat/6;
	
	cout<<"\n la temperatura media del dia es "<<tempm<<endl;
	cout<<"\n la temperatura mas alta del dia es "<<tempa<<endl;
	cout<<"\n la temperatura mas baja del dia es "<<tempb<<endl;
	
	return 0;
}
