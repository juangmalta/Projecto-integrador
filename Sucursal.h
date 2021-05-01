#ifndef SUCURSAL_H_INCLUDED
#define SUCURSAL_H_INCLUDED
#include <string>
#include "Empleado.h"
#include "Cliente.h"

class Sucursal
{
protected:
   Empleado *listaEmpleados;
   int dimensionEmpleados;
   Cliente *listaCliente;
   int dimensionClientes;
public:
  Sucursal();
  Sucursal(int,int);
  Sucursal(int,Empleado *,int,Cliente*);
  eliminarSucursal();
  modificarSucursal();
  agregarEmpleado();
  agregarCliente();
  void imprimir();

};

#endif
