#ifndef __PERRO_H
	#define __PERRO_H
	#include <iostream>
	using namespace std;
	class Perro {
		private:
			string nombre,raza;
		public:
			Perro();
			Perro(string,string);
			~Perro();//destructor
			void mostrar();
		
	};
#endif /* __FECHA_H */
