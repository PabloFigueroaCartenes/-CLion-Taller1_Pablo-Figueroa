//
// Created by amnesia on 24-10-25.
//

#ifndef TALLER1_ESTRUCTURA_DE_DATOS_CIUDAD_H
#define TALLER1_ESTRUCTURA_DE_DATOS_CIUDAD_H
#include "Vivienda.h"
#include <vector>

class Ciudad {
    int matriz_x; int matriz_y;
    Vivienda* acol; Vivienda* arow;
    Ciudad(int matriz_x, int matriz_y);

    ~Ciudad();
    void insertarDespuesDe(int fila, int columna, Vivienda* casa);

    void mostrarCiudad();

};
#endif //TALLER1_ESTRUCTURA_DE_DATOS_CIUDAD_H