#ifndef __PERSONA_H
	#define __PERSONA_H
	#include <iostream>
	using namespace std;
	class Persona {
		private:
			string cedula;
			string nombre;
			string apellido;
			Direccion direccion;
		public:
			Persona();
			Persona(string,string,string);
			void setCalle(string);
			string getCalle();
			void setNumero(int);
			string GetNumero();
			void setCuidad(string);
			string getCuidad();
		
	};
	class Direccion {
		private:
			string calleAv;
			int numParcela;
			string nbCasaEdf;
			string cuidad;
		public:
			Direccion();
			Direccion();
			void set_Calle(string);
			string get_Calle();
			void set_Numero(string);
			string Get_Numero();
			void set_Cuidad(string);
			string get_Cuidad()
	};
#endif /* __PERSONA_H */
