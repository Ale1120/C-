#include "humano.h"
#include "perro.h"


int main() {
Animal *vector[4];
 vector[0]=new Humano("Alejandro",23,"Venezolano");
 vector[1]=new Perro("Gala",2,"PITBULL");
 vector[2]=new Humano("Anthony",23,"Venezolano");
 vector[3]=new Perro("AQISHA",3,"PEQUENEZ");
 
 vector[0]->comer();
 cout<<endl;
 vector[1]->comer();
 cout<<endl;
 vector[2]->comer();
 cout<<endl;
 vector[3]->comer();
 
 return 0;

}
