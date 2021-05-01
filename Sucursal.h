#ifndef SUCURSAL_H_INCLUDED
#define SUCURSAL_H_INCLUDED
#include <string>
#include "Empleado.h"
#include "Cliente.h"
#include <iostream>
class Sucursal
{
protected:
   Empleado *listaEmpleados;
   int dimensionEmpleados;
   Cliente *listaCliente;
   int dimensionClientes;
   int sizeC;
   int sizeE;
public:
  Sucursal();
  Sucursal(int,int);
  Sucursal(int ,Empleado *, int,Cliente *);
  int tC();
  int tE();
  void eliminarSucursal();
  void agregarEmpleado(Empleado);
  void agregarCliente(Cliente);
  void imprimir();

};

#endif
