#pragma once
#ifndef UtilidadesListaEnlazada_h
#define UtilidadesListaEnlazada_h

struct nodo {
	int numero_valorregistro;
	nodo *sig;
	nodo *ant;
	nodo()
	{
		sig = 0;
		ant = 0;
	}

};

class UtilidadesListaEnlazada {
public:
	static void InsertarFinal(nodo *&, int);
	static nodo ** CrearLista(int);
	static void OrdenarLista(nodo *);
	static void GuardarLista(nodo **, char*);
};

#endif // !UtilidadesListaEnlazada
