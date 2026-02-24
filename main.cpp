#include "Docente.cpp"
#include "Estudiante.cpp"
#include <iostream>

using namespace std;

int main() {
    // Variables generales para Persona
    string nom, ape, dir, f_nac, cui;
    int tel, opcion;
    bool gen;

    cout << "--- SISTEMA DE REGISTRO (HERENCIA) ---" << endl;
    cout << "1. Registrar Docente" << endl;
    cout << "2. Registrar Estudiante" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;
    cin.ignore(); // Limpiar el buffer

    // Pedir datos comunes de Persona
    cout << "\n--- Ingrese Datos Personales ---" << endl;
    cout << "Nombres: "; getline(cin, nom);
    cout << "Apellidos: "; getline(cin, ape);
    cout << "Direccion: "; getline(cin, dir);
    cout << "Telefono: "; cin >> tel;
    cout << "CUI: "; cin >> cui;
    cout << "Fecha Nacimiento: "; cin >> f_nac;
    cout << "Genero (1:M / 0:F): "; cin >> gen;
    cin.ignore();

    if (opcion == 1) {
        // Datos específicos de Docente
        string cod, nit, prof;
        float sal;
        
        cout << "\n--- Datos del Docente ---" << endl;
        cout << "Codigo de Docente: "; cin >> cod;
        cout << "NIT: "; cin >> nit;
        cout << "Salario: "; cin >> sal;
        cin.ignore();
        cout << "Profesion: "; getline(cin, prof);

        // Instanciar Docente
        Docente d = Docente(nom, ape, dir, tel, f_nac, cui, gen, cod, nit, sal, prof);
        d.mostrar();
        
        // Ejemplo de uso de Setter
        cout << "\nActualizando salario del docente..." << endl;
        d.setSalario(sal + 500); // Bono de ejemplo
        cout << "Nuevo Salario: Q" << d.getSalario() << endl;

    } else if (opcion == 2) {
        // Datos específicos de Estudiante
        string carn;
        
        cout << "\n--- Datos del Estudiante ---" << endl;
        cout << "Carnet: "; cin >> carn;

        // Instanciar Estudiante
        Estudiante e = Estudiante(nom, ape, dir, tel, f_nac, cui, gen, carn);
        e.mostrar();

        // Ejemplo de uso de Getter
        cout << "\nVerificando carnet registrado: " << e.getCarnet() << endl;

    } else {
        cout << "Opcion no valida." << endl;
    }

    return 0;
}

