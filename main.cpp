#include <iostream>
#include "Persona.h"
#include "Cliente.h"
using namespace std;

int main(){
  Persona p1("Juan Pablo","Tabachines",333669810,"23/09/02","H");
  cout<<p1.getNombre()<<" "<<p1.getDireccion()<<" "<<p1.getNumero()<<" "<<p1.getNacimiento()<<" "<<p1.getSexo()<<endl;
  Cliente c1("Juan Pablo","Tabachines",333669810,"23/09/02","H","MG123NMJ1212");
    cout<<c1.getNombre()<<" "<<c1.getDireccion()<<" "<<c1.getNumero()<<" "<<c1.getNacimiento()<<" "<<c1.getSexo()<<" "<<c1.getRfc()<<endl;
  return 0;
}
