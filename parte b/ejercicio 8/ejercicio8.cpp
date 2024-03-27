#include<iostream>

using namespace std;


int main(){
	int cont,num1,num2,num3,tercer=0,uno=0,todos=0;
	
for(int i=1;i<=5;i++){
	
	cout<<"ingrese la nota del primer examen ";cin>> num1;
	cout<<"ingrese la nota del segundo examen "; cin>> num2;
	cout<<"ingrese la nota del tercer examen "; cin>> num3;
	
	if(num1>=7 && num2>=7 && num3>=7 && num1>0 && num2>0 && num3>0 && num1<=10 && num2<=10 && num3<=10){
		todos++;
		cout<<"\n los alumnos que aprobaron todos los examenes fueron " <<todos<<endl;
	}if(num1>=7 || num2>=7 || num3>=7 && num1>0 && num2>0 && num3>0 && num1<=10 && num2<=10 && num3<=10){
			uno++;
			cout<<"\n los alumnos que aprobaron al menos un examen fueron " <<uno<<endl;
	}if(num1<=6 && num2<=6 && num3>=7 && num1>0 && num2>0 && num3>0 && num1<=10 && num2<=10 && num3<=10){
			tercer++;
			cout<<"\n los alumnos que aprobaron el ultimo  examen fueron " <<tercer<<endl;
	}
}
return 0;
}
