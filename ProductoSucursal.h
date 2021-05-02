#ifndef ProductoSucursal_h
#define ProductoSucursal_h
#include <string>
using namespace std;

class ProductoSucursal {
protected:
    int codprod;
    string nombrprod;
    int precio;
    int precCompra;
    int precVenta;
    int existencia;
    double peso;
    double tamañoEmpaque;
public:
	ProductoSucursal(int, string, int, int, int, int, double, double);
    int getCodigoProducto();
    int getNombreProducto();
    int getPrecioCompra();
    int getPrecioVenta();
    int getExistencia();
    double getPeso();
    double getTamaño();
    void imprimir();
		
};


#endif