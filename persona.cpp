#include <iostream>
using namespace std;

class Persona {
    // Atributos protegidos: Accesibles para esta clase y sus clases hijas
    protected: 
        string cui, nombres, apellidos, direccion, fecha_nacimiento;
        int telefono;
        bool genero;

    // Métodos
    public:
        // Constructor vacío
        Persona() {
        }

        // Constructor con parámetros para inicializar todos los datos
        Persona(string nom, string ape, string dir, int tel, string f_nac, string _cui, bool gen) {
            nombres = nom;
            apellidos = ape;
            direccion = dir;
            telefono = tel;
            fecha_nacimiento = f_nac;
            cui = _cui;
            genero = gen;
        }

        // Métodos CRUD definidos en el diagrama
        void crear() {
            cout << "Registro creado en la base de datos." << endl;
        }

        void leer() {
            cout << "Leyendo datos generales..." << endl;
        }

        void actualizar() {
            cout << "Registro actualizado exitosamente." << endl;
        }

        void borrar() {
            cout << "Registro eliminado." << endl;
        }
};


