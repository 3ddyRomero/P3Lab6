#ifndef MICROEMPRESAS_H
#define MICROEMPRESAS_H

#include "Empresa.h"
#include <string>
using namespace std;

class MicroEmpresas : public Empresa{
	protected:
		string Dueno;
	public:
		MicroEmpresas();
		MicroEmpresas(string,string,string,string,string);

		string getDueno();
		void setDueno(string);
};
#endif