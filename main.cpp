#include <iostream>
#include "Persona.h"

using namespace std;

int main(){
  Persona p1("Juan Pablo","Tabachines",333669810,"23/09/02","H");
  cout<<p1.getNombre()<<" "<<p1.getDireccion()<<" "<<p1.getNumero()<<" "<<p1.getNacimiento()<<" "<<p1.getSexo()<<endl;

  return 0;
}
