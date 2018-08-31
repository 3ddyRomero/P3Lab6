#include "Empresa.h"
#include "EmpresasMedianas.h"
#include <iostream>

using namespace std;

EmpresasMedianas::EmpresasMedianas(){

}

EmpresasMedianas::EmpresasMedianas(double pIngresos,double pEgresos,int pNumDptos,string pRTN):Empresa(pNombreEmpresa,pFechaCreacion,pRubro,pPermisoOperacion){
	Ingresos = pIngresos;
	Egresos = pEgresos;
	NumDptos = pNumDptos;
	RTN = pRTN;
	
	NombreEmpresa = pNombreEmpresa;
	FechaCreacion = pFechaCreacion;
	Rubro = pRubro;
	PermisoOperacion = pPermisoOperacion;
}

double EmpresasMedianas::getIngresos(){
	return Ingresos;
}

void EmpresasMedianas::setIngresos(double pIngresos){
	Ingresos = pIngresos;
}

double EmpresasMedianas::getEgresos(){
	return Egresos;
}

void EmpresasMedianas::setEgresos(double pEgresos){
	Egresos = pEgresos;
}

int EmpresasMedianas::getNumDptos(){
	return NumDptos;
}

void EmpresasMedianas::setNumDptos(int pNumDptos){
	NumDptos = pNumDptos;
}

string EmpresasMedianas::getRTN(){
	return RTN;
}

void EmpresasMedianas::setRTN(string pRTN){
	RTN = pRTN;
}