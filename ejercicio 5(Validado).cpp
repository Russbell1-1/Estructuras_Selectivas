#include<bits/stdc++.h>
//Pulsaciones
using namespace std;

int main(){
	
	float Edad,Sexo,Promediodepulsaciones;
	cout<<"Ingrese su edad: ";
	cin>>Edad;
	cout<<"Ingrese su sexo"<<endl<<"1 si es mujer"<<endl<<"0 Si es varon"<<endl<<": ";
	cin>>Sexo;
	if (Sexo<1){
		Promediodepulsaciones=(210-Edad)/10;
		cout<<"Su numero promedio de pulsaciones es: "<<Promediodepulsaciones;
	} else {
		Promediodepulsaciones=(220-Edad)/10;
		cout<<"Su numero promedio de pulsaciones es: "<<Promediodepulsaciones;
	}
	return 0;
}
