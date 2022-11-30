#include <iostream>
#include "inscripcion.h"

using namespace std;

int main(){

    Inscripcion ejemplo("Luis", "Ruiz", "Rosas", "Masculino", 24);
    cout << ejemplo.toString() << "\n";

    Perro ejemplo_perro("Tizoc", "Husky", 2, true, true);
    cout << ejemplo_perro.toString() << "\n";

    Inscripcion ejemplo2("Mariana", "Medina", "Molina", "Fememino", 48);
    cout << ejemplo2.toString() << "\n";

    Perro ejemplo_perro2("Buzz", "Husky", 1.5, true, true);
    cout << ejemplo_perro2.toString() << "\n";

    return 0;
}