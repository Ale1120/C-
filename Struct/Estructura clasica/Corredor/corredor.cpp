//Ejercicio 1: Hacer una estructura llamada corredor, en la cual se tendrán los siguientes campos: Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asignarle una categoría de competición:
//- Juvenil menor o = 18 años
//- Señor menor o = 40 años
//-Veterano mayor a 40 años
//Posteriormente imprimir todos los datos del corredor, incluida su categoría de competición.
#include <iostream>
#include<string.h>
struct Correrdor {
	char nombre[20];
	int edad;
	char sexo[20];
	char club[20];
}corredor1;
using namespace std;
int main (){
	char categoria[20];
	
	cout<<"Nombre ";
	cin.getline(corredor1.nombre,20,'\n');
	cout<<"Edad ";
	fflush(stdin);
	cin>>corredor1.edad;
	cout<<"Sexo ";
	fflush(stdin);
	cin.getline(corredor1.sexo,20,'\n');
	cout<<"Club ";
	cin.getline(corredor1.club,20,'\n');
	if(corredor1.edad<=18){
		strcpy(categoria,"juvenil");
	}
	else if (corredor1.edad<=40){
		strcpy(categoria,"Senor");
	}
	else{
		strcpy(categoria,"Veterano");
	}
	cout<<"DATOS DEL CORREDOR"<<endl;
	cout<<corredor1.nombre<<endl<<corredor1.edad<<endl<<corredor1.sexo<<endl<<corredor1.club<<endl<<categoria;
	
	return 0;
}
