#include <iostream>
#include "Persona.h"
#include "Cliente.h"
#include "Empleado.h"
#include "Sucursal.h"
using namespace std;

int main(){

  Cliente c1("Pedro ","Seattle",334424323,"23/07/98","M","PASDFA123");
  c1.imprimir();
  Empleado e1("Chava","Valle", 22332333, "23/4/45","M", "Gerente");
  e1.imprimir();

Cliente c2("Juan Pablo","Tabachines",333669810,"23/09/02","H","SADFA12313");
Cliente c3("Chava","Valle", 22332333, "23/4/45","M", "ASDFG1242452");
Empleado e2("Pedro ","Seattle",334424323,"23/07/98","M","Gerente" );
Empleado e3("Kevin ","Vallarta",32354434,"23/07/98","H","Cajero" );

Cliente clientes[3]= {c1,c2,c3};
Empleado empleados[3]= {e1,e2,e3};

Sucursal suc1(3,empleados,3,clientes,1);
Sucursal suc2(3,empleados,3,clientes,1);
suc1.imprimirClientes();
suc1.imprimirEmpleados();

suc1.eliminarEmpleado(1);

suc1.imprimirEmpleados();

Cliente c4("Kevin ","Vallarta",32354434,"23/07/98","H","ASADFASDF1234126345" );
suc1.agregarCliente(c4);
suc1.imprimirClientes();
suc1.imprimirEmpleados();

suc1.transeferirEmpleado(1,e2,suc2);
suc2.imprimirEmpleados();
suc1.eliminarSucursal();
suc1.imprimirClientes();
suc1.imprimirEmpleados();

  return 0;
}
