#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include <string>

using namespace std;

class Persona
{
protected:
	string nombre;
	string direccion;
	int numero;
	string nacimiento;
	string sexo;

public:
	Persona();
	Persona(string, string, int, string,string);
	string getNombre();
	string getDireccion();
	int getNumero();
	string getNacimiento();
	string getSexo();
	

};

#endif
