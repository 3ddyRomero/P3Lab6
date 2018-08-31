#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"
#include <string>
using namespace std;

class Estudiante : public Persona{
	private:
		string Carrera,Universidad,NumCuenta;
		double Indice;
	public:
		Estudiante();
		Estudiante(string,string,int,string,string,string,string,string,double);

		string getCarrera();
		void setCarrera(string);

		string getUniversidad();
		void setUniversidad(string);

		string getNumCuenta();
		void setNumCuenta(string);

		double getIndice();
		void setIndice(double);

		//~Estudiante();
	
};
#endif