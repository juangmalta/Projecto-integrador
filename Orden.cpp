#include "Orden.h"

#include <iostream>

using namespace std;

Orden::Orden(){
  arrprod = new ProductoSucursal[1];
  empleado = Empleado();
  cliente = Cliente();
  size=0;
}

Orden::Orden(int t,ProductoSucursal *arr,Cliente c,Empleado e){
arrprod = arr;
empleado = e;
cliente = c;
size = t;
}

void Orden::print(){
    cout << "Orden "<<" le atendio " << endl;
    empleado.imprimir();
    cout << "Cliente "<<endl;
    cliente.imprimir();

    
    arrprod->imprime(arrprod->getTamano());
    
}
