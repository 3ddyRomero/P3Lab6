#ifndef PASANTES_H
#define PASANTES_H

#include "Persona.h"
#include <string>
using namespace std;

class Pasantes : public Persona{
	private:
		string IDPasante;
		int Duracion;
	public:
		Pasantes();
		Pasantes(string,int);

		string getIDPasante();
		void setIDPasante(string);

		int getDuracion();
		void setDuracion(int);

};
#endif