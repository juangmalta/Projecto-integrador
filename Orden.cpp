#include "Orden.h"
#include<iostream>
Orden::Orden(){
  arrprod=new ProductoSucursal[1];
  empleado= Empleado();
  cliente= Cliente();
  size=0;
}

Orden::Orden(int t, ProductoSucursal* ps , Cliente c, Empleado e){
  arrprod=ps;
  empleado= e;
  cliente= c;
  size =t;
}
void Orden::mostrarProductos(){

	cout<<"Los productos de su compra son "<<endl;

	int cantidad = size;
	for(int i=0; i<cantidad; i++){
		cout<<i+1<<".------------------------"<<endl;
		this->arrprod[i].imprime(1);
		cout<<endl;
	}

}

void Orden::print(){

  cout<<"Orden para "<<endl;
  cliente.imprimir();
  cout<<" le atendio"<<endl;
  empleado.imprimir();
  this->mostrarProductos();

}
