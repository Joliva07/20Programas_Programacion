#include <iostream>

using namespace std;


int Programa12(){
	int numero=0, comp=0;
	string reg[15];
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	cout<<endl<<endl;
	
	for(int i=0;i<15;i++){
		comp=numero%16;
		switch(comp){
			case 1: reg[i]='1'; break;
			case 2: reg[i]='2'; break;
			case 3: reg[i]='3'; break;
			case 4: reg[i]='4'; break;
			case 5: reg[i]='5'; break;
			case 6: reg[i]='6'; break;
			case 7: reg[i]='7'; break;
			case 8: reg[i]='8'; break;
			case 9: reg[i]='9'; break;
			case 10: reg[i]='A'; break;
			case 11: reg[i]='B'; break;
			case 12: reg[i]='C'; break;
			case 13: reg[i]='D'; break;
			case 14: reg[i]='E'; break;
			case 15: reg[i]='F'; break;
		}
		numero/=16;
	}
	for(int i=14;i>=0;i--){
		cout<<reg[i];
	}
	cout<<endl;
	system("pause");
	
}