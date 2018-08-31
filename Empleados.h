#ifndef EMPLEADOS_H
#define EMPLEADOS_H

#include "Persona.h"
#include <string>
using namespace std;

class Empleados : public Persona{
	protected:
		int NumEmpleado;
		double Salario;
	public:
		Empleados();
		Empleados(string,string,int,string,string,int, double);

		int getNumEmpleado();
		void setNumEmpleado(int);

		double getSalario();
		void setSalario(double);

};
#endif