#include <iostream>
#include "operaciones.h"

using namespace std;

int num1, num2;
char elnombre[21];

int main()
{
	cout<<"Introduzca dos numeros a sumar:"<<endl;
	cin>>num1;
	cin>>num2;
	cout<<"El resultado de la suma de "<<num1<<" y "<<num2<<" es: "<<suma(num1,num2)<<endl;
	cout<<endl;

	cout<<"Ahora introduzca dos numeros a multiplicar:"<<endl;
	cin>>num1;
	cin>>num2;
	cout<<"El resultado del producto de "<<num1<<" y "<<num2<<" es: "<<multiplica(num1,num2)<<endl;
	cout<<endl;

	cout<<"Escriba su nombre: ";
	cin>>elnombre;
	saluda(elnombre);
	cout<<endl;

	system("pause");
	return 0;
}

