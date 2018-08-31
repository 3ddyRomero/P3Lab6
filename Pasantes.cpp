#include "Persona.h"
#include "Pasantes.h"
#include <iostream>

using namespace std;

Pasantes::Pasantes(){

}

Pasantes::Pasantes(string pIDPasante,int pDuracion):Persona(pNombre,pNumIdentidad,pEdad,pSexo,pNacionalidad){
	IDPasante = pIDPasante;
	Duracion = pDuracion;
	
	Nombre = pNombre;
	NumIdentidad = pNumIdentidad;
	Edad = pEdad;
	Sexo = pSexo;
	Nacionalidad = pNacionalidad;
}

string Pasantes::getIDPasante(){
	return IDPasante;
}

void Pasantes::setIDPasante(string pIDPasante){
	IDPasante = pIDPasante;
}


int Pasantes::getDuracion(){
	return Duracion;
}

void Pasantes::setDuracion(int pDuracion){
	Duracion = pDuracion;
}
