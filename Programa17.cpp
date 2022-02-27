#include <iostream>
using namespace std;

int Programa17(){
	int dia1=0,mes1=0,anho1=0,dia2=0,mes2=0,anho2=0,edad=0;
	cout<<"Escriba su fecha de nacimiento y le diremos su edad";
	cout<<"\nDia de nacimiento:";
	cin>>dia1;
	cout<<"\nMes de nacimiento:";
	cin>>mes1;
	cout<<"\nAnho de nacimiento:";
	cin>>anho1;
	cout<<"\nEscriba la fecha actual";
	cout<<"\nDia actual:";
	cin>>dia2;
	cout<<"\nMes actual:";
	cin>>mes2;
	cout<<"\nAnho actual:";
	cin>>anho2;
	
	if(mes1>mes2){
		if(dia1<dia2){
			edad=(anho2-anho1)-1;
			cout<<edad<<" anhos\n";
		}else{
			edad=(anho2-anho1);
			cout<<edad<<" anhos\n";
		}
	}else{
			edad=(anho2-anho1);
			cout<<edad<<" anhos\n";
	}
	system("pause");
}