/*Ejercicio 6: Escriba una plantilla de función llamada maximo() que devuelva el valor máximo de tres argumentos que se transmitan
 a la función cuando sea llamada. Suponga que los tres argumentos serán del mismo tipo de datos*/
#include<iostream>
template <class Plantilla>
void maximo(Plantilla dato1, Plantilla dato2, Plantilla dato3);
double valor1,valor2,valor3;
using namespace std;
int main (){
	cout<<"indrousca el 3 valores ";
	cin>>valor1>>valor2>>valor3;
	maximo(valor1, valor2, valor3);
return 0;
}


template <class Plantilla>
void maximo(Plantilla dato1, Plantilla dato2, Plantilla dato3){
		if((dato1>=dato2) && (dato1>=dato3))
		{
			cout<<"el mayor es "<<dato1;
		}
		else {
			if( (dato2>= dato1) && (dato2>=dato3)){
				cout<<"el mayor es "<<dato2;
			}
			else{
				cout<<"el mayor es "<<dato3;
			}
		}
}
