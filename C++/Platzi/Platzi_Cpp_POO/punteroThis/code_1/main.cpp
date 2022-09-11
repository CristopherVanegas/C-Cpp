#include <iostream>
#include <string>

using namespace std;

class Persona {
private:    // Para que solo se puedan acceder en las funciones de la clase.
    string nombre;
    int edad;

// Para que puedan llamarse publicamente los métodos de la clase.
public:
    // Constructor -> Necesita llevar como nombre el nombre de la clase y no devolver un tipo de datos en específico.
    Persona(string nombre, int edad){
        // El puntero ' this ' me permite evitar una ambigüedad para el compilador. Especifico con ' this ' la variable de la clase y no la que se pasa por el constructor
        this -> nombre = nombre;
        this -> edad = edad;
    }

    // Destructor -> No posee parametros y se agrega antes el signo ' ~ ' para indicar que su función es destruir. 
    ~Persona() {
        cout << "Destructor" << endl;
    }

    // Returna la "indentidad o entidad" específica - Por eso se retorna un puntero "this"
    // Por lo que devuelve un "this" se debe indicar el return con ' * ' y se debe indicar que la función devuelve un valor de 'dirección de memoria' así que se usa '&'
    // Por último se debe hacer " referencia " hacia el tipo de función que se desea retornar. 
    // Por lo visto esto solo se puede hacer variables de tipo ' void '.
    Persona &establecerNombre(string nombre) {
        // Estable el string nombre de la clase por el nombre que se pasa como argumento al metodo establecerNombre();
        this -> nombre = nombre;
        return *this;
    }

    Persona &establecerEdad(int edad) {
        // Establece el entero edad de la clase como el entero edad que se pasa el argumento del metodo establecerEdad();
        this -> edad = edad;
        return *this;
    }
    
    // Método saludar.
    void saludar() {
        cout << "Mi nombre es: "<< nombre << endl;
        cout << "Y mi edad: " << edad << endl;
    }
};

int main() { 
    system("clear");
    Persona *p = new Persona("Diana", 10);  // -> puntero creado a partir de la clase y envia determinados argumentos a la función.
    /* inaccessible*/
    //p->nombre;

    // This line lets me to do what two lines of code could had done.
    // Basically, It's concatenate due to the fact it's with a pointer.
    // Dynamic Storage. 

    //delete p;
    p->establecerNombre("Isa").establecerEdad(21);
    p->saludar();
    //delete p->nombre; // This cannot be done by ' delete ' due to the fact, this only deletes objects... not variables.
    //delete p->edad;
}