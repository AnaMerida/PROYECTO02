#pragma once
#include "Nodo.h"
#include <string>
using namespace std;

class Lista
{
public:
	Nodo* inicio;//apuntador al inicio de la lista
	Nodo* fin;//apuntador al final de la lista
	int contador;//contador de elementos de la lista

	void Insertar_al_inicio(int ID, int peso, int peso_unitario, int cantidad, int dia, int mes, int año, string nombre);//insertar al inicio de la lista
	void Insertar_al_final(int ID, int peso, int peso_unitario, int cantidad, int dia, int mes, int año, string nombre);//insertar al final de la lista
	void Insertar_en_posicion(int ID, int peso, int peso_unitario, int cantidad, int dia, int mes, int año, string nombre, int posicion);//insertar en una posisicion de la lista
	Nodo* Eliminar_al_inicio();//eliminar al principio de la lista
	Nodo* Eliminar_al_final();//eliminar al final de la lista
	Nodo* Eliminar_en_posicion(int posicion);//eliminar en una posicion de la lista
	Nodo* Obtener_nodo(int ID, int peso);
	Nodo* Elnodo(int posicion);
	int Obtener_valor(int posicion) ;
	bool Vacio();//si se encuentra vacia nuestra lista

	Lista();
	~Lista();
};

