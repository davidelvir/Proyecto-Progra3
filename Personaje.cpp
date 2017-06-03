#include "Personaje.h"
#include "Item.h"
#include <string>
#include <vector>

using namespace std;

string Personaje::getNombre(){
	return Nombre;
}
void Personaje::setNombre(string pNombre){
	Nombre = pNombre
}

double Personaje::getVida(){
	return Vida;
}
void Personaje::setVida(double pVida){
	Vida = pVida;
}

double Personaje::getDefensa(){
	return Defensa;
}
void Personaje::setDefensa(double pDefensa){
	Defensa = pDefensa;
}

double Personaje::getAtaque(){
	return Ataque;
}
void Personaje::setAtaque(double pAtaque){
	Ataque = pAtaque;
}

string Personaje::getReputacion(){
	return Reputacion;
}
void Personaje::setReputacion(string pReputacion){
	Reputacion = pReputacion;
}

int Personaje::getNivel(){
	return Nivel;
}
void Personaje::setNivel(pNivel){
	Nivel = pNivel;
}