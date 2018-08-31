#include "Empresa.h"
#include <iostream>

using namespace std;

Empresa::Empresa(){

}
Empresa::Empresa(string pNombreEmpresa, string pFechaCreacion, string pRubro, string pPermisoOperacion){
	NombreEmpresa=pNombreEmpresa;
	FechaCreacion = pFechaCreacion;
	Rubro = pRubro;
	PermisoOperacion = pPermisoOperacion;
}

string Empresa::getNombreEmpresa(){
	return NombreEmpresa;
}

void Empresa::setNombreEmpresa(string pNombreEmpresa){
	NombreEmpresa = pNombreEmpresa;
}

string Empresa::getFechaCreacion(){
	return FechaCreacion;
}

void Empresa::setFechaCreacion(string pFechaCreacion){
	FechaCreacion = pFechaCreacion;
}

string Empresa::getRubro(){
	return Rubro;
}

void Empresa::setRubro(string pRubro){
	Rubro = pRubro;
}

string Empresa::getPermisoOperacion(){
	return PermisoOperacion;
}

void Empresa::setPermisoOperacion(string pPermisoOperacion){
	PermisoOperacion = pPermisoOperacion;
}

Empresa::~Empresa(){

}