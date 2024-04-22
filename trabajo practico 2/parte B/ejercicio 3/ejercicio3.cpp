#include <iostream>
#include <conio.h>

using namespace std;



int main(){
	int suma=0;
	int matriz[2][2]={{1,5},{4,3}};
	int matriz2[2][2];

	for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
	matriz2[i][j]=matriz[i][j];
	}
	}
	



for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		
	
		suma=matriz2[i][j]+1;
		cout<<suma;
	
			}
		
		cout<<"\n";
		
		}
		
		
		



return 0;
_getch();


}
