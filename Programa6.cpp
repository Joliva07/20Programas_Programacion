#include <iostream> 
using namespace std; 

int Programa6(){
	int valorIn=0,u=0,d=0,c=0,m=0;
	cout<<"Ingrese un valor, solo se podran incluir valores de hasta 4 digitos: \n";
	cin>>valorIn;
	
	u=valorIn%10;
		valorIn/=10;
	d=valorIn%10;
		valorIn/=10;
	c=valorIn%10;
		valorIn/=10;
	m=valorIn%10;
		
	switch(m){
		case 1: cout<<"mil "; break;
		case 2: cout<<"dos mil "; break;
		case 3: cout<<"tres mil "; break;
		case 4: cout<<"cuatro mil "; break;
		case 5: cout<<"cinco mil "; break;
		case 6: cout<<"seis mil "; break;
		case 7: cout<<"siete mil "; break;
		case 8: cout<<"ocho mil "; break;
		case 9: cout<<"nueve mil "; break;
	}
	switch(c){
		case 1: cout<<"ciento "; break;
		case 2: cout<<"doscientos "; break;
		case 3: cout<<"trescientos "; break;
		case 4: cout<<"cuatrocientos "; break;
		case 5: cout<<"quinientos "; break;
		case 6: cout<<"seiscientos "; break;
		case 7: cout<<"sietecientos "; break;
		case 8: cout<<"ochocientos "; break;
		case 9: cout<<"nuevecientos "; break;
	}
	switch(d){
		case 1:
			if(u<6){
				switch(u){
					case 1: cout<<"once";break;
					case 2: cout<<"doce";break;
					case 3: cout<<"trece";break;
					case 4: cout<<"catorce";break;
					case 5: cout<<"quince";break;
				}
			}else{
				cout<<"diez y ";
			}
		
		break;
		case 2: cout<<"veinti"; break;
		case 3: cout<<"trinta y "; break;
		case 4: cout<<"cuarenta y "; break;
		case 5: cout<<"cincuenta y "; break;
		case 6: cout<<"sesenta y "; break;
		case 7: cout<<"setenta y "; break;
		case 8: cout<<"ochenta y "; break;
		case 9: cout<<"noventa y "; break;
	}
		if(d==1 && u<6){
			
		}else{
			switch(u){
			case 1: cout<<"uno"; break;
			case 2: cout<<"dos"; break;
			case 3: cout<<"tres"; break;
			case 4: cout<<"cuatro"; break;
			case 5: cout<<"cinco"; break;
			case 6: cout<<"seis"; break;
			case 7: cout<<"siete"; break;
			case 8: cout<<"ocho"; break;
			case 9: cout<<"nueve"; break;	
			}
		}
	cout<<"\n";
	system("pause");
}