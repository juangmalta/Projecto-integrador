#include <iostream>
#include <string>
#include "AlmacenSucursal.h"

using namespace std;

AlmacenSucursal::AlmacenSucursal(){
	this->numSucursal=99;
	int x=0;
	this->productosRegistrados = &x;
	this->listaProductos = new ProductoSucursal[1];
}

AlmacenSucursal::AlmacenSucursal(int num, int * producRegis, ProductoSucursal * arrProductos){
	this->numSucursal = num;
	this->productosRegistrados = producRegis;
	this->listaProductos = arrProductos;
}

void AlmacenSucursal::mostrarProductos(){
	
	cout<<"Los productos disponibles son: "<<endl;
	
	int cantidad = *productosRegistrados;
	for(int i=0; i<cantidad; i++){
		cout<<i+1<<".------------------------"<<endl;
		this->listaProductos[i].imprime(this->numSucursal);
		cout<<endl;
	}
	
}

void AlmacenSucursal::addExistencias(int productoNum, int cant){
	this->listaProductos[productoNum-1].setExistencias(this->numSucursal, cant);
}

void AlmacenSucursal::elinminarExistencias(int productoNum, int cant){
	this->listaProductos[productoNum-1].setExistencias(this->numSucursal, -cant);
}

void AlmacenSucursal::eliminarProducto(int productoNum){
	
	int Cantidad = *productosRegistrados;
	//cout<<Cantidad<<endl;
	int num[Cantidad-1];
	
	int a=0;
	for(int i=0; i<Cantidad; i++){
		if(i!=productoNum-1){
			num[a]=i;
			a++;
		}
	}
	
	/*for(int i=0; i<Cantidad-1; i++){
		cout<<num[i]<<endl;
	}*/
	
	//ProductoSucursal newArrProduc[Cantidad-1];
	ProductoSucursal * newArrProduc = new ProductoSucursal[Cantidad-1];
	*productosRegistrados = Cantidad-1; //Reducimos la cantidad total de productos
	for(int i=0; i<Cantidad-1; i++){
		//newArrProduc[i]=this->listaProductos[num[i]];
		newArrProduc[i] = this->listaProductos[num[i]];
		//newArrProduc[i].imprime(this->numSucursal);
	}
	//listaProductos = newArrProduc;
	listaProductos = newArrProduc;
	
	int x=3;
	int * ptr;
	ptr = &x;
	//this->productosRegistrados = ptr;
}

void AlmacenSucursal::modificarProducto(int num, int codPro, string nombre, int compra, int venta, int * cantidad, double pes, double tam){
	this->listaProductos[num].modificarProducto(codPro, nombre, compra, venta, cantidad, pes, tam);
}







