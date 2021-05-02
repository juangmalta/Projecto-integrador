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
<<<<<<< HEAD

public:
    Orden();
    Orden(int, ProductoSucursal*, Cliente, Empleado);
    //Orden(ProductoSucursal *);
    void mostrarProductos();
=======
private:
    Orden();
    Orden(int,ProductoSucursal *,Cliente,Empleado);
>>>>>>> 9e1d77e8a230bb34d195b006f7b40f5ac3b8f885
    void print();

};



#endif
