#ifndef SUCURSAL_H_INCLUDED
#define SUCURSAL_H_INCLUDED
#include <string>
#include "Empleado.h"
#include "Cliente.h"
#include "AlmacenSucursal.h"
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
   AlmacenSucursal almacen;
public:
  Sucursal();
  Sucursal(int,int,int);
  Sucursal(int ,Empleado *, int,Cliente *,int,AlmacenSucursal);
  int tC();
  int tE();
  void eliminarSucursal();
  void agregarEmpleado(Empleado);
  void agregarCliente(Cliente);
  void eliminarEmpleado(int);
  void eliminarCliente(int);
  void transeferirEmpleado(int,Empleado,Sucursal);
  void imprimirClientes();
  void imprimirEmpleados();
  AlmacenSucursal getAlmacen();
};

#endif
