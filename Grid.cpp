#include "Grid.h"

Grid::Grid()
{
	inicio = nullptr;
	fin = nullptr;
	contador = 0;
};

Grid::~Grid()
{
	inicio = nullptr;
	fin = nullptr;
	contador = 0;
}

void Grid::Insertar_al_inicio(int ID, int peso, int peso_unitario, int cantidad, int dia, int mes, int año, string nombre)
{
	Bahia* nueva_bahia = new Bahia();
	nueva_bahia->peso_maximo = peso;
	nueva_bahia->tipo_producto = ID;

	if (Vacio())
	{
		inicio = nueva_bahia;
		fin = nueva_bahia;
	}
	else
	{
		nueva_bahia->siguiente = inicio;
		inicio->anterior = nueva_bahia;
		inicio = nueva_bahia;
	}
	contador++;
}

void Grid::Insertar_al_final(int ID, int peso, int peso_unitario, int cantidad, int dia, int mes, int año, string nombre)
{
	Bahia* nueva_bahia = new Bahia();
	nueva_bahia->peso_maximo = peso;
	nueva_bahia->tipo_producto = ID;

	if (Vacio())
	{
		inicio = nueva_bahia;
		fin = nueva_bahia;
	}
	else
	{
		fin->siguiente = nueva_bahia;
		nueva_bahia->anterior = fin;
		fin = nueva_bahia;
	}
	contador++;
}

void Grid::Insertar_en_posicion(int ID, int peso, int peso_unitario, int cantidad, int dia, int mes, int año, string nombre, int posicion)
{
	Bahia* nueva_bahia = new Bahia();
	nueva_bahia->peso_maximo = peso;
	nueva_bahia->tipo_producto = ID;

	if (Vacio() || (posicion == 0))
	{
		Insertar_al_inicio(ID, peso, peso_unitario, cantidad, dia, mes, año, nombre);
	}
	else
	{
		if (posicion >= contador)
		{
			Insertar_al_final (ID, peso,peso_unitario,cantidad, dia, mes,año,nombre);
		}
		else
		{
			Bahia* pretemp = inicio;
			Bahia* temp = inicio->siguiente;
			int index = 1;
			while ((temp) && (index < posicion))
			{
				pretemp = temp;
				temp = temp->siguiente;
				index++;
			}
			temp->anterior = nueva_bahia->anterior;
			nueva_bahia->siguiente = temp;
			pretemp->siguiente = nueva_bahia;
		}
	}
	contador++;
}

//Extract operation
Bahia* Grid::Eliminar_al_inicio()
{
	Bahia* temp = inicio;

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


Bahia* Grid::Eliminar_al_final()
{
	Bahia* temp = fin;

	if (!Vacio())
	{
		if (contador == 1)
		{
			fin = fin->siguiente;
			inicio = fin;
		}
		else
		{
			Bahia* pretemp = inicio;
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

Bahia* Grid::Eliminar_en_posicion(int position)
{
	Bahia* temp = inicio;
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
				Bahia* pretemp = inicio;
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
Bahia* Grid::Obtener_nodo(int ID, int peso) 
{
	Bahia* temp = inicio;
	while ((temp) && (temp->tipo_producto != ID)&& (temp->peso_maximo != peso))
	{
		temp = temp->siguiente;
	}
	return temp;
}

Bahia* Grid::Elnodo(int posicion)
{
	Bahia * temp = inicio;
    int index = 0;
    while (temp && index < posicion)
	{
		temp = temp->siguiente;
		index++;
	}
	return temp;
}

int Grid::Obtener_valor(int posicion) 
{
	if ((posicion >= 0) && (posicion < contador)) 
	{
		Bahia* temp = inicio;
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

bool Grid::Vacio()
{
	return contador == 0;
}
