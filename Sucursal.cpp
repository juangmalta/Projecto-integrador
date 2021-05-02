#include "Sucursal.h"

using namespace std;

Sucursal::Sucursal(){
  listaCliente= new Cliente[1];
  listaEmpleados=new Empleado[1];
  dimensionClientes=1;
  dimensionEmpleados=1;
  sizeC=1;
  sizeE=1;
  identificador=0;
}

Sucursal::Sucursal(int tc, int te,int id){
  listaCliente= new Cliente[1];
  listaEmpleados=new Empleado[1];
  dimensionClientes=tc;
  dimensionEmpleados=te;
  sizeC=tc;
  sizeE=te;
  identificador=id;
}

Sucursal::Sucursal(int te,Empleado * arrEmpleado, int tc, Cliente * arrCliente,int id){
  listaCliente= arrCliente;
  listaEmpleados=arrEmpleado;
  dimensionClientes=tc;
  dimensionEmpleados=te;
  sizeC=tc;
  sizeE=te;
  identificador=id;
}


int Sucursal::tC(){
  return dimensionClientes;
}

int Sucursal::tE(){
  return dimensionEmpleados;
}

void Sucursal:: eliminarSucursal(){
  listaCliente= new Cliente[0];
  listaEmpleados=new Empleado[0];
  dimensionClientes=0;
  dimensionEmpleados=0;
cout<<"Esta sucursal ha sido eliminada"<<endl;
}

void Sucursal::agregarCliente(Cliente obj){
  if(this->dimensionClientes+1>this->sizeC){
    //Si no hay suficiente espacio se crea un nuevo vector del doble de tama�o
    Cliente * newCliente = new Cliente[this->dimensionClientes*2];
    //Se copia el vector en el nuevo vector
    for (int i=0; i<this->dimensionClientes; i++){
            newCliente[i] = this->listaCliente[i];
        }
        newCliente[this->dimensionClientes] = obj;
        this->listaCliente = newCliente;
        this->sizeC = this->dimensionClientes*2;
        dimensionClientes++;
  }else{
    //Si hay suficiente espacio se a�ade la fraccion
    this->listaCliente[this->dimensionClientes] = obj;
    this->dimensionClientes++;
  }
}

void Sucursal::agregarEmpleado(Empleado obj){
  if(this->dimensionEmpleados+1>this->sizeE){
    //Si no hay suficiente espacio se crea un nuevo vector del doble de tama�o
    Empleado * newEmpleado = new Empleado[this->dimensionEmpleados*2];
    //Se copia el vector en el nuevo vector
    for (int i=0; i<this->dimensionEmpleados; i++){
            newEmpleado[i] = this->listaEmpleados[i];
        }
        newEmpleado[this->dimensionEmpleados] = obj;
        this->listaEmpleados = newEmpleado;
        this->sizeE = this->dimensionEmpleados*2;
        dimensionEmpleados++;
  }else{
    //Si hay suficiente espacio se a�ade la fraccion
    this->listaEmpleados[this->dimensionEmpleados] = obj;
    this->dimensionEmpleados++;
  }
}

void Sucursal::eliminarEmpleado(int indice){
  this->listaEmpleados[indice]=Empleado();
}
void Sucursal::eliminarCliente(int indice){
  this->listaCliente[indice]=Cliente();
}
void Sucursal::transeferirEmpleado(int ind,Empleado emp,Sucursal suc){
  eliminarEmpleado(ind);
  suc.agregarEmpleado(emp);
  cout<<"Empleado transferido"<<endl;
}
void Sucursal::imprimirClientes(){
cout<<"Sucursal numero "<<identificador<<endl;
	cout << "Lista de clientes"<<endl;
    int i;
    for (i=0; i<this->dimensionClientes; i++){
      this->listaCliente[i].imprimir();

}
}

void Sucursal::imprimirEmpleados(){
cout<<"Sucursal numero "<<identificador<<endl;
	cout << "Lista de empleados"<<endl;
    int i;
    for (i=0; i<this->dimensionEmpleados; i++){
      this->listaEmpleados[i].imprimir();

}
}
