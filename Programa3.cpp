#include <iostream>
using namespace std;

int Programa3(){
	double datosIn=0, datosRes=0; int opc=0;
	cout<<"Escriba el numero de la opcion que desea realizar"<<endl;
	cout<<"1. Kilometros a millas   2. Metros a pulgadas   3. Libras a kilos\n4. Millas a kilometros   5. Pulgadas a metros   6. Kilos a libras"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"\nKilometros a millas\n";
			cout<<"Escriba la cantidad a convertir\n";
			cin>>datosIn;
			datosRes = datosIn * 0.621;
			cout<<datosIn<< " Kilometros son: "<<datosRes<<" Millas\n";
			break;
		case 2:
			cout<<"\nMetros a pulgadas\n";
			cout<<"Escriba la cantidad a convertir\n";
			cin>>datosIn;
			datosRes = datosIn * 39.37;
			cout<<datosIn<< " Metros son: "<<datosRes<<" Pulgadas\n";
			break;
		case 3:
			cout<<"\nLibras a kilos\n";
			cout<<"Escriba la cantidad a convertir\n";
			cin>>datosIn;
			datosRes = datosIn * 0.4565;
			cout<<datosIn<< " Libas son: "<<datosRes<<" Kilos\n";
			break;
		case 4:
			cout<<"\nMillas a kilometros\n";
			cout<<"Escriba la cantidad a convertir\n";
			cin>>datosIn;
			datosRes = datosIn * 1.609;
			cout<<datosIn<< " Millas son: "<<datosRes<<" Kilometros\n";
			break;
		case 5:
			cout<<"\nPulgadas a matros\n";
			cout<<"Escriba la cantidad a convertir\n";
			cin>>datosIn;
			datosRes = datosIn * 0.0254;
			cout<<datosIn<< " Pulgadas son: "<<datosRes<<" Metros\n";
			break;
		case 6:
			cout<<"\nKilos a libras\n";
			cout<<"Escriba la cantidad a convertir\n";
			cin>>datosIn;
			datosRes = datosIn * 2.20462;
			cout<<datosIn<< " Libas son: "<<datosRes<<" Kilos\n";
			break;
	}
	system("pause");
}