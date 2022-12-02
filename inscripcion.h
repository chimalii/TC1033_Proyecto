#include <iostream>
#include <string>
#include <sstream>
#include "datos.h"

using namespace std;

class Inscripcion{

    //Atributos
    private:
        Participante datos_participante;
        Perro datos_perro;
        Carrera datos_carrera;

    //Métodos
    public:
        void dat_par();
        void dat_pe();
        void dat_mod();
        string imprime_datospar();
        string imprime_datospe();
        string imprime_datosmod();

};

void Inscripcion::dat_par(){
    datos_participante.set_nom();
    datos_participante.set_gen();
    datos_participante.set_ed();
}

void Inscripcion::dat_pe(){
    datos_perro.set_datospe();
}

void Inscripcion::dat_mod(){
    datos_carrera.set_mod();
    datos_carrera.set_num();
    datos_carrera.set_afil();
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
