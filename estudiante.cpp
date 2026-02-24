#include "persona.cpp"
#include <iostream>
using namespace std;

class estudiante : public persona {
private:
    string carnet;

public:
    estudiante() {}

    estudiante(string _cui, string nom, string ape, string dir, int tel, string fn, bool gen, string car) 
               : persona(_cui, nom, ape, dir, tel, fn, gen) {
        carnet = car;
    }

    void mostrar() {
        cout << "________________________________" << endl;
        cout << "ESTUDIANTE: " << carnet << ", " << nombres << " " << apellidos << ", " << direccion << endl;
    }
};

