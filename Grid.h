#include "Bahia.h"
#pragma once

class Grid
{
public:
	Bahia* inicio;//apuntador al inicio de la lista
	Bahia* fin;//apuntador al final de la lista
	int contador;//contador de elementos de la lista

	void Insertar_al_inicio(int ID, int peso, int peso_unitario, int cantidad, int dia, int mes, int año, string nombre);//insertar al inicio de la lista
	void Insertar_al_final(int ID, int peso, int peso_unitario, int cantidad, int dia, int mes, int año, string nombre);//insertar al final de la lista
	void Insertar_en_posicion(int ID, int peso, int peso_unitario, int cantidad, int dia, int mes, int año, string nombre, int posicion);//insertar en una posisicion de la lista
	Bahia* Eliminar_al_inicio();//eliminar al principio de la lista
	Bahia* Eliminar_al_final();//eliminar al final de la lista
	Bahia* Eliminar_en_posicion(int posicion);//eliminar en una posicion de la lista
	Bahia* Obtener_nodo(int ID, int peso);
	int Obtener_valor(int posicion);
	Bahia* Elnodo(int posicion);
	bool Vacio();//si se encuentra vacia nuestra lista

	Grid();
	~Grid();
};

