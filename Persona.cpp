#include "Persona.h"

Persona::Persona(){
  nombre=" ";
  direccion=" ";
  numero=0;
  nacimiento=" ";
  sexo=" ";
}

Persona::Persona(string name,string direc, int num, string nac, string sex){
  nombre=name;
  direccion=direc;
  numero=num;
  nacimiento=nac;
  sexo=sex;
}

string Persona::getNombre(){
  return nombre;
}
string Persona::getDireccion(){
  return direccion;
}
int Persona::getNumero(){
  return numero;
}
string Persona::getNacimiento(){
  return nacimiento;
}
string Persona::getSexo(){
  return sexo;
}
