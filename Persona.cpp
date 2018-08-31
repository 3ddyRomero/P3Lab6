#include "Persona.h"
#include <iostream>

using namespace std;

Persona::Persona(){

}
Persona::Persona(string pNombre, string pNumIdentidad, int pEdad, string pSexo, string pNacionalidad){
	Nombre=pNombre;
	NumIdentidad = pNumIdentidad;
	Edad = pEdad;
	Sexo = pSexo;
	Nacionalidad = pNacionalidad;
}

string Persona::getNombre(){
	return Nombre;
}

void Persona::setNombre(string pNombre){
	Nombre = pNombre;
}

string Persona::getNumIdentidad(){
	return NumIdentidad;
}

void Persona::setNumIdentidad(string pNumIdentidad){
	NumIdentidad = pNumIdentidad;
}

int Persona::getEdad(){
	return Edad;
}

void Persona::setEdad(int pEdad){
	Edad = pEdad;
}

string Persona::getSexo(){
	return Sexo;
}

void Persona::setSexo(string pSexo){
	Sexo = pSexo;
}

string Persona::getNacionalidad(){
	return Nacionalidad;
}

void Persona::setNacionalidad(string pNacionalidad){
	Nacionalidad = pNacionalidad;
}

Persona::~Persona(){

}