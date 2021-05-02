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
   int identificador;
public:
  Sucursal();
  Sucursal(int,int,int);
  Sucursal(int ,Empleado *, int,Cliente *,int);
  int tC();
  int tE();
  void eliminarSucursal();
  void agregarEmpleado(Empleado);
  void agregarCliente(Cliente);
  void eliminarEmpleado(int);
  void transeferirEmpleado(int,Empleado,Sucursal);
  void imprimirClientes();
  void imprimirEmpleados();
};

#endif
