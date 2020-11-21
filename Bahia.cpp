#include "Bahia.h"

Bahia::Bahia()
{
	siguiente = nullptr;
	anterior = nullptr;
	nueva_lista = new Lista();
};

Bahia::~Bahia()
{
	siguiente = nullptr;
	anterior = nullptr;
};
