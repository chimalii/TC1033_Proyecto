#ifndef DATOS_H_
#define DATOS_H_

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Participante{
    private:
       string nombre, genero;
       int edad;

    public:
       // Inicialización del constructor con datos de participante
        
        Participante(): nombre (""), genero (""), edad (0) {}
        Participante(string nom, string gen, int ed): 
          nombre (nom), genero(gen), edad(ed) {}

        // Getters y setters
        string get_nom();
        string get_gen();
        int get_ed();

        void set_nom(string);
        void set_gen(string);
        void set_ed(int);

        // Funciones adicionales
        string toString();
};

void Participante::set_nom(string nom){
    nombre = nom;

}

void Participante::set_gen(string gen){
    genero = gen;
}
void Participante::set_ed(int ed){
    edad = ed;
}

string Participante::get_nom(){
    cout << "Nombre completo: ";
    getline(cin, nombre);
    return nombre;
}

string Participante::get_gen(){
    cout << "Genero: (Masculino/Femenino) ";
    cin >> genero;
    return genero;
}

int Participante::get_ed(){
    cout << "Edad: ";
    cin >> edad; cout << "\n";
    return edad;
}

string Participante:: toString(){
    stringstream aux;
    aux << "========= DATOS PARTICIPANTE =========" << "\n"
    << "Nombre: " << nombre << "\n"
    << "Genero: " << genero << " / " << "Edad: " << edad;
    return aux.str();
}

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

        // Getters y setters

        void set_datospe();

        string get_nompe();
        string get_raza();
        float get_edpe();
        bool get_sext();
        bool get_desp();
        string toString(); 

        // Funciones adicionales

};

void Perro::set_datospe(){
    cout << "Sobre el PERRO, ingresa lo solicitado." << "\n";
    cout << "Nombre: "; cin >> nombre_perro;
    cout << "Raza: "; cin >> raza; 
    cout << "Edad: "; cin >> edad_perro;
    cout << "Vacunacion (1 = si / 0 = no)" << "\n"; 
    cout << "Sextuple --> "; cin >> sextuple;
    cout << "Desparacitacion --> "; cin >> desparacitacion; cout << "\n";
}

string Perro::get_nompe(){
    return nombre_perro;
}

string Perro::get_raza(){
    return raza;
}

float Perro::get_edpe(){
    return edad_perro;
}

bool Perro::get_sext(){
    return sextuple;
}

bool Perro::get_desp(){
    return desparacitacion;
}

string Perro::toString(){
    stringstream aux1;
    aux1 << "========= DATOS PERRO =========" << "\n" << "Nombre: " << nombre_perro
    << " / " << "Raza: " << raza << " / " << "Edad: " << edad_perro << "\n"
    << "Vacunacion: Sextuple --> " << sextuple << " / " << "Desparacitacion --> "
    << desparacitacion;
    return aux1.str();
}

#endif
