#include "Persona.h"
#include "Estudiante.h"
#include "Empleados.h"
#include "Pasantes.h"
#include "Empresa.h"
#include "MicroEmpresas.h"
#include "EmpresasMedianas.h"
#include "EmpresasGrandes.h"
#include <vector>

#include <iostream>
#include <string>

using namespace std;

int menu();
void llenarVectorMicroEmpresas(vector<MicroEmpresas*>& ,int );
void llenarVectorEstudiantes(vector<Estudiante*>& ,int );

void printVectorEstudiante(vector<Estudiante*>, string);
void printVectorEstudianteTodos(vector<Estudiante*>);

int main(){
char ejecucion = 'y';
int cMicro,cEstu;
string fil;
vector<MicroEmpresas*> miVectorMicroEmpresas;
vector<Estudiante*> miVectorEstudiante;



do{
        switch (menu()){
        case 1:{
        		cout<<"Ingrese la cantidad a Agregar: ";
        		cin>>cMicro;
            	llenarVectorMicroEmpresas(miVectorMicroEmpresas,cMicro);

            break;
        }
        case 2:{
        	cout<<"Ingrese la cantidad a Agregar: ";
        	cin>>cEstu;
        	llenarVectorEstudiantes(miVectorEstudiante,cEstu);
            
            break;
        }
        case 3:{
        	cout<<"Ingrese la carrera a filtrar: "<<endl;
        	cin>>fil;
        	printVectorEstudiante(miVectorEstudiante, fil);

                        
            break;
        }
        case 4:{
            printVectorEstudianteTodos(miVectorEstudiante);



        	break;
        }
        case 5:{
            printVectorEstudianteTodos(miVectorEstudiante);

            

        	break;
        }
        case 6:{

            break;
        }
        case 7:{

           

            break;
        }
        case 8:{

            
            break;
        }
        case 9:{
            

            break;
        }
        case 10:{

            
            break;
        }
        case 11:{
        	ejecucion = 'n';
            cout<< "La ejecución ha finalizado " << endl;
            cout<< "****\\\\Buen dia//****" << endl;            
            break;
        }
        } //end switch
    } while (ejecucion != 'n');


    return 0;
}

int menu(){
    int opcion=0;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Bienvenido al Laboratorio 6 de Programación III."<<endl;
    cout << "/****Menu****\\" << endl;
    cout << "1. Crear Micro Empresas." << endl;
    cout << "2. Crear Estudiantes." << endl;
    cout << "3. Filtrar Estudiantes." << endl;
    cout << "4. Agregar a Empleados." << endl;
    cout << "5. Agregar a Pasantes." << endl;
    cout << "6. Agregar Proveedores." << endl;
    cout << "7. Eliminar Empleado." << endl;
    cout << "8. Eliminar Pasante." << endl;
    cout << "9. Imprimir Inforamcion de Empresas." << endl;
    cout << "10. Imprimir Historial de Eliminados." << endl;
    cout << "11. Salir." << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    cout<<"------------------------------------------------"<<endl;
    return opcion;
}

void llenarVectorMicroEmpresas(vector<MicroEmpresas*>& pVectorMicroEmpresas,int cantidadMicro){
        MicroEmpresas* microempresas;
        string dueno;
        
        for(int i = 0;i<cantidadMicro;i++){
                microempresas = new MicroEmpresas();
                cout<<"Ingrese el Nombre del Dueño de la Empresa: ";
                cin>>dueno;

                        microempresas->setDueno(dueno);

                pVectorMicroEmpresas.push_back(microempresas);
        }
}

void llenarVectorEstudiantes(vector<Estudiante*>& pVectorEstudiante,int cantidadEstudiante){
        Estudiante* estudiante;
        string nombre,numID;
		int edad;
		string sexo,nacionalidad;

		string carrera,universidad,numCuenta;
		double indice;
        
        for(int i = 0;i<cantidadEstudiante;i++){
                estudiante = new Estudiante();
                cout<<"Ingrese el Nombre del Estudiante: ";
                cin>>nombre;
                cout<<"Ingrese el Numero de ID del Estudiante: ";
                cin>>numID;
                cout<<"Ingrese la Edad del Estudiante: ";
                cin>>edad;
                cout<<"Ingrese el Sexo del Estudiante: ";
                cin>>sexo;
                cout<<"Ingrese la Nacionalidad del Estudiante: ";
                cin>>nacionalidad;

                cout<<"Ingrese la Carrera del Estudiante: ";
                cin>>carrera;
                cout<<"Ingrese la Universidad del Estudiante: ";
                cin>>universidad;
                cout<<"Ingrese el Numero de cuenta del Estudiante: ";
                cin>>numCuenta;
                cout<<"Ingrese el Indice del Estudiante: ";
                cin>>indice;

                        estudiante->setNombre(nombre);
                        estudiante->setNumIdentidad(numID);
                        estudiante->setEdad(edad);
                        estudiante->setSexo(sexo);
                        estudiante->setNacionalidad(nacionalidad);

                        estudiante->setCarrera(carrera);
                        estudiante->setUniversidad(universidad);
                        estudiante->setNumCuenta(numCuenta);
                        estudiante->setIndice(indice);

                pVectorEstudiante.push_back(estudiante);
        }
}

