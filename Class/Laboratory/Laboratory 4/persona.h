#include "direccion.h"
	//clase Persona
	class Persona
	{
		//Atributos
		private:
			string cedula;
			string nombre;
			string apellido;
			Direccion direccion;

		//M�todos
		public:
			Persona();
			Persona(string,string,string);
			string getCedula();
			string getNombre();
			string getApellido();
			void setCalleAvenida(string);
			string getCalleAvenida();
			void setNumbParcela(int);
			int getNumbParcela();
			void setNombreCasaEdf(string);
			string getNombreCasaEdf();
			void setPiso(int);
			int getPiso();
			void setNumApto(int);
			int getNumApto();
			void setUrbanizacion(string);
			string getUrbanizacion();
			void setCiudad(string);
			string getCiudad();
	};
