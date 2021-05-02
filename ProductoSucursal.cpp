<<<<<<< HEAD
#include <iostream>
#include <string>
#include "ProductoSucursal.h"

using namespace std;

ProductoSucursal::ProductoSucursal(){
	this->CodigoProducto = 0;
	this->NombreProducto = "Sin nombre";
	this->PrecioCompra = 0;
	this->PrecioVenta = 0;
	this->Existencias = new int[0];
	this->Peso = 0.0;
	this->Tamano = 0.0;
}

ProductoSucursal::ProductoSucursal(int codPro, string nombre, int compra, int venta, int * cantidad, double pes, double tam){
	this->CodigoProducto = codPro;
	this->NombreProducto = nombre;
	this->PrecioCompra = compra;
	this->PrecioVenta = venta;
	this->Existencias = cantidad;
	this->Peso = pes;
	this->Tamano = tam;
}

int ProductoSucursal::getCodigoProducto(){
	return this->CodigoProducto;
}

string ProductoSucursal::getNombreProducto(){
	return this->NombreProducto;
}

int ProductoSucursal::getPrecioCompra(){
	return this->PrecioCompra;
}

int ProductoSucursal::getPrecioVenta(){
	return this->PrecioVenta;
}

int ProductoSucursal::getExistencias(int i){
	return this->Existencias[i];
}

double ProductoSucursal::getPeso(){
	return this->Peso;
}

double ProductoSucursal::getTamano(){
	return this->Tamano;
}

void ProductoSucursal::imprime(int i){
	cout<<"Codigo: "<<this->CodigoProducto<<endl;
	cout<<"Nombre: "<<this->NombreProducto<<endl;
	cout<<"Precio de compra: "<<this->PrecioCompra<<endl;
	cout<<"Precio de venta: "<<this->PrecioVenta<<endl;
	cout<<"Existencias: "<<this->Existencias[i]<<endl;
	cout<<"Peso: "<<this->Peso<<endl;
	cout<<"Tamaño: "<<this->Tamano<<endl;
}
=======
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
>>>>>>> 48d342b74fc8ea26558245a75a9cbd3ec4b9d072
