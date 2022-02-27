#include <iostream>

using namespace std;


int Programa11(){
	int numero=0,resultado=0, residuo=0,comp=0;
	string reg[15];
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	cout<<endl<<endl;
	
	for(int i=0;i<15;i++){
		comp=numero%2;
		switch(comp){
			case 0: reg[i]='0'; break;
			case 1: reg[i]='1'; break;
		}
		numero/=2;
	}
	
	for(int i=14;i>=0;i--){
		cout<<reg[i];
	}
	cout<<endl;
	system("pause");
}