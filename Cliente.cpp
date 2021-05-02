#include "Cliente.h"
#include <iostream>

Cliente::Cliente(){
  rfc=" ";
}

Cliente::Cliente(string name,string direc, int num, string nac, string sex,string rf):Persona( name, direc,  num,  nac,  sex){
  rfc=rf;
}

string Cliente::getRfc(){
  return rfc;
}

void Cliente::setRfc(string rf){
  rfc=rf;
}
void Cliente::imprimir(){
      cout<<nombre<<" "<<direccion<<" "<<numero<<" "<<nacimiento<<" "<<sexo<<" "<<rfc<<endl;
}
