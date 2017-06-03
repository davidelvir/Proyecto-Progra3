#inclu	de "Humano			.				h"	

Humano::Humano(string Nombre, double Vida, double Defensa, double Ataque,string Reputacion,int Nivel,int Experiencia,int Bolas,string estiloCabello, string Color, double Dinero){
    this->Nombre=Nombre;
    this->Vida=Vida;
    this->Defensa=Defensa;
    this->Ataque=Ataque;
    this->Reputacion=Reputacion;
    this->Nivel=Nivel;
    this->Experiencia=Experiencia;
    this->Bolas=Bolas;
    this->estiloCabello=estiloCabello;
    this->Stamina=true;
    this->Color=Color;
    this->Dinero=Dinero;
}

Humano::Humano(){

	this->Vida=300;
	this->Defensa=150;
	this->Ataque=200;
	this->Stamina=true;
	this->Dinero=0;
	this->Nivel=1;
	this->Experiencia=0;
	this->Reputacion=0;
	this->Bolas=0;

}

void Humano::setColor(string Color){
   this-> Color=Color;
}

string Humano::getColor(){
   return Color;
}