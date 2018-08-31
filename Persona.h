#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;


class Persona{
	private:
		string Nombre,NumIdentidad;
		int Edad;
		string Sexo,Nacionalidad;
	public:
		Persona();
		Persona(string,string,int,string,string);

		string getNombre();
		void setNombre(string);

		string getNumIdentidad();
		void setNumIdentidad(string);

		int getEdad();
		void setEdad(int);

		string getSexo();
		void setSexo(string);

		string getNacionalidad();
		void setNacionalidad(string);

		~Persona();
	
};
#endif