#include <iostream>

using namespace std;

int Programa8(){
	int n=0, res=0;
	cout<<"Ingrese la tabla de multiplicar que desea realizar: ";
	cin>>n;
	
	for (int i=1;i<=10;i++){
		res = n * i;
		cout<<n<< " * "<<i<<" = "<<res<<endl;
	}
	system("pause");
}