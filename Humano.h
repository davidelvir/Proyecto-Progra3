#include <iostream>
#include <string>
#include "Personaje.h"

using namespace std;

#ifndef HUMANO_H
#define HUMANO_H

class Humano:public Personaje{

    protected:

	string Color;

    public:
        Jugador(string,double,double,double,string,int,string);
        Jugador();
		Personaje getPersonaje();
		void setPersonaje(Personaje personaje);



};
#endif
