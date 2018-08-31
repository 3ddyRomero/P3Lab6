#ifndef MICROEMPRESAS_H
#define MICROEMPRESAS_H

#include "Empresa.h"
#include <string>
using namespace std;

class MicroEmpresas : public Empresa{
	private:
		string Dueno;
	public:
		MicroEmpresas();
		MicroEmpresas(string);

		string getDueno();
		void setDueno(string);
};
#endif