#ifndef EMPRESASMEDIANAS_H
#define EMPRESASMEDIANAS_H

#include "Empresa.h"
#include <string>
using namespace std;

class EmpresasMedianas : public Empresa{
	private:
		double Ingresos, Egresos;
		int NumDptos;
		string RTN;
	public:
		EmpresasMedianas();
		EmpresasMedianas(double, double,int,string);

		double getIngresos();
		void setIngresos(double);

		double getEgresos();
		void setEgresos(double);

		int getNumDptos();
		void setNumDptos(int);

		string getRTN();
		void setRTN(string);
};
#endif