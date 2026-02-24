#include "persona.cpp"
#include <iostream>
using namespace std;

// Usa el nombre correcto de la clase base: Persona
class Estudiante : public Persona {
private:
    string carnet;

public:
    // Constructor vacío
    Estudiante() {}

    // Constructor con parámetros
    Estudiante(string _cui, string nom, string ape, string dir, int tel, string fn, bool gen, string car)
        : Persona(_cui, nom, ape, dir, tel, fn, gen), carnet(car) {}

    void mostrar() {
        cout << "________________________________" << endl;
        cout << "ESTUDIANTE: "
             << carnet << " | "
             << nombres << " " << apellidos << " | "
             << direccion << endl;
    }
};

