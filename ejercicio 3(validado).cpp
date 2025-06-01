#include<bits/stdc++.h>
using namespace std;

int main(){
	float C,Pi,Pf;
	cout<<"Ingrese el valor de su compra: ";
	cin>>Pi;
	if (Pi<0){
		cout<<"Valor no valido";
	} else {
		cout<<"Ingrese la cantidad de camisetas adquiridas: ";
	    cin>>C;
	    if (C<0){
	    	cout<<"Cantidad no valida";
		} else {
			if (C>=3){
		    Pf=Pi-Pi/5;
		    cout<<"Su pago final sera: "<<Pf;
	        } else {
		    Pf=Pi;
		    cout<<"No aplica descuento, su pago final sera: "<<Pf;
            }	
		}		
	}
    return 0;
}
