#include <iostream>
#include<string.h>
char a[100][100];
int i,l,j,z;
using namespace std;
int main() {
	for(i=0;i<5;i++)
{
	cout<<"introdusca la cadena de la posicion("<<i<<")=? ";
	cin>>a[i];
}
for(i=0;i<5;i++)
{
	for(j=0; j<=0; j++){
	z=a[i][j];
	if((z>=48) && (z<=57)){
		cout<<"es un numero"<<endl;
	}
	else{
		cout<<"no es un numero"<<endl;
	}
}
}
return 0;
}

