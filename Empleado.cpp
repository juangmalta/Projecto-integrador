#include "Empleado.h"
#include<iostream>

Empleado::Empleado(){
  cargo=" ";
}
Empleado::Empleado(string name,string direc, int num, string nac, string sex,string carg):Persona( name, direc,  num,  nac,  sex){
  cargo=carg;
}

string Empleado::getCargo(){
  return cargo;
}

void imprimir(){
      cout<<this->nombre<<" "<<direccion<<" "<<numero<<" "<<nacimiento<<" "<<sexo<<" "<<cargo<<endl;
}
