#define ALMACENSUCURSAL_H_INCLUDED
#ifndef ALMACENSUCURSAL_H_INCLUDED
#include <string>

class almacenSucursal
{
protected:
  int masProducto;
  string modificarProducto; //Todo esto puede cambiarse de acuerdo a lo que diga el encargado
  int eliminarProducto;
  int editarProducto;
public:
  getMasProducto();
  getModificarProducto();
  getEliminarProducto();
  getEditarProducto();
}




#endif
