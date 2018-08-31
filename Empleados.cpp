#include "Persona.h"
#include "Empleados.h"
#include <iostream>

using namespace std;

Empleados::Empleados(){

}

Empleados::Empleados(string pNombre, string pNumIdentidad, int pEdad, string pSexo, string pNacionalidad,int pNumEmpleado,double pSalario):Persona(pNombre,pNumIdentidad,pEdad,pSexo,pNacionalidad){
	NumEmpleado = pNumEmpleado;
	Salario = pSalario;

	Nombre = pNombre;
	NumIdentidad = pNumIdentidad;
	Edad = pEdad;
	Sexo = pSexo;
	Nacionalidad = pNacionalidad;
}

int Empleados::getNumEmpleado(){
	return NumEmpleado;
}

void Empleados::setNumEmpleado(int pNumEmpleado){
	NumEmpleado = pNumEmpleado;
}


double Empleados::getSalario(){
	return Salario;
}

void Empleados::setSalario(double pSalario){
	Salario = pSalario;
}