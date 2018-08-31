#include "Persona.h"
#include "Empleado.h"
#include <iostream>

using namespace std;

Empleados::Empleados(){

}

Empleados::Empleados(int pNumEmpleado,double pSalario):Persona(pNombre,pNumIdentidad,pEdad,pSexo,pNacionalidad){
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

void Empleados::setNumEmpleado(int pIndice){
	NumEmpleado = pNumEmpleado;
}


double Empleados::getSalario(){
	return Salario;
}

void Empleados::setSalario(double pSalario){
	Salario = pSalario;
}