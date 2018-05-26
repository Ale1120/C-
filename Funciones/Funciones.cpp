#include <iostream>
#include <conio.h>
using namespace std;
int n1,n2;
int mayor(int z, int y);
int main() {
	cout<<"introdusca 2 numeros ";
	cin>>n1>>n2;
	cout<<"el numero mayor es "<<mayor(n1,n2);//porner los misma variable que pusimos que estan en el cin!!
return 0;
}

int mayor(int z, int y){
	int a;
	if (z>y)
	{
		a=z;
	}
	else
	{
		a=y;
	}
	return a;
}
