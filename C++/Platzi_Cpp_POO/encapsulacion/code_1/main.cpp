#include <iostream>
#include <string>

using namespace std;

class Persona {
private:    // Para que solo se puedan acceder en las funciones de la clase.
    string nombre;
    int edad;

public:     // Para que puedan llamarse publicamente los métodos de la clase.
    Persona(string n, int e) : nombre(n), edad(e) {}    // Constructor -> Necesita llevar como nombre el nombre de la clase y no devolver un tipo de datos en específico.

    ~Persona() {    // Destructor -> No posee parametros y se agrega antes el signo ' ~ ' para indicar que su función es destruir. 
        cout << "Destructor" << endl;
    }
    
    void saludar() {    // Método saludar. 
        cout << nombre << endl;
    }
};

int main() { 
    system("clear");
    Persona *p = new Persona("Diana", 10);  // -> puntero creado a partir de la clase y envia determinados argumentos a la función.
    Persona *p2 = new Persona("Ximena", 15);    // -> segungo puntero creado.
    //p->nombre;  // inaccessible

    p->saludar();
    
    delete p2;
    p2->saludar();
}