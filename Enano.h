#include <iostream>
#include <string>
#include "Personaje.h"

using namespace std;

#ifndef ENANO_H
#define ENANO_H
class Enano: public Personaje{
    protected:

        String ColorBarba;
        double TamañoBarba;

    public:
        
        Enano(string, double,double,double,string,int,int,int,string,double, string, double);
        Enano();


        double getTamañoBarba();
        void setTamañoBarba(double);

        string getColorBarba();
        void setColorBarba(string);



};
#endif
