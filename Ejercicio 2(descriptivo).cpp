#include<bits/stdc++.h>
using namespace std;

int main(){
	float Compra,Pagofinal;
	cout<<"Ingrese el monto de su compra: ";
	cin>>Compra;
	if (Compra>1000){
		Pagofinal=Compra - Compra/5;
		cout<<"Su pago final sera: "<<Pagofinal<<endl;
	} else {
		Pagofinal=Compra;
		cout<<"No aplica descuento, su pago final sera: "<<Pagofinal<<endl;
	}
	return 0;
}
