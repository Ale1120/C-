/*Ejercicio 10: Escriba una función nombrada calc_años() que tenga un parámetro entero que represente el número total de días desde la fecha 1/1/2000
 y parámetros de referencia nombrados año, mes y día. La función es calcular el año, mes y día actual para el número dado de días que se le transmitan. 
Usando las referencias, la función deberá alterar en forma directa los argumentos respectivos en la función que llama. 
Para este problema suponga que cada año tiene 365 días y cada mes tiene 30 días.*/
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
	
