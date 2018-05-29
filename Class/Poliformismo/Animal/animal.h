#ifndef __PERSONA_H
	#define __PERSONA_H
	#include <iostream>
	using namespace std;
	class Animal {
		private:
			string nombre;
			int edad;
		public:
			Animal();
			Animal(string,int);
			virtual void comer();//polimorfismo
		
	};
#endif
