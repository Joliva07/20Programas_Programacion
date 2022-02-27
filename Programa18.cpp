#include <iostream>
using namespace std;

int Programa18(){
	int n1=0, n2=0, n3=0;
	cout<<"Ingrese 3 valores para determinar cual es mayor y cual es el menor\n";
	cout<<"Valor 1: ";
	cin>>n1;
	cout<<"Valor 2:";
	cin>>n2;
	cout<<"Valor 3:";
	cin>>n3;

	if(n1>n2 && n2>n3){
		cout<<endl<<n1<<" es mayor y "<<n3<<" es el menor";
	}
	if(n1>n3 && n3>n2){
		cout<<endl<<n1<<" es mayor y "<<n2<<" es el menor";
	}
	if(n2>n1 && n1>n3){
		cout<<endl<<n2<<" es mayor y "<<n3<<" es el menor";
	}
	if(n2>n3 && n3>n1){
		cout<<endl<<n2<<" es mayor y "<<n1<<" es el menor";
	}
	if(n3>n1 && n1>n2){
		cout<<endl<<n3<<" es mayor y "<<n2<<" es el menor";
	}
	if(n3>n2 && n2>n1){
		cout<<endl<<n3<<" es mayor y "<<n1<<" es el menor";
	}
	system("pause");
}