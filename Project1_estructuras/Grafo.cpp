#include "Grafo.h"

grafo::grafo()
{
}

grafo::~grafo()
{
}

grafo::grafo(grafo & g)
{
	nodos = g.getNodos();
	aristas = g.getAristas();
}

list<nodo>* grafo::getNodos()
{
	return nodos;
}

list<arista>* grafo::getAristas()
{
	return aristas;
}

string grafo::toString()
{
	return string();
}

bool grafo::insertNodo(nodo *)
{
	return false;
}

bool grafo::insertaArista(nodo *, nodo *, arista *)
{
	return false;
}
