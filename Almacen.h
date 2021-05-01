#define ALMACEN_H_INCLUDED
#ifndef ALMACEN_H_INCLUDED

class Almacen
{
protected:
	int size; //Para ver cuantos productos se han cargado (estan disponibles)
	public:
	Almacen();
	Almacen(int _size);
	int getSize();
	void setSize();
	void agregarProducto(Almacen);
	void print()
}


#endif
