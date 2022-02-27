#include <iostream>

using namespace std;

Programa1(){
	int opc=0;
	double n1=0,n2=0,res=0;
	cout<<"Ingrese 2 numeros"<<endl;
	cout<<"Primer numero"<<endl;
	cin>>n1;
	cout<<"Segundo numero"<<endl;
	cin>>n2;
	cout<<"\nEscriba el numero de la operacion que desea realizar"<<endl;
	cout<<"1. Suma     2. resta     3. multiplicacion     4. division"<<endl;
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"\n\nSuma\n";
			res=n1+n2;
			cout<<n1<<"+"<<n2<<"= "<<res<<endl;
			break;
		case 2:
			cout<<"\n\nResta\n";
			res=n1-n2;
			cout<<n1<<"-"<<n2<<"= "<<res<<endl;
			break;
		case 3:
			cout<<"\n\nMultiplicacion\n";
			res=n1*n2;
			cout<<n1<<"*"<<n2<<"= "<<res<<endl;
			break;
		case 4:
			cout<<"\n\nDivision\n";
			if(n2==0){
				cout<<"El segundo valor no puede ser 0, elija otro valor"<<endl;
				cin>>n2;
				res=n1/n2;
				cout<<n1<<"/"<<n2<<"= "<<res<<endl;
			}else{
				res=n1/n2;
				cout<<n1<<"/"<<n2<<"= "<<res<<endl;
			}
			break;
	}
	system("pause");
}