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
    Vivienda* izq; Vivienda* arriba;
    Vivienda(bool alarma, bool perro, int valor);

        bool getAlarma() const {
            return alarma;
        }

        void setAlarma(bool alarma) {
            this->alarma = alarma;
        }

        bool getPerro() const {
            return perro;
        }

        void setPerro(bool perro) {
            this->perro = perro;
        }

        int getValor() const {
            return valor;
        }

        void setValor(int valor) {
            this->valor = valor;
        }
};

#endif //TALLER1_ESTRUCTURA_DE_DATOS_VIVIENDA_H