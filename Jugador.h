#include <iostream>
#include <string>
#include "Personaje.h"
#include "Persona.h"

using namespace std;

#ifndef JUGADOR_H
#define JUGADOR_H
class Jugador{
    protected:
	Personaje personaje;
    public:
        Jugador();
        Jugador();
		Personaje getPersonaje();
		void setPersonaje(Personaje personaje);
};
#endif
