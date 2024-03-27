#include <iostream>
using namespace std;


int main(){
	int cant, cont=0;
	float nota1,nota2,nota3,resultado=0;
	cout<< "ingrese la cantidad de alumnos "; cin>> cant;
	
	while(cant!=cont){


	
	cout<< "ingrese la cantidad de alumnos "; cin>> nota1;
	cout<< "ingrese la cantidad de alumnos "; cin>> nota2;
	cout<< "ingrese la cantidad de alumnos "; cin>> nota3;
	
	nota1=nota1*0.30;
	nota2=nota2*0.60;
	nota3=nota3*0.10;

	resultado=nota1+nota2+nota3;
	

	
	cout<< "\el resultado de las notas es "	<<resultado<<endl;
	
			cont++;	
		}
	return 0;
	

}

