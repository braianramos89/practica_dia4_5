
#ifndef TEMPLATECPP_PERSONA_H
#define TEMPLATECPP_PERSONA_H
#include <iostream>

using namespace std;


class Persona{

private:

    string nombre;
    string apellido;

public:
    Persona(string nombre,string apellido);

    ~Persona();
    virtual void mostrar(); // polimorfismo
};






#endif //TEMPLATECPP_PERSONA_H
