//valor absoluto 
#include <iostream>
//prototipo de la funcion
float n1;
template <class plantilla>
void Absoluto(plantilla numero);
using namespace std;
int main(){
	cout<<"introdusca el numero ";
	cin>>n1;
	Absoluto(n1);
	return 0;
}

template <class plantilla>
void Absoluto(plantilla numero){
	if(numero<0)
	{
		numero = numero *(-1);
	}
	else{
		numero = numero;
	}
	cout<<"el valor absoluto es "<<numero;
}
