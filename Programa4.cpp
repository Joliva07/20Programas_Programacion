#include <iostream>
#include <string>
using namespace std;

int Programa4(){
	string palabra;
	int compos=0, comp=0;
	cout<<"Ingrese una palabra para identificar si es palindroma o no: ";
	cin>>palabra;
	
	for(int pos=palabra.length()-1; pos>=0; pos--){
		if(palabra[pos]==palabra[compos]){
			comp++;
		}
		compos++;
	}
	if(palabra.length()==comp){
		cout<<"\nEs palindromo\n";
	}else{
		cout<<"\nNo es palindromo\n";
	}
	system("pause");
}