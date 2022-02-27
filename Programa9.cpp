#include <iostream>

using namespace std;

int Programa9(){
	int res=0;
	for(int tabla=1; tabla<=10; tabla++){
		
		cout<<"Tabla de: "<<tabla<<endl;
		for(int num=1; num<=10; num++){
			res=0;
			res=tabla*num;
			cout<<tabla<<" * "<<num<<" = "<<res<<endl;
		}
		cout<<endl;
	}
	system("pause");
}