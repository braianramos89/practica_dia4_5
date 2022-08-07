#ifndef TEMPLATECPP_ALUMNO_H
#define TEMPLATECPP_ALUMNO_H

#include <iostream>
#include "Persona.h"

using namespace std;

class Alumno : public Persona{

private:
    string cuatrimestre ;
    int nota;

public:
    Alumno(string , string , string , int);
    ~Alumno();
    void mostrar();
    bool promo();
    bool calif();
};


#endif //TEMPLATECPP_ALUMNO_H
