#pragma once
#include <string>
using namespace std;

class Nodo//clase nodo para crear listas doblemente enlazadas 
{
public:
	Nodo* siguiente;//apuntador de siguiente nodo
	Nodo* anterior;//apuntador de anterior nodo
	int peso_maximo;//cuanto peso maximo soportara la bahia
	int tipo_producto;//el ID del producto a insertar
	//DATOS AGREGADOS LUEGO
	string nombre_encargado;
	int peso_unitario;
	int cantidad_elmentos;
	int ID;
	int dia, mes, año;

	Nodo();//constructor
	~Nodo();//destructor
};

