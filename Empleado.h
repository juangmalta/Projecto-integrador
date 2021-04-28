#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

#include "Persona.h"

class Empleado:public Persona
{
protected:
  string cargo;
public:
  Empleado();
  Empleado(string,string,int,string,string,string);
  string getCargo();
};

#endif
