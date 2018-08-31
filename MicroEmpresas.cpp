#include "Empresa.h"
#include "MicroEmpresas.h"
#include <iostream>

using namespace std;

MicroEmpresas::MicroEmpresas(){

}

MicroEmpresas::MicroEmpresas(string pDueno):Empresa(pNombreEmpresa,pFechaCreacion,pRubro,pPermisoOperacion){
	Dueno = pDueno;
	
	NombreEmpresa = pNombreEmpresa;
	FechaCreacion = pFechaCreacion;
	Rubro = pRubro;
	PermisoOperacion = pPermisoOperacion;
}

string MicroEmpresas::getDueno(){
	return Dueno;
}

void MicroEmpresas::setDueno(string pDueno){
	Dueno = pDueno;
}