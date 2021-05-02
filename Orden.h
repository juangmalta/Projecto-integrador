#ifndef ORDEN_H_INCLUDED
#define ORDEN_H_INCLUDED

#include"Empleado.h"
#include"Cliente.h"
#include "ProductoSucursal.h"

class Orden{

protected:
ProductoSucursal *arrprod;
Empleado empleado;
Cliente cliente;
int size;

public:
    Orden();
    Orden(int, ProductoSucursal*, Cliente, Empleado);
    //Orden(ProductoSucursal *);
    void mostrarProductos();
    void print();

};



#endif
