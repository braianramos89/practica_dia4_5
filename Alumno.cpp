//
// Created by braian on 07/08/2022.
//

#include "Alumno.h"
#include <iostream>

using namespace std;

Alumno ::Alumno(string nombre, string apellido, string cuatrimestre, int nota) : Persona(nombre, apellido) {

    this->cuatrimestre = cuatrimestre;
    this->nota = nota;
}

Alumno :: ~Alumno(){};

void Alumno::mostrar(){
    Persona::mostrar();
    cout<<"Cuatrimestre: "<<this->cuatrimestre<<endl;
    cout<<"Nota: "<<this->nota<<endl;

}
bool Alumno::promo() {

    if (this->nota >= 8){
        cout<<"Promociono"<<endl;
        return true;
    }else{
        cout<<"No promociona"<<endl;
        return false;
    }



}
bool Alumno::calif(){
    if(this->nota >= 4){
        cout<<"Aprobo"<<endl;
        return true;
    }else {
        cout<<"Desaprobo"<<endl;
        return false;
    }
}