//devolver valores multiples

#include<iostream>
void calcular(int,int, int&, int&);
using namespace std;
int main(){
	int n1=1,n2=2,s=0,m=0;
	//cout<<"introdusca 2 numeros ";
	//cin>>n1>>n2;
	calcular(n1,n2,s, m);
	cout<<"suma "<<s<<endl<<"producto "<<m;
	return 0;
}

void calcular(int n1, int n2,int& s,int& m){
	s= n1+n2;
	m= n1*n2;
}
