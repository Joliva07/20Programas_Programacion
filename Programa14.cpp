#include <iostream>
#include <windows.h>

using namespace std;

/*void gotoxy(int x, int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}*/

int Programa14(){

	for(int y=0; y<10;y++){
		for(int x=0; x<30; x++){
			gotoxy(x,y);
			cout<<".";
			system("cls");			
		}
	}
	system("pause");
}