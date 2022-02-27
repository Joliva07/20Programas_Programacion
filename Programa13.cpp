#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}

int Programa13(){
	int op=0;
	cout<<"Escriba el numero de la opcion que desea que se muestre en pantalla \n";
	cout<<"1. Cuadrado      2. Rectangulo      3. Triangulo      4. Circulo\n";
	cin>>op;
	switch(op){
		case 1:{
			for(int x=80; x<91; x++){
				for(int y=4; y<10; y++){
				gotoxy(x,y);
				cout<<"*";	
				}
			}
			break;
		}	
		case 2:{
			for(int x=80; x<88; x++){
				for(int y=4; y<12; y++){
				gotoxy(x,y);
				cout<<"*";	
				}
			}
			break;
		}	
		case 3:{
			int n=80;
		 	for(int y=4;y<11;y++){
		 		for(int x=80; x<=n;x++){
		 		gotoxy(x,y);
				cout<<"*";	
				}
		   		n++;
			}
			break;
		}
		case 4:{
			int x=80, y=4;
			gotoxy(x,y);
			cout<<"  ***"<<endl;
			gotoxy(x,y+1);
			cout<<" *   *"<<endl;
			gotoxy(x,y+2);
			cout<<"*     *"<<endl;
			gotoxy(x,y+3);
			cout<<"*     *"<<endl;
			gotoxy(x,y+4);
			cout<<" *   *"<<endl;
			gotoxy(x,y+5);
			cout<<"  ***"<<endl;
		}break;
			                     
	}
	cout<<endl;                   
	system("pause");
}