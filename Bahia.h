#include "Lista.h"
#pragma once
#include <string>
using namespace std;

class Bahia
{
public:
	Bahia* siguiente;//apuntador de siguiente nodo
	Bahia* anterior;//apuntador de anterior nodo
	Lista* nueva_lista;
	int peso_maximo;//cuanto peso maximo soportara la bahia
	int tipo_producto;//el ID del producto a insertar

	Bahia();//constructor
	~Bahia();//destructor
};

