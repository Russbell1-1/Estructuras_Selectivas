#include<bits/stdc++.h>
using namespace std;

int main(){
	float n1,n2,n3,P;
	cout<<"Ingrese sus tres notas: "<<endl;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	P= (n1+n2+n3)/3;
	if (P>=70){
		cout<<"Aprobado";
	} else {
		cout<<"Desaprobado";
	}
	return 0;
}
