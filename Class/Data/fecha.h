#ifndef __fECHA_H
	#define __FECHA_H
	#include <iostream>
	using namespace std;
	class Fecha {
		private:
			int dia, mes, ano;
		public:
			Fecha();
			Fecha(int, int, int);
			Fecha(long);
			void mostrar();
		
	};
#endif /* __FECHA_H */
