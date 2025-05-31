#include<bits/stdc++.h>
using namespace std;

int main(){
	float C,Pf;
	cout<<"Ingrese el monto de su compra: ";
	cin>>C;
	if (C>1000){
		Pf=C - C/5;
		cout<<"Su pago final sera: "<<Pf<<endl;
	} else {
		Pf=C;
		cout<<"No aplica descuento, su pago final sera: "<<Pf<<endl;
	}
	return 0;
}
