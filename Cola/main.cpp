#include "cola.h"
int main(){
	TElementoCola entero; 	//declara una variable de tipo char (el tipo de dato TElementoPila esta definido en el archivo pila.h)
	TCola C;		//declara una variable P de tipo TPila
	C.Crear();
	cout<<C.Cuantos()<<endl;
		C.Insertar(5);
		C.Insertar(3);
	cout<<C.Cuantos()<<endl;
	cout<<"hola"<<endl;
		while (!C.Vacia())
	{
		cout<<C.Extraer()<<" ";
	}
	cout<<endl;
	cout<<C.Cuantos();
	
	system("pause");
	return 0;
}
