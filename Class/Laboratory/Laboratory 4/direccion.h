#ifndef __DIRECCION_H
	#define __DIRECCION_H
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
			void setNbCiudad(string);
			string getNbCiudad();
	};
	
#endif /*__DIRECCION_H */
