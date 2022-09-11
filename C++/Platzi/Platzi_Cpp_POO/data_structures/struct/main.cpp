// This code demonstrate how "struct" works.

#include<iostream>
#include<string>

struct Variable {
    int A;
    std::string name;
};

enum Persona { nombre = 64, age };

int main() {
    system("clear");
    Variable v = Variable();
    v.A = 1;
    Persona n = nombre;

    
    std::cout << v.A << std::endl;
    std::cout << (char)n << std::endl;
    return 0;
}