#include "Empleado.h"

Empleado::Empleado(){
  cargo=" ";
}
Empleado::Empleado(string name,string direc, int num, string nac, string sex,string carg):Persona( name, direc,  num,  nac,  sex){
  cargo=carg;
}

string Empleado::getCargo(){
  return cargo;
}
