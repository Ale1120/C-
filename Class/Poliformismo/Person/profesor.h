#include "persona.h"

	class Profesor : public Persona {
		private:
			string materia;
		public:
			Profesor();
			Profesor(string,int,string);
			void mostrar();
		
	};
