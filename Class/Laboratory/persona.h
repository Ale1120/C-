#ifndef __PERSONA_H
	#define __PERSONA_H
	#include <iostream>
	using namespace std;
		
	//Clase Direcicon
	class Direccion 
	{
		//Atributos
		private:
			string calleAvenida;
			int numParcela;
			string nbCasaEdf;
			int piso;
			int apartamento;
			string urbanizacion;
			string cuidad;
			
		//Métodos
		public:
			Direccion();
			Direccion(string,int);
			void setCalle(string);
			string getCalle();
			void setNumero(int);
			int getNumero();
			void setCasa(string);
			string getCasa();
			void setPiso(int);
			int getPiso();
			void setApartamento(int);
			int getApartamento();
			void setNbUrbanizacion(string);
			string getNbUrbanizacion();
			void setNbCiudad(string _cuidad);
			string getNbCiudad();
	};
	
	//clase Persona
	class Persona
	{
		//Atributos
		private:
			string cedula;
			string nombre;
			string apellido;
			Direccion direccion;
			
		//Métodos
		public:
			Persona();
			Persona(string,string,string);
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
	
	
#endif /*__PERSONA_H */

