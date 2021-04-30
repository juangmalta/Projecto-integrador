#ifndef SUCURSAL_H_INCLUDED
#define SUCURSAL_H_INCLUDED
#include <string>

class Sucursal
{
protected:
   string eliminarSucursal;
   string modificarSucursal;
   string asociar;
   int masProducto;
   string modificarProducto; //Todo esto puede cambiarse de acuerdo a lo que diga el encargado
   int eliminarProducto;
   int editarProducto;
public:
  getEliminarSucursal();
  getModificarSucursal();
  getAsociar();
  getMasProducto();
  getModificarProducto();
  getEliminarProducto();
  getEditarProducto();
}

#endif
