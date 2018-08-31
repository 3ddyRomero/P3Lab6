#include "Empresa.h"
#include "EmpresasGrandes.h"
#include <iostream>

using namespace std;

EmpresasGrandes::EmpresasGrandes(){

}

EmpresasGrandes::EmpresasGrandes(string pDuenoG,double pIngresosG,double pEgresosG,int pNumDptosG,string pRTNG,string pVicepresidente, string pProveedor):Empresa(pNombreEmpresa,pFechaCreacion,pRubro,pPermisoOperacion){
	DuenoG = pDuenoG;
	IngresosG = pIngresosG;
	EgresosG = pEgresosG;
	NumDptosG = pNumDptosG;
	RTNG = pRTNG;
	Vicepresidente = pVicepresidente;
	Proveedor = pProveedor; 
	
	NombreEmpresa = pNombreEmpresa;
	FechaCreacion = pFechaCreacion;
	Rubro = pRubro;
	PermisoOperacion = pPermisoOperacion;
}

string EmpresasGrandes::getDuenoG(){
	return Dueno;
}

void EmpresasGrandes::setDuenoG(string pDuenoG){
	DuenoG = pDuenoG;
}

double EmpresasGrandes::getIngresosG(){
	return IngresosG;
}

void EmpresasGrandes::setIngresosG(double pIngresosG){
	IngresosG = pIngresosG;
}

double EmpresasGrandes::getEgresosG(){
	return EgresosG;
}

void EmpresasGrandes::setEgresosG(double pEgresosG){
	EgresosG = pEgresosG;
}

int EmpresasGrandes::getNumDptosG(){
	return NumDptosG;
}

void EmpresasGrandes::setNumDptosG(int pNumDptosG){
	NumDptosG = pNumDptosG;
}

string EmpresasGrandes::getRTNG(){
	return RTNG;
}

void EmpresasGrandes::setRTNG(string pRTNG){
	RTNG = pRTNG;
}

string EmpresasGrandes::getVicepresidente(){
	return Vicepresidente;
}

void EmpresasGrandes::setVicepresidente(string pVicepresidente){
	Vicepresidente = pVicepresidente;
}