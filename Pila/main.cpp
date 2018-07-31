#include "pila.h"

using namespace std;

int main()
{
	TElementoPila Letra; 	//declara una variable de tipo char (el tipo de dato TElementoPila esta definido en el archivo pila.h)
	TPila P;		//declara una variable P de tipo TPila
	P.Crear();		// crea la pila para almacenar los caracteres de la frase

	cout<<"Introduzca una frase, y para terminar: "<<endl;
	cin>>Letra;
	while (Letra != 'y')
	{
		P.Apilar(Letra);
		cin>>Letra;
	
	} //fin del while

	cout<<"La frase escrita en modo inverso es: "<<endl;

	while (!P.Vacia())
	{
		cout<<P.Desapilar()<<" ";
	}

	cout<<endl;
	
	system("pause");
	return 0;
}