void llenarVectorEmpleado(vector<Empleados*>& pVectorEmpleados,int cantidadEmpleados){
        Empleados* empleado;
        string nombre,numID;
		int edad;
		string sexo,nacionalidad;

		int numIDEmpleado;
        double salario;
        
        for(int i = 0;i<cantidadEmpleados;i++){
                empleado = new Empleados();
                cout<<"Ingrese el Nombre del Estudiante: ";
                cin>>nombre;
                cout<<"Ingrese el Numero de ID del Estudiante: ";
                cin>>numID;
                cout<<"Ingrese la Edad del Estudiante: ";
                cin>>edad;
                cout<<"Ingrese el Sexo del Estudiante: ";
                cin>>sexo;
                cout<<"Ingrese la Nacionalidad del Estudiante: ";
                cin>>nacionalidad;

                cout<<"Ingrese el Numero identificador del Empleado: ";
                cin>>numIDEmpleado;
                cout<<"Ingrese el Salario del Empleado: ";
                cin>>salario;

                        empleado->setNombre(nombre);
                        empleado->setNumIdentidad(numID);
                        empleado->setEdad(edad);
                        empleado->setSexo(sexo);
                        empleado->setNacionalidad(nacionalidad);

                        empleado->setNumEmpleado(numIDEmpleado);
                        empleado->setSalario(salario);

                pVectorEmpleados.push_back(empleado);
        }
}

void printVectorEstudiante(vector<Estudiante*> pVectorEstudiante,string filtrar){
        cout<<endl<<"*****Reclutas Estudiantes"<<" de "<<filtrar<<"*****"<<endl;

        for(int i=0;i<pVectorEstudiante.size();i++){
        	if(pVectorEstudiante[i]->getCarrera() == filtrar){
                cout<<"Datos Personales: "<<endl
                    <<"Nombre: "<<pVectorEstudiante[i]->getNombre()<<endl
                    <<"Identidad: "<<pVectorEstudiante[i]->getNumIdentidad()<<endl
                    <<"Edad: "<<pVectorEstudiante[i]->getEdad()<<endl
                    <<"Sexo: "<<pVectorEstudiante[i]->getSexo()<<endl
                    <<"Nacionalidad "<<pVectorEstudiante[i]->getNacionalidad()<<endl
                    <<"Datos De Estudiante: "<<endl
                    <<"Carrera: "<<pVectorEstudiante[i]->getCarrera()<<endl
                    <<"Universidad: "<<pVectorEstudiante[i]->getUniversidad()<<endl
                    <<"Numero de cuenta: "<<pVectorEstudiante[i]->getNumCuenta()<<endl
                    <<"Indice: "<<pVectorEstudiante[i]->getIndice()<<endl;
        	}
        }
}

void printVectorEstudianteTodos(vector<Estudiante*> pVectorEstudiante){
        cout<<endl<<"*****Reclutas Estudiantes (Todos)*****"<<endl;

        for(int i=0;i<pVectorEstudiante.size();i++){
        	
                cout<<"Datos Personales: "<<endl
                    <<"Nombre: "<<pVectorEstudiante[i]->getNombre()<<endl
                    <<"Identidad: "<<pVectorEstudiante[i]->getNumIdentidad()<<endl
                    <<"Edad: "<<pVectorEstudiante[i]->getEdad()<<endl
                    <<"Sexo: "<<pVectorEstudiante[i]->getSexo()<<endl
                    <<"Nacionalidad "<<pVectorEstudiante[i]->getNacionalidad()<<endl
                    <<"Datos De Estudiante: "<<endl
                    <<"Carrera: "<<pVectorEstudiante[i]->getCarrera()<<endl
                    <<"Universidad: "<<pVectorEstudiante[i]->getUniversidad()<<endl
                    <<"Numero de cuenta: "<<pVectorEstudiante[i]->getNumCuenta()<<endl
                    <<"Indice: "<<pVectorEstudiante[i]->getIndice()<<endl;
        	
        }
}

