#include "Cliente.h"

Cliente::Cliente(){
  rfc=" ";
}

Cliente::Cliente(string name,string direc, int num, string nac, string sex,string rf):Persona( name, direc,  num,  nac,  sex){
  rfc=rf;
}

string Cliente::getRfc(){
  return rfc;
}
