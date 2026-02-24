#include <iostream>
#include <string>
using namespace std;

class Persona {
protected: // El símbolo # en el diagrama
    string cui;
    string nombres;
    string apellidos;
    string direccion;
    int telefono;
    string fecha_nacimiento;
    bool genero;

public: // El símbolo + en el diagrama
    Persona() {}
    Persona(string _cui, string nom, string ape, string dir, int tel, string fn, bool gen) {
        cui = _cui;
        nombres = nom;
        apellidos = ape;
        direccion = dir;
        telefono = tel;
        fecha_nacimiento = fn;
        genero = gen;
    }

    // Métodos solicitados en el diagrama
    void crear() { cout << "Registro Creado." << endl; }
    void leer() { 
        cout << "CUI: " << cui << " | Nombre: " << nombres << " " << apellidos << endl;
    }
    void actualizar() { cout << "Registro Actualizado." << endl; }
    void borrar() { cout << "Registro Borrado." << endl; }
};

