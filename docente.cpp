#include "Docente.cpp"
#include <iostream>

using namespace std;

int main() {
    string nom, ape, dir, f_nac, cui, cod, nit, prof;
    int tel;
    float sal;
    bool gen;

    cout << "--- Ingresar Datos del Docente ---" << endl;
    cout << "Nombres: "; cin >> nom;
    cout << "Apellidos: "; cin >> ape;
    cout << "Direccion: "; cin >> dir;
    cout << "Telefono: "; cin >> tel;
    cout << "Fecha Nacimiento: "; cin >> f_nac;
    cout << "CUI: "; cin >> cui;
    cout << "Genero (1:M / 0:F): "; cin >> gen;
    cout << "Codigo Docente: "; cin >> cod;
    cout << "NIT: "; cin >> nit;
    cout << "Salario: "; cin >> sal;
    cout << "Profesion: "; cin >> prof;

    // Instanciar el objeto
    Docente obj = Docente(nom, ape, dir, tel, f_nac, cui, gen, cod, nit, sal, prof);
    
    // Mostrar datos iniciales
    obj.mostrar();

    // Ejemplo de uso de Setter para modificar el Salario
    cout << "\nModificar Salario: "; cin >> sal;
    obj.setSalario(sal);
    
    // Mostrar dato actualizado usando Getter
    cout << "Nuevo Salario actualizado: Q" << obj.getSalario() << endl;

    return 0;
}

