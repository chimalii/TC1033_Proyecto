#ifndef INSCRIPCION_H_
#define INSCRIPCION_H_

#include <iostream>
#include <string>
#include <sstream>
#include "datos.h"
#include "carrera.h"

using namespace std;

class Inscripcion{

    //Atributos
    private:
        Participante datos_participante;
        Perro datos_perro;
        Canicross datos_carrera;


    //Métodos
    public:
        Inscripcion();
        void dat_par();
        void dat_pe();
        void dat_mod();
        string imprime_datospar();
        string imprime_datospe();
        string imprime_datosmod();
        string imprime_datoscos();

};

void Inscripcion::dat_par(){
    cout << "Sobre el PARTICIPANTE, ingresa lo solicitado." << "\n";
    datos_participante.get_nom();
    datos_participante.get_gen();
    datos_participante.get_ed();
}

void Inscripcion::dat_pe(){
    
    datos_perro.set_datospe();
}

void Inscripcion::dat_mod(){
    int MOD;
    cout << "Sobre MODALIDAD, ingresa lo solicitado." << "\n";
    cout << "   1. Canicross (Solo correr con tu mascota)." << "\n";
    cout << "   2. Bikejoring (Andar en bicicleta con tu mascota)." << "\n";
    cout << "   3. Scotter (Andar en scooter con tu mascota)." << "\n";
    datos_carrera.get_mod();
    datos_carrera.get_num();
    datos_carrera.get_afil();
    datos_carrera.calc_cpc();
}



string Inscripcion::imprime_datospe(){
    return datos_perro.toString();
}

string Inscripcion::imprime_datospar(){
    return datos_participante.toString();
}

string Inscripcion::imprime_datosmod(){
    return datos_carrera.imprime_DID();
}

string Inscripcion::imprime_datoscos(){
    return datos_carrera.toString();
}

#endif
