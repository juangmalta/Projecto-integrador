#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include "Persona.h"

class Cliente:public Persona
{
private:
  string rfc;
public:
  Cliente();
  Cliente(string,string,int,string,string,string);
  string getRfc();
};

#endif
