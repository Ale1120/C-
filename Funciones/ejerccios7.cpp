//Ejercicio 7: Intercambiar el valor de 2 variables utilizando paso de parámetros por referencia
#include<iostream>
using namespace std;
void intercambiar(int&,int&);
int main (){
	int n1=11,n2=17;
	cout<<"los valores son "<<n1<<" "<<n2<<endl;
	intercambiar(n1,n2);
	cout<<"los nuevos valores son "<<n1<<" "<<n2;
	return 0;
}

void intercambiar(int& n1,int& n2){
	int inter;
	inter=n1;
	n1=n2;
	n2=inter;
}
