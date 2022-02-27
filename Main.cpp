#include <iostream>
#include "Programa1.cpp"
#include "Programa2.cpp"
#include "Programa3.cpp"
#include "Programa4.cpp"
#include "Programa5.cpp"
#include "Programa6.cpp"
#include "Programa7.cpp"
#include "Programa8.cpp"
#include "Programa9.cpp"
#include "Programa10.cpp"
#include "Programa11.cpp"
#include "Programa12.cpp"
#include "Programa13.cpp"
#include "Programa14.cpp"
#include "Programa15.cpp"
#include "Programa16.cpp"
#include "Programa17.cpp"
#include "Programa18.cpp"
#include "Programa19.cpp"
#include "Programa20.cpp"
using namespace std;

int main(){
	int op=0;
	char sn=' ';
	do{
		cout<<"Ingrese un numero para ejecutar un programa\n";
	cout<<"1. Suma, resta, multiplicacion y division\n";
	cout<<"2. Deteminar si el numero es par o impar\n";
	cout<<"3. Conversion de medidas\n";
	cout<<"4. Palabras palindromas\n";
	cout<<"5. Numeros arabicos a romanos\n";
	cout<<"6. Numeros a letras\n";
	cout<<"7. Numeros con decimales a letras\n";
	cout<<"8. Una tabla de multiplicar\n";
	cout<<"9. Las tablas de multiplicar\n";
	cout<<"10. Grafica de multiplicacion\n";
	cout<<"11. Numeros decimales a binario\n";
	cout<<"12. Numeros decimales a hexadecimales\n";
	cout<<"13. Figuras geometricas basicas\n";
	cout<<"14. Mover un punto por toda la pantalla\n";
	cout<<"15. Simulacion de cajero\n";
	cout<<"16. Calcular la hipotenusa\n";
	cout<<"17. Determinar la edad\n";
	cout<<"18. Calcular el valor mayor entre 3 numeros\n";
	cout<<"19. Signo del zodiaco\n";
	cout<<"20. Promedio de 3 notas\n";
	cin>>op;
	cout<<endl<<endl;
	
	switch(op){
		case 1:{
			system("cls");
			Programa1();
			break;
		}
		case 2:{
			system("cls");
			Programa2();
			break;
		}
		case 3:{
			system("cls");
			Programa3();
			break;
		}
		case 4:{
			system("cls");
			Programa4();
			break;
		}
		case 5:{
			system("cls");
			Programa5();
			break;
		}
		case 6:{
			system("cls");
			Programa6();
			break;
		}
		case 7:{
			system("cls");
			Programa7();
			break;
		}
		case 8:{
			system("cls");
			Programa8();
			break;
		}
		case 9:{
			system("cls");
			Programa9();
			break;
		}
		case 10:{
			system("cls");
			Programa10();
			break;
		}
		case 11:{
			system("cls");
			Programa11();
			break;
		}
		case 12:{
			system("cls");
			Programa12();
			break;
		}
		case 13:{
			system("cls");
			Programa13();
			break;
		}
		case 14:{
			system("cls");
			Programa14();
			break;
		}
		case 15:{
			system("cls");
			Programa15();
			break;
		}
		case 16:{
			system("cls");
			Programa16();
			break;
		}
		case 17:{
			system("cls");
			Programa17();
			break;
		}
		case 18:{
			system("cls");
			Programa18();
			break;
		}
		case 19:{
			system("cls");
			Programa19();
			break;
		}
		case 20:{
			system("cls");
			Programa20();
			break;
		}
	}
		cout<<"¿Desea ejecutar otro programa? escribir 's' o 'n'\n";
		cin>>sn;
		if(sn=='s'){
			system("cls");
		}
	}while(sn=='s');
}