#include<bits/stdc++.h>
using namespace std;

int main(){
	float N,Pi,Pf;
	cout<<"Indique su monto a pagar: ";
	cin>>Pi;
	cout<<"Escoja un numero del 1 al 100: ";
	cin>>N;
	if (N>=74){
		Pf=Pi-Pi/5;
		cout<<"Su pago final sera: "<<Pf<<endl;
	} else {
		Pf=Pi -Pi*0.15;
		cout<<"Su pago final sera: "<<Pf<<endl;
	}
	return 0;
}
