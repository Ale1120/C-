#include <iostream>
using namespace std;
int i;
void cuadrado(int vector[],int );
void mostrar(int vector[],int );
int main(){
	
	const int n=5;
	int vector[n];
	for(i=0;i<n;i++)
	{
		cout<<"introdusca el valor ";
		cin>>vector[i];
	}
	cuadrado(vector,n);
	mostrar(vector,n);
	
return 0;
}

void cuadrado(int vector[],int n){
	for(i=0;i<n;i++){
		vector[i]*=vector[i];
	}
}
void mostrar(int vector[],int n){
	for(i=0;i<n;i++){
	cout<<vector[i]<<" ";
}
	}

