#pragma once
#include<fstream>
#include"Estructuras.h"
#include<list>

class grafo {
private:
	list<nodo>* nodos;
	list<arista>* aristas;
	list<nodo>::iterator itNodes;
	list<arista>::iterator itAristas;
public:
	grafo();
	~grafo();
	grafo(grafo&);
	list<nodo>* getNodos();
	list<arista>* getAristas();
	string toString();
	bool insertNodo(nodo*);
	bool insertaArista(nodo*, nodo*,arista*);
};