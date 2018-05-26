#ifndef __RECTANGULO_H
	#define __RECTANGULO_H
	#include <iostream>
	using namespace std;
	class Rectangulo {
		private:
			double largo;
			double ancho;
		public:
			Rectangulo();
			Rectangulo(double, double);
			double perimetro();
			double area();
		
	};
#endif /* __RECTANGULO_H */
