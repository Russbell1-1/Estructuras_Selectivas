#include<bits/stdc++.h>
//Pulsaciones
using namespace std;

int main(){
	
	float E,S,P;
	cout<<"Ingrese su edad: ";
	cin>>E;
	cout<<"Ingrese su sexo"<<endl<<"1 si es mujer"<<endl<<"0 Si es varon"<<endl<<": ";
	cin>>S;
	if (S<1){
		P=(210-E)/10;
		cout<<"Su numero promedio de pulsaciones es: "<<P;
	} else {
		P=(220-E)/10;
		cout<<"Su numero promedio de pulsaciones es: "<<P;
	}
	return 0;
}
