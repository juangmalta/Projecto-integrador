#include <iostream>
#include "Persona.h"
#include "Cliente.h"
#include "Empleado.h"
#include "Sucursal.h"
#include "ProductoSucursal.h"
#include "AlmacenSucursal.h"
using namespace std;

int main(){

  //Declaracion de productos.
  int arr[5]={2,3,4,5,6};
	ProductoSucursal p1(14,"Leche",32,45,arr,3.4,1.1);


	int arr2[5] = {9,8,7,6,5};
	ProductoSucursal p2(999999999,"Leche shabo",11,111,arr2,4.1,2.1);

	int arr3[5] = {1,1,1,1,1};
	ProductoSucursal p3(1111111111,"Leshe shabo de shocolate",12,999,arr3,5.2,7.1);
	int arr4[5] = {1,1,1,1,1};
	ProductoSucursal p4(888888888,"Leshe papu",3,666,arr4,4.8,4.1);

	int variedad=4;
  //Declaracion de almacenes de Sucursal

	ProductoSucursal arrProductos[variedad] = {p1,p2,p3,p4};


	AlmacenSucursal almacen1(0, &variedad, arrProductos);
	AlmacenSucursal almacen2(1, &variedad, arrProductos);


  Empleado g1("Pedro Gonzales", "Colonia Tabachines",45332123,"25/02/95","H","Gerente");
  Empleado a1("Daniela Perez","Constitucion",34544553,"12/03/02","M","Administrador");
  Empleado v1("Alberto García", "Volcanes", 22333223, "01/05/64","H","Vendedor");

  Empleado g2("Chava Rodriguez", "Seattle",4222232,"23/12/92","H","Gerente");
  Empleado a2("Kevin gutierrez","Valle",2332342,"10/11/12","H","Administrador");
  Empleado v2("Sandra Stobs", "Valdepeñas", 12212, "01/05/64","M","Vendedor");

  Cliente c1("Rogelio guzman","Monterrey", 123233,"24/02/01","H","ASDFG1242452");
  Cliente c2("Alberto", "Zoquipan",2333232, "31/01/21","H","ASDSSD12123");
  Cliente c3("Jessica", "Little rock", 3333443223,"28/04/02","M","JSDS121212");

  Empleado arrEmple1[3]={g1,a1,v1};
  Empleado arrEmple2[3]={g2,a2,v2};

  Cliente arrcli[3]={c1,c2,c3};

  Sucursal suc1(3,arrEmple1,3,arrcli,1,almacen1);
  Sucursal suc2(3,arrEmple2,3,arrcli,2,almacen2);

  suc1.imprimirEmpleados();
  suc1.imprimirClientes();
  suc2.imprimirEmpleados();
  suc2.imprimirClientes();

  c3.setNombre("Alberta");

  suc1.imprimirClientes();
  suc2.eliminarCliente(1);
  suc2.imprimirClientes();

  suc1.getAlmacen().mostrarProductos();
  suc1.getAlmacen().addExistencias(1,11);
  suc1.getAlmacen().elinminarExistencias(2,6);

suc1.getAlmacen().mostrarProductos();





  return 0;
}
