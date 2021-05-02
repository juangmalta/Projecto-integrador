#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include "Persona.h"

class Cliente:public Persona
{
protected:
  string rfc;
public:
  Cliente();
  Cliente(string,string,int,string,string,string);
  string getRfc();
  void setRfc(string);
  void imprimir();
  
};

#endif
