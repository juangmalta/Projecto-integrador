#include "ProductoSucursal.h"
#include <iostream>
using namespace std;


ProductoSucursal::ProductoSucursal(int cod, string nom, int prec, int precc, int precv, int cant, double pes, double tam) {
    codprod = cod;
    nombrprod = nom;
    precio = prec;
    precCompra = precc;
    precVenta = precv;
    existencia = cant;
    peso = pes;
    tamañoEmpaque = tam;
}

int ProductoSucursal::getCodigoProducto() {
    return codprod;
}

int ProductoSucursal::getNombreProducto() {
    return nombrprod;
}

int ProductoSucursal::getPrecioCompra() {
    return precCompra;
}

int ProductoSucursal::getPrecioVenta() {
    return precVenta;
}

int ProductoSucursal::getExistencia() {
    return existencia;
}

double ProductoSucursal::getPeso() {
    return peso;
}

double ProductoSucursal::getTamaño() {
    return tamaño;
}

void ProductoSucursal::imprimir() {
    cout << "Codigo de producto: " << codprod << endl;
    cout << "Nombre de producto: " << nombrprod << endl;
    cout << "Precio de producto: " << precio << endl;
    cout << "Precio(Compra) de producto: " << precCompra << endl;
    cout << "Precio(Venta) de producto: " << precVenta << endl;
    cout << "Existencias de producto: " << existencia << endl;
    cout << "Peso de producto: " << peso << endl;
    cout << "Tamaño de prodcuto: " << tamaño << endl;
}
