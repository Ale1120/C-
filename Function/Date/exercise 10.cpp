/*Ejercicio 10: Escriba una funci�n nombrada calc_a�os() que tenga un par�metro entero que represente el n�mero total de d�as desde la fecha 1/1/2000
 y par�metros de referencia nombrados a�o, mes y d�a. La funci�n es calcular el a�o, mes y d�a actual para el n�mero dado de d�as que se le transmitan. 
Usando las referencias, la funci�n deber� alterar en forma directa los argumentos respectivos en la funci�n que llama. 
Para este problema suponga que cada a�o tiene 365 d�as y cada mes tiene 30 d�as.*/
#include <iostream>
using namespace std;
void calcular(int, int&,int&,int&);
int main(){
	int total,ano,mes,dia;
	cout<<"introdusca los dias transcurridos ";
	cin>>total;
	calcular(total,ano,mes,dia);
	cout<<"el tiempo transcurrido "<<dia<<"/"<<mes<<"/"<<ano;
	ano+=2000;
	mes+=1;
	dia+=1;
	cout<<"la fecha es "<<dia<<"/"<<mes<<"/"<<ano;
	return 0;
}
void calcular(int total, int& ano,int& mes,int& dia){
	ano=total/365; total%=365;
	mes=total/30; total%=30;
	dia=total;
	
}
	
