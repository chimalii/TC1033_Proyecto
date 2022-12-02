#include <iostream>
#include "inscripcion.h"

using namespace std;

int main(){

    Inscripcion inscripcion;
    inscripcion.dat_par();
    inscripcion.dat_pe();
    inscripcion.dat_mod();
    
    cout << inscripcion.imprime_datospar() << "\n" << "\n";
    cout << inscripcion.imprime_datospe() << "\n" << "\n";
    cout << inscripcion.imprime_datosmod() << "\n" << "\n";

    return 0;
}
