/*Ejercicio 8: Escriba una función nombrada cambio() que tenga un parámetro en número entero y 
seis parámetros de referencia en número entero nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente. 
La función tiene que considerar el valor entero transmitido como una cantidad en dólares y convertir el valor en el número menor de billetes equivalentes.*/
#include<iostream>
using namespace std;
	
void cambio(int,int&,int&,int&,int&,int&,int&);
int main(){
int valor,cien=100,cincuenta=50,veinte=20,diez=10,cinco=5,uno=1;
cout<<"ingresa la cantidad ";
cin>>valor;
cambio(valor,cien,cincuenta,veinte,diez,cinco,uno);
cout<<"el cambio de "<<valor<<" en billetes de 100 son "<< cien<<endl;
cout<<"el cambio de "<<valor<<" en billetes de 50 son "<< cincuenta<<endl;
cout<<"el cambio de "<<valor<<" en billetes de 20 son "<< veinte<<endl;
cout<<"el cambio de "<<valor<<" en billetes de 10 son "<< diez<<endl;
cout<<"el cambio de "<<valor<<" en billetes de 5 son "<< cinco<<endl;
cout<<"el cambio de "<<valor<<" en billetes de 1 son "<< uno<<endl;


	
}

void cambio(int valor,int& cien ,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
	cien =valor/cien;valor=valor-(cien*100);
	cincuenta=valor/cincuenta;valor=valor-(cincuenta*50);
	veinte=valor/veinte;valor=valor-(veinte*20);
	diez=valor/diez;valor=valor-(diez*10);
	cinco=valor/cinco;valor=valor-(cinco*5);
	uno=valor/uno;valor=valor-(uno*1);
	
}
