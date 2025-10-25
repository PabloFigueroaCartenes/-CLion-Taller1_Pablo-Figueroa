//
// Created by amnesia on 24-10-25.
//

#ifndef TALLER1_ESTRUCTURA_DE_DATOS_SISTEMA_H
#define TALLER1_ESTRUCTURA_DE_DATOS_SISTEMA_H
#include "Ciudad.h"
#include <fstream>
#include <sstream>


class Sistema {
    Ciudad* ciudad;
    Sistema(string nombreDelArchivo);
    vector<int>* obtenerFilaYColumnaDelArchivo(string nombreDelArchivo);
    vector<string>* leerArchivo(string nombreDelArchivo);


};
#endif //TALLER1_ESTRUCTURA_DE_DATOS_SISTEMA_H