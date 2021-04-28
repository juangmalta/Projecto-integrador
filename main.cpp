#include <iostream>
#include "Persona.h"
#include "Cliente.h"
#include "Empleado.h"
using namespace std;

int main(){
  Persona p1("Juan Pablo","Tabachines",333669810,"23/09/02","H");
  cout<<p1.getNombre()<<" "<<p1.getDireccion()<<" "<<p1.getNumero()<<" "<<p1.getNacimiento()<<" "<<p1.getSexo()<<endl;
  Cliente c1("Pedro ","Seattle",334424323,"23/07/98","M","PASDFA123");
    cout<<c1.getNombre()<<" "<<c1.getDireccion()<<" "<<c1.getNumero()<<" "<<c1.getNacimiento()<<" "<<c1.getSexo()<<" "<<c1.getRfc()<<endl;
  Empleado e1("Chava","Valle", 22332333, "23/4/45","M", "Gerente");
  cout<<e1.getNombre()<<" "<<e1.getDireccion()<<" "<<e1.getNumero()<<" "<<e1.getNacimiento()<<" "<<e1.getSexo()<<" "<<e1.getCargo()<<endl;
  return 0;
}
