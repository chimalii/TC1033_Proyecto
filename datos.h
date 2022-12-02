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

        void set_nom();
        void set_gen();
        void set_ed();

        // Funciones adicionales
        string toString();
};

void Participante::set_nom(){
    cout << "Sobre el PARTICIPANTE, ingresa lo solicitado." << "\n";
    cout << "Nombre completo: ";
    getline(cin, nombre);
}

void Participante::set_gen(){
    cout << "Genero: (Masculino/Femenino) ";
    cin >> genero;
}
void Participante::set_ed(){
    cout << "Edad: ";
    cin >> edad; cout << "\n";
}

string Participante::get_nom(){
    return nombre;
}

string Participante::get_gen(){
    return genero;
}

int Participante::get_ed(){
    return edad;
}

string Participante:: toString(){
    stringstream aux;
    aux << "========= Datos Participante =========" << "\n"
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
    aux1 << "========= Datos Perro =========" << "\n" << "Nombre: " << nombre_perro
    << " / " << "Raza: " << raza << " / " << "Edad: " << edad_perro << "\n"
    << "Vacunacion: Sextuple --> " << sextuple << " / " << "Desparacitacion --> "
    << desparacitacion;
    return aux1.str();
}

class Carrera{

  // Atributos
    private: 
        string modalidad, num_comp, afiliacion;     
  
  // Métodos  
    public:
        Carrera(): modalidad (""), num_comp(""), afiliacion("") {} 
        Carrera(string mod, string comp, string afil): modalidad(mod), num_comp (comp), afiliacion(afil)  {};

  // Getters y setters 
    void set_mod();
    void set_num();
    void set_afil();

    string get_mod();
    string get_num();
    string get_afil();
    
  // Funciones adicionales
    string imprime_DID();

};

void Carrera::set_mod(){
    cout << "Sobre MODALIDAD, ingresa lo solicitado." << "\n";
    cout << "Modalidad: ";
    cin >> modalidad;
}

void Carrera::set_num(){
    cout << "Numero de competidor: ";
    cin >> num_comp; cout << "\n";
}

void Carrera::set_afil(){
    afiliacion = num_comp[0];
}

string Carrera::get_mod(){
    return modalidad;
}

string Carrera::get_num(){
    return num_comp;
}

string Carrera::get_afil(){
    string DID;
    if (afiliacion == "0") {DID = "No tiene DID"; afiliacion = DID;}
    else {DID = "Tiene DID"; afiliacion = DID;}
    return afiliacion;
}

string Carrera::imprime_DID(){
    stringstream aux2;
    aux2 << "========= Datos Modalidad =========" << "\n"
    << "Modalidad: " << modalidad << "\n"
    << "Numero de competidor: " << num_comp << " / " << afiliacion;
    return aux2.str();
}
