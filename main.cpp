#include <iostream>
#include "Persona.h"
#include "Cliente.h"
#include "Empleado.h"
#include "Sucursal.h"
using namespace std;

int main(){
  Persona p1("Juan Pablo","Tabachines",333669810,"23/09/02","H");
  cout<<p1.getNombre()<<" "<<p1.getDireccion()<<" "<<p1.getNumero()<<" "<<p1.getNacimiento()<<" "<<p1.getSexo()<<endl;
  Cliente c1("Pedro ","Seattle",334424323,"23/07/98","M","PASDFA123");
    cout<<c1.getNombre()<<" "<<c1.getDireccion()<<" "<<c1.getNumero()<<" "<<c1.getNacimiento()<<" "<<c1.getSexo()<<" "<<c1.getRfc()<<endl;
  Empleado e1("Chava","Valle", 22332333, "23/4/45","M", "Gerente");
  cout<<e1.getNombre()<<" "<<e1.getDireccion()<<" "<<e1.getNumero()<<" "<<e1.getNacimiento()<<" "<<e1.getSexo()<<" "<<e1.getCargo()<<endl;

Cliente c2("Juan Pablo","Tabachines",333669810,"23/09/02","H","SADFA12313");
Cliente c3("Chava","Valle", 22332333, "23/4/45","M", "ASDFG1242452");
Empleado e2("Pedro ","Seattle",334424323,"23/07/98","M","Gerente" );
Empleado e3("Kevin ","Vallarta",32354434,"23/07/98","H","Cajero" );

Cliente clientes[3]= {c1,c2,c3};
Empleado empleados[3]= {e1,e2,e3};

Sucursal suc1(3,empleados,3,clientes);
suc1.imprimir();

Cliente c4("Kevin ","Vallarta",32354434,"23/07/98","H","ASADFASDF1234126345" );
suc1.agregarCliente(c4);
suc1.imprimir();

suc1.eliminarSucursal();

suc1.imprimir();


  return 0;
}
