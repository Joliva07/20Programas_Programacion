#include <iostream>
using namespace std;

int Programa15(){
	int saldo=0, opc=0, ret=0, tret=0;
	char sn;
	cout<<"Bienvenido\n\n";
	//cout<<"¿Que tipo de transaccion desea realizar?\n\n";
	cout<<"Indique la cantidad de saldo que posee\nQ ";
	cin>>saldo;
	
	do{
		cout<<"\n¿Que tipo de transaccion desea realizar? Escribir el numero de la opcion\n";
		cout<<"\n1. Retirar dinero\n2. Ver reporte del saldo\n";
		cin>>opc;
		switch(opc){
			case 1:{
				cout<<"\nIndique la cantidad que desea retirar: Q ";
				cin>>ret;
				saldo-=ret;
				tret=tret+ret;
				cout<<"\nEl saldo retirado es de Q "<<ret<<endl;
				break;
			}
			case 2:{
				cout<<"\nEl saldo retirado total es de Q "<<tret;
				cout<<"\nEl saldo restante es de Q "<<saldo;
				break;
			}
		}
		if(opc==1||opc==2){
		cout<<"\n\n¿Desea realizar otra transaccion? Escribir 's' o 'n'\n";
		cin>>sn;
		}else{
			cout<<"\nDisculpe, esa opcion no existe actualmente\n";
			sn='s';
		}
	}while(sn=='s');
	cout<<"Que tenga un feliz dia\n\n";
	system("pause");
	return 0;
}