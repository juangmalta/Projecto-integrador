#define PRODUCTOSUCURSAL_H_INCLUDED
#ifndef PRODUCTOSUCURSAL_H_INCLUDED
#include <string>

class ProductoSucursal
{
private:
  int CodigoProducto;
  string NombreProducto;
  int PrecioCompra;
  int PrecioVenta;
  int *Existencias;
  double Peso;
  double Tamano;

public:
  ProductoSucursal();
  ProductoSucursal(int, string, int, int, int *, double, double);
  int getCodigoProducto();
  string getNombreProducto();
  int getPrecioCompra();
  int getPrecioVenta();
  int getExistencias(int);
  double getPeso();
  double getTamano();
  void imprime();
}

#endif
