#include "Cliente.h"

Cliente::Cliente(){
  rfc=" ";
}

Cliente::Cliente(string name,string direc, int num, string nac, string sex,string rfc){
  this->rfc=rfc;
}

string Cliente::getRfc(){
  return rfc;
}
