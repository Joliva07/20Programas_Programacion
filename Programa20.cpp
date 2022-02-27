#include <iostream>
using namespace std;

int Programa20(){
	int n1=0,n2=0,n3=0, prom=0;
	cout<<"Ingrese 3 notas para determinar el promedio, se indicara si el estudiante aprueba la clase o no\n";
	cout<<"Primera nota: ";
	cin>>n1;
	cout<<"Segunda nota: ";
	cin>>n2;
	cout<<"Tercara nota: ";
	cin>>n3;
	
	prom=(n1+n2+n2)/3;
	if(prom>60){
		cout<<"\n\nSu promedio es de "<<prom<<", Aprobado\n";
	}else{
		cout<<"\n\nSu promedio es de "<<prom<<", Desaprovado\n";
	}
	system("pause");
}