//Ejercicio 2: Hacer una estructura llamada alumno, en la cual se tendrán los siguientes Campos: 
//Nombre, edad, promedio, pedir datos al usuario para 3 alumnos,
//comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.
#include <iostream>
#include<string.h>
struct Alumno{
	char nombre[20];
	int edad;
	double promedio;
}alumno[3];
using namespace std;
int main (){
	int mayor = 0,pos=0;
	for(int i=0; i<3;i++){
		cout<<"ALUMNO"<<i<<endl;
		fflush(stdin);
		cout<<"Nombre ";
		cin.getline(alumno[i].nombre,20,'\n');
		cout<<"Edad ";
		cin>>alumno[i].edad;
		cout<<"Promedio ";
		cin>>alumno[i].promedio;
		 if(alumno[i].promedio > mayor){
			mayor = alumno[i].promedio; //sacamos el mayor promedio
			pos = i; // guardamos la posicion del mayor promedio
		}
		cout<<"\n";
	}
	cout<<"\nAlumnos con el mejor Promedio: \n";
	cout<<"Nombre: "<<alumno[pos].nombre<<endl;
	cout<<"Edad: "<<alumno[pos].edad<<endl;
	cout<<"Promedio: "<<alumno[pos].promedio<<endl;
}
