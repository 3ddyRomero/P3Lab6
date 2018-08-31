#ifndef EMPRESASGRANDES_H
#define EMPRESASGRANDES_H

#include "Empresa.h"
#include <string>
using namespace std;

class EmpresasGrandes : public Empresa{
	protected:
		string DuenoG;
		double IngresosG, EgresosG;
		int NumDptosG;
		string RTNG;
		string Vicepresidente, Proveedor;
	public:
		EmpresasGrandes();
		EmpresasGrandes(string,string,string,string,string,double, double,int,string,string,string);

		string getDuenoG();
		void setDuenoG(string);

		double getIngresosG();
		void setIngresosG(double);

		double getEgresosG();
		void setEgresosG(double);

		int getNumDptosG();
		void setNumDptosG(int);

		string getRTNG();
		void setRTNG(string);

		string getVicepresidente();
		void setVicepresidente(string);

		string getProveedor();
		void setProveedor(string);
};
#endif