#ifndef TEMPLATECPP_PROFESOR_H
#define TEMPLATECPP_PROFESOR_H
#include "Persona.h"

using namespace std;

class Profesor: public Persona{

private:
    string despacho;

public:
    Profesor(string , string, string despacho);
    ~Profesor();
    void mostrar();
};










#endif //TEMPLATECPP_PROFESOR_H
