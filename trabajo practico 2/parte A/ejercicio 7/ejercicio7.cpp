#include <iostream>
#include <conio.h>
using namespace std;


int main(){
char vectorA[]={'a','b','c','d','e'};
char vectorB[]={'f','g','h','i','j'};
char vectorC[10];

for(int i=0;i<5;i++){
	vectorC[i]=vectorA[i];
	
}

for(int i=5;i<10;i++){
	vectorC[i]=vectorB[i-5];
}

for(int i=0;i<10;i++){
	cout<<vectorC[i]<<endl;
}

_getch();
return 0;

}
