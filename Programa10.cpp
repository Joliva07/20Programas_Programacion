#include <iostream>
#include <string>
using namespace std;

int Programa10(){
	int n1=0,n2=0,res1=0,res2=0,res3=0,resf=0;
	cout<<"Escriba dos valores para multiplicarlos, se solicita que no sea valores con mas de 3 digitos\n";
	cout<<"Primer valor: ";
	cin>>n1;
	cout<<"\nSegundo valor: ";
	cin>>n2;
	resf=n1*n2;
	string len= std::to_string(n2);
	string lenr= std::to_string(resf);
	cout<<"          "<<n1<<endl;
		if(len.length()==3){
			cout<<"";
		}else{
			if(len.length()==2){
				cout<<" ";
			}else{
			cout<<"  ";
			}
		}
	cout<<"       x  "<<n2<<endl;
	res1=(n2%10)*n1;
	n2/=10;
	res2=(n2%10)*n1;
	n2/=10;
	res3=(n2%10)*n1;
	cout<<"       _______"<<endl;
	cout<<"          "<<res1<<endl;
	cout<<"         "<<res2<<endl;
	cout<<"     +  "<<res3<<endl;
	cout<<"       _______"<<endl;
	if(lenr.length()<6){
		cout<<" ";
	}
	cout<<"        "<<resf<<endl;
	
	system("pause");
	
}