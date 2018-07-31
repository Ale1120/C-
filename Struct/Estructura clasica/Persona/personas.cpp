//EStrurctura basica
#include<iostream>
using namespace std;
struct Persona{
	char nombre[20];
	int edad;
}persona1,persona2;
// persona1 = {"alejandro",22}
// persona1 = {"anthony",22}
int main(){
	cout<<"introduzca el nombre1 ";
	cin>>persona1.nombre;
	cout<<"introduzca la edad1 ";
	//otra forma de pedir con caena de caracteres cin.getline(persona1.nombre,20,'\n');
	cin>>persona1.edad;
	cout<<"introduzca el nombre2 ";
	cin>>persona2.nombre;
	cout<<"introduzca la edad2 ";
	cin>>persona2.edad;
	cout<<"PERSONA1"<<endl;
	cout<<persona1.nombre<<" "<<persona1.edad<<endl;
	cout<<"PERSONA2"<<endl;
	cout<<persona2.nombre<<" "<<persona2.edad;
	return 0;
}
