#include "Sucursal.h"

using namespace std;

Sucursal::Sucursal(){
  listaCliente= new Cliente[1];
  listaEmpleados=new Empleado[1];
  dimensionClientes=1;
  dimensionEmpleados=1;
}

Sucursal::Sucursal(int tc, int te){
  listaCliente= new Cliente[1];
  listaEmpleados=new Empleado[1];
  dimensionClientes=tc;
  dimensionEmpleados=te;
}

Sucursal::Sucursal(int te,Empleado * arrEmpleado, int tc, Cliente * arrCliente){
  listaCliente= arrCliente;
  listaEmpleados=arrEmpleado;
  dimensionClientes=tc;
  dimensionEmpleados=te;
}


int Sucursal::tC(){
  return dimensionClientes;
}

int Sucursal::tE(){
  return dimensionEmpleados;
}

void Sucursal::imprimir(){

	cout << "Lista de clientes"<<endl;
    int i;
    int j;
    for (i=0; i<this->dimensionClientes; i++){
        cout << this->listaCliente[i].getNombre() << ", " << this->listaCliente[i].getNumero()<<", "<<this->listaCliente[i].getDireccion()<<", "<<this->listaCliente[i].getNacimiento()<<", "<<this->listaCliente[i].getSexo()<<", "<<this->listaCliente[i].getRfc()<<endl;

}
for (j=0; j<this->dimensionEmpleados; j++){
    cout << this->listaEmpleados[j].getNombre() << ", " << this->listaEmpleados[j].getNumero()<<", "<<this->listaEmpleados[j].getDireccion()<<", "<<this->listaEmpleados[j].getNacimiento()<<", "<<this->listaEmpleados[j].getSexo()<<", "<<this->listaEmpleados[j].getCargo()<<endl;

}

}
