//
// Created by braian on 07/08/2022.
//

#include "Persona.h"


Persona ::Persona (string nombre, string apellido ){

    this->nombre = nombre;
    this->apellido = apellido;

}

Persona::~Persona(){}

void Persona::mostrar(){

    cout<<"Nombre: "<<this->nombre<<endl;
    cout<<"Apellido: "<<this->apellido<<endl;

}