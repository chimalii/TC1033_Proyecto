#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Perro{

    // Atributos
    private:
        string nombre_perro, raza;
        float edad_perro;
        bool sextuple, desparacitacion;

    // Métodos
    public:
        
        // Inicialización del constructor con datos del perro
        Perro(): nombre_perro (""), raza (""), edad_perro (0.0), sextuple(false), desparacitacion(false) {};
        Perro(string nom_pe, string raz, float ed_pe, bool sext, bool desp):
            nombre_perro(nom_pe), raza(raz), edad_perro(ed_pe), sextuple(sext), desparacitacion(desp) {};

        // Getters
        string get_nomperro();
        string get_raza();
        float get_edperro();
        bool get_sext();
        bool get_desp(); 

        // Funciones adicionales
        string toString();

};

string Perro::get_nomperro(){
    return nombre_perro;
}

string Perro::get_raza(){
    return raza;
}

float Perro::get_edperro(){
    return edad_perro;
}

bool Perro::get_sext(){
    return sextuple;
}

bool Perro::get_desp(){
    return desparacitacion;
}

string Perro::toString(){
    stringstream aux;
    aux << "========= Datos Perro =========" << "\n" << "Nombre: " << nombre_perro
    << " / " << "Raza: " << raza << " / " << "Edad: " << edad_perro << "\n"
    << "Vacunacion: Sextuple --> " << sextuple << " / " << "Desparacitacion --> "
    << desparacitacion << "\n";
    return aux.str();
}