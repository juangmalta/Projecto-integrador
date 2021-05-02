#include "ProductoOrden.h"
#include <iostream>

using namespace std;

ProductoOrden::ProductoOrden(){
    codprod=0;
    nombrprod="";
    precCompra=0;
    precVenta=0;
    cantprodex=0;
    peso=0;
    tamañoEmpaque=0;
}
ProductoOrden::ProductoOrden(int _codprod,string _nomprod,int _precCompra,int _precVenta, int _cantprodex,int _peso, int _tamañoEmpaque):Orden(){
    codprod=_codprod;
    nombrprod=_nomprod;
    precCompra=_precCompra;
    precVenta=_precVenta;
    cantprodex=_cantprodex;
    peso=_peso;
    tamañoEmpaque=_tamañoEmpaque;
}

string ProductoOrden::getCliente(Cliente cl1)
{
    cl1.imprimir();

}