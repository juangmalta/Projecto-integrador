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

void ProductoSucursal::setExistencias(int i, int cant){
	if((this->Existencias[i]+cant)<0){
		cout<<"No hay suficientes existencias"<<endl;
	} else{
		this->Existencias[i] = this->Existencias[i] + cant;
	}
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

void ProductoSucursal::modificarProducto(int codPro, string nombre, int compra, int venta, int * cantidad, double pes, double tam){
	this->CodigoProducto = codPro;
	this->NombreProducto = nombre;
	this->PrecioCompra = compra;
	this->PrecioVenta = venta;
	this->Existencias = cantidad;
	this->Peso = pes;
	this->Tamano = tam;
}

