//
// Created by amnesia on 24-10-25.
//

#ifndef TALLER1_ESTRUCTURA_DE_DATOS_VIVIENDA_H
#define TALLER1_ESTRUCTURA_DE_DATOS_VIVIENDA_H
#include <iostream>
#include <string>

using namespace std;

class Vivienda {
    bool alarma, perro;
    int valor;

public:
    int fila, columna;
    Vivienda *izq; Vivienda *arriba;
    Vivienda(bool alarma, bool perro, int valor);
};

#endif //TALLER1_ESTRUCTURA_DE_DATOS_VIVIENDA_H