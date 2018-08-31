#include "Persona.h"
#include "Estudiante.h"
#include <iostream>

using namespace std;
Estudiante::Estudiante(){

}

Estudiante::Estudiante(string pNombre, string pNumIdentidad, int pEdad, string pSexo, string pNacionalidad,string pCarrera,string pUniversidad,string pNumCuenta, double pIndice):Persona(pNombre,pNumIdentidad,pEdad,pSexo,pNacionalidad){
	Carrera = pCarrera;
	Universidad = pUniversidad;
	NumCuenta = pNumCuenta;
	Indice = pIndice;

	Nombre = pNombre;
	NumIdentidad = pNumIdentidad;
	Edad = pEdad;
	Sexo = pSexo;
	Nacionalidad = pNacionalidad;
}

string Estudiante::getCarrera(){
	return Carrera;
}

void Estudiante::setCarrera(string pCarrera){
	Carrera = pCarrera;
}

string Estudiante::getUniversidad(){
	return Universidad;
}

void Estudiante::setUniversidad(string pUniversidad){
	Universidad = pUniversidad;
}

string Estudiante::getNumCuenta(){
	return NumCuenta;
}

void Estudiante::setNumCuenta(string pNumCuenta){
	NumCuenta = pNumCuenta;
}

double Estudiante::getIndice(){
	return Indice;
}

void Estudiante::setIndice(double pIndice){
	Indice = pIndice;
}

