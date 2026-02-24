#include "persona.cpp"
#include <iostream>
using namespace std;

class docente : public persona { // Agregamos 'public' para acceder a los métodos de persona
private:
    string codigo, nit, profesion;
    float salario;

public:
    docente() {}

    // Constructor siguiendo el estilo de tu imagen
    docente(string _cui, string nom, string ape, string dir, int tel, string fn, bool gen, 
            string cod, string n, float sal, string prof) : persona(_cui, nom, ape, dir, tel, fn, gen) {
        codigo = cod;
        nit = n;
        salario = sal;
        profesion = prof;
    }

    void mostrar() {
        cout << "________________________________" << endl;
        cout << "DOCENTE: " << codigo << ", " << nombres << " " << apellidos << ", " << profesion << ", Q" << salario << endl;
    }
};

