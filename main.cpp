#include "Persona.h"
#include "Estudiante.h"
#include "Empleados.h"
#include "Pasantes.h"
#include "Empresa.h"
#include "MicroEmpresas.h"
#include "EmpresasMedianas.h"
#include "EmpresasGrandes.h"

#include <iostream>
#include <string>

using namespace std;

int menu();

int main(){
char ejecucion = 'y';

do{
        switch (menu()){
        case 1:{
            

            break;
        }
        case 2:{

            
            break;
        }
        case 3:{

                        
            break;
        }
        case 4:{

        	break;
        }
        case 5:{

            

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
    cout << "1. Crear Micropempresas." << endl;
    cout << "2. Crear Estudiantes." << endl;
    cout << "3. Filtrar Estudiantes." << endl;
    cout << "4. Agregar Empleado." << endl;
    cout << "5. Agregar Pasante." << endl;
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
