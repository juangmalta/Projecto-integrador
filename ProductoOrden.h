#ifndef PRODUCTO_ORDEN_H_INCLUDED
#define PRODUCTO_ORDEN_H_INCLUDED
#include <string>
using namespace std;
#include "Orden.h"
#include "Cliente.h"

class ProductoOrden:public Orden
{
protected:
    int codprod;
    string nombrprod;
    int precCompra;
    int precVenta;
    int cantprodex;
    int peso;
    int tamañoEmpaque;

private:
    ProductoOrden();
    ProductoOrden(int,string,int,int,int,int,int);
    string getCliente(Cliente);

};




#endif