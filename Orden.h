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
private:
    Orden();
    Orden(int,ProductoSucursal *,Cliente,Empleado);
    void print();

};



#endif