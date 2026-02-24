#include "docente.cpp"
#include "estudiante.cpp"
#include <iostream>

using namespace std;

int main() {
    // Ejemplo de Docente
    docente prof("123", "Carlos", "Mendez", "Guatemala", 5555, "10/10/1985", true, "DOC-01", "12345-K", 7500.00, "Ingeniero");
    prof.mostrar();

    // Ejemplo de Estudiante
    estudiante alumno("456", "Ana", "Lucia", "Antigua", 4444, "20/05/2005", false, "2024-005");
    alumno.mostrar();

    return 0;
}

