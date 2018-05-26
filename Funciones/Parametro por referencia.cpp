//Paso de parametros por referencia
//esto sirve para poder cambiar el valor de las variables
//&para saber la direccion de la variable

#include<iostream>
using namespace std;
void nuevo(int&,int&);
int main (){
	int n1,n2;
	cout<<"introdusca 2 numeros ";
	cin>>n1>>n2;
 	nuevo(n1, n2);
 	cout<<"nuevos valores "<<n1<<" "<<n2;
	return 0;
}

void nuevo(int& x, int& y){
	cout<<"el primero es "<<x<<endl;
	cout<<"el segundo "<<y<<endl ;
	x=40;
	y=11;
	
}
