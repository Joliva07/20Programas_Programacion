#include <iostream>
#include <math.h>
using namespace std;

int Programa16(){
	//int cat1=0, cat2=0, hip=0;
	double cat1=0, cat2=0, hip=0,raiz=0;
	cout<<"Ingrese el valor del primer cateto: ";
	cin>>cat1;
	cout<<"\nIngrese el valor del segundo cateto: ";
	cin>>cat2;
	raiz=(cat1*cat1)+(cat2*cat2);
	hip=sqrt(raiz);
	cout<<"\n\nLa hipotenusa es: "<<hip;
	system("pause");
}