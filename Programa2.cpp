#include <iostream>

using namespace std;

int Programa2(){
	int n1=0;
	cout<<"Ingrese un numero para determinar si es par o impar"<<endl;
	cout<<"Ingresar valor: ";
	cin>>n1;
	if((n1%2)==0){
		cout<<"El valor ingresado es par\n";
	}else{
		cout<<"El valor ingresado es impar\n";
	}
	system("pause");
}