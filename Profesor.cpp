//
// Created by braian on 07/08/2022.
//

#include "Profesor.h"

Profesor::Profesor(string nombre, string apellido, string despacho) : Persona(nombre,apellido){

    this->despacho = despacho;
}
Profesor::~Profesor(){};


void Profesor::mostrar(){
    Persona::mostrar();
    cout<<"Despacho: "<<this->despacho<<endl;
}