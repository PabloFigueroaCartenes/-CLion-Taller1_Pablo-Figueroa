//
// Created by amnesia on 24-10-25.
//
#include "Ciudad.h"

Ciudad::Ciudad(int matriz_x, int matriz_y) {
    this->matriz_x = matriz_x;
    this->matriz_y = matriz_y;
    Vivienda* acol[matriz_x]; Vivienda* arow[matriz_y];

    for (int i = 1; i <= matriz_x; i++) {
        acol[i]->izq = nullptr;
        acol[i]->fila = 0;
    }
    for (int i = 1; i <= matriz_y; i++) {
        arow[i]->arriba = nullptr;
        arow[i]->columna = 0;
    }
}

void Ciudad::insertarDespuesDe(int fila, int columna, Vivienda* casa) {
    if ( fila == 0 || columna == 0 ) {
        cerr << "Error en la fila o columna" << endl;
    }

    if ( fila > columna ) {
        acol[]
    }

}
Ciudad::~Ciudad() {

}
