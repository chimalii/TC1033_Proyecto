#include <iostream>
#include <string>
#include <sstream>
#include "perro.h"

using namespace std;

class Inscripcion{

    //Atributos
    private:
        string nombre, apellido_1, apellido_2, genero;
        int edad;
        Perro datos_perro;

    //Métodos
    public:

        // Inicialización del constructor con datos de participante
        Inscripcion(): nombre (""), apellido_1 (""), apellido_2 (""), genero (""), edad (0) {}
        Inscripcion(string nom, string apel_1, string apel_2, string gen, int ed): 
          nombre (nom), apellido_1(apel_1), apellido_2(apel_2), genero(gen), edad(ed) {}

        // Getters y setters
        string get_nombre();
        string get_apellido1();
        string get_apellido2();
        string get_genero();
        int get_edad(); 
        string get_datospe();

        // Funciones adicionales
        string toString();

};

string Inscripcion::get_nombre(){
    return nombre;
}

string Inscripcion::get_apellido1(){
    return apellido_1;
}

string Inscripcion::get_apellido2(){
    return apellido_2;
}

string Inscripcion::get_genero(){
    return genero;
}

int Inscripcion::get_edad(){
    return edad;
}

string Inscripcion::get_datospe(){
    return datos_perro.toString();
}

string Inscripcion:: toString(){
    stringstream aux;
    aux << "Nombre: " << nombre << " " << apellido_1 << " " << apellido_2 << "\n"
    << "Genero: " << genero << " / " << "Edad: " << edad << "\n";
    return aux.str();
}

