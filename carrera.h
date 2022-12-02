    #ifndef CARRERA_H_
    #define CARRERA_H_

    #include <iostream>
    #include <string>
    #include <sstream>

    using namespace std;

    class Carrera{

    // Atributos
        private: 
            int modalidad;
            string num_comp, afiliacion;    
   
    // Métodos  
        public:
            Carrera(): modalidad (0), num_comp(""), afiliacion("") {}
            Carrera(int mod, string comp, string afil): modalidad(mod), num_comp (comp), afiliacion(afil)  {};

    // Getters y setters
        void set_mod(int);
        void set_num(string);
        void set_afil(string);

        int get_mod();
        string get_num();
        string get_afil();
       
    // Funciones adicionales
        string imprime_DID();

    };

    void Carrera::set_mod(int mod){
        modalidad = mod;
    }

    void Carrera::set_num(string comp){
        num_comp = comp;
    }

    void Carrera::set_afil(string afil){
        afiliacion = afil;
    }

    int Carrera::get_mod(){
        cout << "Escribe el numero de la modalidad que desees inscribir: ";
        cin >> modalidad;
        return modalidad;
    }

    string Carrera::get_num(){
        cout << "Numero de competidor: ";
        cin >> num_comp; cout << "\n";
        return num_comp;
    }

    string Carrera::get_afil(){
        afiliacion = num_comp[0];
        string DID;
        if (afiliacion == "0") {
            DID = "No tiene DID";
            afiliacion = DID;}
        else {
            DID = "Tiene DID";
            afiliacion = DID;}
        return afiliacion;
    }

    string Carrera::imprime_DID(){
        stringstream aux2;
        aux2 << "========= DATOS MODALIDAD =========" << "\n"
        << "Modalidad: " << modalidad << "\n"
        << "Numero de competidor: " << num_comp << " / " << afiliacion;
        return aux2.str();
    }



    class Canicross: public Carrera{
        private:
            float cp_cani = 300.0;

        public:
            Canicross(): cp_cani(){};
            Canicross(int mod, string comp, string afil, float cp_c): Carrera(mod, comp, afil){
            cp_cani = cp_c;}

            float calc_cpc();
            string toString();
    };
   
    float Canicross::calc_cpc(){
        int DID;
        cout << "Digita el primer numero en numero de competidor --> ";
        cin >> DID;
        if (DID == 1){
                cp_cani = cp_cani * 0.8;
                return cp_cani;
            }
            else{
                return cp_cani;
            }
        }

    string Canicross::toString(){
        stringstream aux3;
        aux3 << "========= COSTO MODALIDAD =========" << "\n"
        << "Inscribiendo Canicross pagas " << cp_cani;
        return aux3.str();
    }

    class Bikejoring: public Carrera{
        private:
            float cp_bike = 500.0;
            int renta_equipo;

        public:
            Bikejoring(int mod, string comp, string afil, float cp_b, int renta): Carrera(mod, comp, afil){
            cp_bike = cp_b; renta_equipo = renta;};

            int get_renta();
            float calc_cpb();
            void calc_totb();
    };

    float Bikejoring::calc_cpb(){
        int DID;
        cout << "Digita el primer numero en numero de competidor --> ";
        cin >> DID;
        if (DID == 1){
                cp_bike = cp_bike * 0.8;
                return cp_bike;
            }
            else{
                return cp_bike;
            }
        }

    int Bikejoring::get_renta(){
        cout << "Deseas rentar equipo:" << "\n"
        << "    1. Si -----------------------------------------------> $150"  <<"\n"
        << "    2. Si, incluido mantenimiento en caso de percances --> $250" << "\n"
        << "    3. No." << "\n";
        cin >> renta_equipo;
        return renta_equipo;
    }

    void Bikejoring::calc_totb(){
        float costo_total;
        if (renta_equipo == 1){

        }
    }

    #endif
