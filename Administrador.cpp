#include "Administrador.h"
#include "Persona.h"
#include "Jugador.h";

Administrador::Administrador(string Nombre,string Username,string Password,int Edad,string Carrera){

	this->Nombre=Nombre;
    this->Username=Username;
    this->Password=Password;
    this->Edad=Edad;
    this->Carrera=Carrera;

}

Administrador::Administrador(){


}

void EliminarUsuario(vector<Jugador*> jugadores){
	//Falta crear aqui metodo para eliminar un solo usuario

}

void AgregarUsuario(vector <Jugador*> jugadores){
	//falta crea metodo para agregar un jugador;


}


void AutoDestruir(vector <Jugador*> jugadores){
	//falta aqui crear el metodo para chingar todo


}
















