#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>

using namespace std;


class Empresa{
	protected:
		string NombreEmpresa,FechaCreacion,Rubro,PermisoOperacion;
	public:
		Empresa();
		Empresa(string,string,string,string);

		string getNombreEmpresa();
		void setNombreEmpresa(string);

		string getFechaCreacion();
		void setFechaCreacion(string);

		string getRubro();
		void setRubro(string);

		string getPermisoOperacion();
		void setPermisoOperacion(string);

		~Empresa();
	
};
#endif