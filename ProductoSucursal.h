#ifndef PRODUCTOSUCURSAL_H
#define PRODUCTOSUCURSAL_H
#include <string>

using namespace std;

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
  void setExistencias(int, int);
  double getPeso();
  double getTamano();
  void imprime(int);
  void modificarProducto(int, string, int, int, int *, double, double);
};

#endif
