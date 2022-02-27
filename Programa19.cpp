#include <iostream>
using namespace std;

int Programa19(){
	int dia=0, mes=0;
	cout<<"Escriba su fecha de nacimiento y le diremos su signo del zodiaco";
	cout<<"\nDia de nacimiento: ";
	cin>>dia;
	cout<<"\nMes de nacimiento: ";
	cin>>mes;
	cout<<endl;
	switch(mes){
		case 1:{
			if(dia<21){
				cout<<"Capricornio"<<endl;
			}else{
				cout<<"Acuario"<<endl;
			}
			break;
		}
		case 2:{
			if(dia<21){
				cout<<"Acuario"<<endl;
			}else{
				cout<<"Piscis"<<endl;
			}
			break;
		}	
		case 3:{
			if(dia<21){
				cout<<"Piscis"<<endl;
			}else{
				cout<<"Aries"<<endl;
			}
			break;
		}
		case 4:{
			if(dia<21){
				cout<<"Aries"<<endl;
			}else{
				cout<<"Tauro"<<endl;
			}
			break;
		}
		case 5:{
			if(dia<22){
				cout<<"Tauro"<<endl;
			}else{
				cout<<"Geminis"<<endl;
			}
			break;
		}
		case 6:{
			if(dia<22){
				cout<<"Geminis"<<endl;
			}else{
				cout<<"Cancer"<<endl;
			}
			break;
		}
		case 7:{
			if(dia<23){
				cout<<"Cancer"<<endl;
			}else{
				cout<<"Leo"<<endl;
			}
			break;
		}
		case 8:{
			if(dia<23){
				cout<<"Leo"<<endl;
			}else{
				cout<<"Virgo"<<endl;
			}
			break;
		}
		case 9:{
			if(dia<24){
				cout<<"Virgo"<<endl;
			}else{
				cout<<"Libra"<<endl;
			}
			break;
		}
		case 10:{
			if(dia<25){
				cout<<"Libra"<<endl;
			}else{
				cout<<"Escorpio"<<endl;
			}
			break;
		}
		case 11:{
			if(dia<23){
				cout<<"Escorpio"<<endl;
			}else{
				cout<<"Sagitario"<<endl;
			}
			break;
		}
		case 12:{
			if(dia<22){
				cout<<"Sagitario"<<endl;
			}else{
				cout<<"Capricornio"<<endl;
			}
			break;
		}
	}
	system("pause");
}





