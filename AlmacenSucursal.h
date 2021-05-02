#ifndef ALMACENSUCURSAL_H
#define ALMACENSUCURSAL_H

#include "ProductoSucursal.cpp"

using namespace std;

class AlmacenSucursal
{
	private:
		int numSucursal;
		int *productosRegistrados;	
		ProductoSucursal * listaProductos;
	public:
		AlmacenSucursal();
	    AlmacenSucursal(int, int *, ProductoSucursal *);
	    void mostrarProductos();
	    void addExistencias(int, int);
	    void elinminarExistencias(int, int);
	    void eliminarProducto(int);
};

#endif
