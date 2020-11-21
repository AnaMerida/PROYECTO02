#include "Lista.h"

Lista::Lista()
{
	inicio = nullptr;
	fin = nullptr;
	contador = 0;
};

void Lista::Insertar_al_inicio(int ID, int peso, int peso_unitario, int cantidad, int dia, int mes, int año, string nombre)
{
	Nodo* nuevo_nodo = new Nodo();
	nuevo_nodo->peso_maximo = peso;
	nuevo_nodo->tipo_producto = ID;
	nuevo_nodo->año = año;
	nuevo_nodo->mes = mes;
	nuevo_nodo->dia = dia;
	nuevo_nodo->cantidad_elmentos = cantidad;
	nuevo_nodo->peso_unitario = peso_unitario;
	nuevo_nodo->nombre_encargado = nombre;

	if (Vacio())
	{
		inicio = nuevo_nodo;
		fin = nuevo_nodo;
	}
	else
	{
		nuevo_nodo->siguiente = inicio;
		inicio->anterior = nuevo_nodo;
		inicio = nuevo_nodo;
	}
	contador++;
}

void Lista::Insertar_al_final(int ID, int peso, int peso_unitario, int cantidad, int dia, int mes, int año, string nombre)
{
	Nodo* nuevo_nodo = new Nodo();
	nuevo_nodo->peso_maximo = peso;
	nuevo_nodo->tipo_producto = ID;
	nuevo_nodo->año = año;
	nuevo_nodo->mes = mes;
	nuevo_nodo->dia = dia;
	nuevo_nodo->cantidad_elmentos = cantidad;
	nuevo_nodo->peso_unitario = peso_unitario;
	nuevo_nodo->nombre_encargado = nombre;

	if (Vacio())
	{
		inicio = nuevo_nodo;
		fin = nuevo_nodo;
	}
	else
	{
		fin->siguiente = nuevo_nodo;
		nuevo_nodo->anterior = fin;
		fin = nuevo_nodo;
	}
	contador++;
}

void Lista::Insertar_en_posicion(int ID, int peso, int peso_unitario, int cantidad, int dia, int mes, int año, string nombre, int posicion)
{
	Nodo* nuevo_nodo = new Nodo();
	nuevo_nodo->peso_maximo = peso;
	nuevo_nodo->tipo_producto = ID;
	nuevo_nodo->año = año;
	nuevo_nodo->mes = mes;
	nuevo_nodo->dia = dia;
	nuevo_nodo->cantidad_elmentos = cantidad;
	nuevo_nodo->peso_unitario = peso_unitario;
	nuevo_nodo->nombre_encargado = nombre;

	if (Vacio() || (posicion == 0))
	{
		Insertar_al_inicio(ID, peso, peso_unitario, cantidad, dia, mes, año, nombre);
	}
	else
	{
		if (posicion >= contador)
		{
			Insertar_al_final(ID, peso, peso_unitario, cantidad, dia, mes, año, nombre);
		}
		else
		{
			Nodo* pretemp = inicio;
			Nodo* temp = inicio->siguiente;
			int index = 1;
			while ((temp) && (index < posicion))
			{
				pretemp = temp;
				temp = temp->siguiente;
				index++;
			}
			temp->anterior = nuevo_nodo->anterior;
			nuevo_nodo->siguiente = temp;
			pretemp->siguiente = nuevo_nodo;
		}
	}
	contador++;
}

//Extract operation
Nodo* Lista::Eliminar_al_inicio()
{
	Nodo* temp = inicio;

	if (!Vacio())
	{
		inicio = inicio->siguiente;
		inicio->anterior = nullptr;

		if (contador == 1)
		{
			fin = inicio;
		}
		contador--;
	}
	return temp;
}


Nodo* Lista::Eliminar_al_final()
{
	Nodo* temp = fin;

	if (!Vacio())
	{
		if (contador == 1)
		{
			fin = fin->siguiente;
			inicio = fin;
		}
		else
		{
			Nodo* pretemp = inicio;
			temp = pretemp->siguiente;

			while (temp != fin)
			{
				pretemp = temp;
				temp = pretemp->siguiente;
			}
			temp->anterior = fin;
			pretemp->siguiente = temp->siguiente;
			fin = pretemp;
		}
		contador--;
	}
	return temp;
}

Nodo* Lista::Eliminar_en_posicion(int position)
{
	Nodo* temp = inicio;
	if (!Vacio())
	{
		if ((contador == 1) || (position == 0))
		{
			return Eliminar_al_inicio();
		}
		else
		{
			if (position >= contador)
			{
				return Eliminar_al_final();
			}
			else
			{
				Nodo* pretemp = inicio;
				temp = pretemp->siguiente;
				int index = 1;
				while ((temp) && (index < position))
				{
					pretemp = temp;
					temp = pretemp->siguiente;
					index++;
				}
				(temp->siguiente)->anterior = pretemp;
				pretemp->siguiente = temp->siguiente;
				contador--;
			}
		}
	}
	return temp;
}

//Search operations
Nodo* Lista::Obtener_nodo(int ID, int peso)
{
	Nodo* temp = inicio;

	while ((temp) && (temp->tipo_producto != ID) && (temp->peso_maximo != peso)) 
	{
		temp = temp->siguiente;
	}
	return temp;
}

Nodo* Lista::Elnodo(int posicion)
{
	Nodo* temp = inicio;
	int index = 0;
	while ((temp) && (index < posicion))
	{
		temp = temp->siguiente;
		index++;
	}
	return temp;
}

int Lista::Obtener_valor(int posicion) 
{
	if ((posicion >= 0) && (posicion < contador)) 
	{
		Nodo* temp = inicio;
		int index = 0;
		while ((temp) && (index < posicion)) 
		{
			temp = temp->siguiente;
			index++;
		}
		return (temp->tipo_producto, temp->peso_maximo);
	}
	return -1;
}

bool Lista::Vacio()
{
	return contador == 0;
}


