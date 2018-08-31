exe:	main.o Empresa.o MicroEmpresas.o EmpresasMedianas.o EmpresasGrandes.o Persona.o Estudiante.o Empleados.o Pasantes.o
	g++ main.o Empresa.o MicroEmpresas.o EmpresasMedianas.o EmpresasGrandes.o Persona.o Estudiante.o Empleados.o Pasantes.o -o exe
	rm *.o
main.o:	main.cpp Empresa.h MicroEmpresas.h EmpresasMedianas.h EmpresasGrandes.h Persona.h Estudiante.h Empleados.h Pasantes.h
	g++ -c main.cpp
Empresa.o:	Empresa.cpp Empresa.h
	g++ -c Empresa.cpp
MicroEmpresas.o:	Empresa.h MicroEmpresas.cpp MicroEmpresas.h
	g++ -c MicroEmpresas.cpp
EmpresasMedianas.o:	Empresa.h EmpresasMedianas.cpp EmpresasMedianas.h
	g++ -c EmpresasMedianas.cpp
EmpresasGrandes.o:	Empresa.h EmpresasGrandes.cpp EmpresasGrandes.h
	g++ -c EmpresasGrandes.cpp
Persona.o:	Persona.cpp Persona.h
	g++ -c Persona.cpp
Estudiante.o:	Persona.h Estudiante.cpp Estudiante.h
	g++ -c Estudiante.cpp
Empleados.o:	Persona.h Empleados.cpp Empleados.cpp
	g++ -c Empleados.cpp
Pasantes.o:	Persona.h Pasantes.cpp Pasantes.h
	g++ -c Pasantes.cpp