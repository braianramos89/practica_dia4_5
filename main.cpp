/*Crea una clase Persona (con nombre y apellidos como atributos)
 y dos clases que hereden de Persona: Profesor (con atributo adicional String despacho)
 y Alumno (con atributo adicional String cuatrimestre).
 (Por simplicidad, para nuestro ejercicio asumimos que un alumno sólo está matriculado
 de asignaturas de un mismo cuatrimestre.)
Las tres clases sobrescribirán el método toString() de tal forma que las clases hijas
 invoquen el método de la clase madre. El toString() de Persona mostrará “apellido, nombre”,
 el de Alumno lo mismo seguido del cuatrimestre (por ejemplo “ (Semester: Q1B)”
 y el de Profesor seguido de su despacho (por ejemplo “ (Office: D6-212)”.
Las tres clases tendrán como mínimo el constructor y el toString(),
 pero podéis añadir todos los métodos que queráis.
Finalmente, implementad una clase tester que cree e imprima objetos de las tres clases,
 para que se vea que en cada caso se invoca el toString que corresponde
*/
#include <iostream>

int main() {

    Alumno alumno1("Nico","Vale","Informatica",3);

    Profesor profesor1("Andres","Vegueta","Finanzas");

    //alumno1.mostrar();
    //profesor1.mostrar();
    if (alumno1.calif()){
        alumno1.promo();
    }else {
        cout<<"No aprobo verga rinde coloquio!!"<<endl;
    }


    return 0;
}
