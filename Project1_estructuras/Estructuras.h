#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
struct nodo
{
	string pagina;
	float pageRank;
	struct nodo* sig;
	struct nodo* ady;
};

struct arista {
	struct nodo* destino;
	struct arista* sig;
};