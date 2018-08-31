#ifndef PASANTES_H
#define PASANTES_H

#include "Persona.h"
#include <string>
using namespace std;

class Pasantes : public Persona{
	protected:
		string IDPasante;
		int Duracion;
	public:
		Pasantes();
		Pasantes(string,string,int,string,string,string,int);

		string getIDPasante();
		void setIDPasante(string);

		int getDuracion();
		void setDuracion(int);

};
#endif