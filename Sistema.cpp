//
// Created by amnesia on 24-10-25.
//
#include "Sistema.h"

Sistema::Sistema(string nombreDelArchivo) {
    vector<int> &filaColumna = obtenerFilaYColumnaDelArchivo(nombreDelArchivo);
    ciudad = new Ciudad(filaColumna[0], filaColumna[1]);

};


vector<string>* Sistema::leerArchivo(string nombreDelArchivo) {
        string filename = nombreDelArchivo;
        ifstream file(filename);

        if (!file.is_open()) {
            cerr << "Could not open the file " << filename << std::endl;
            return 1;
        }
        string line;
        vector<string> tokens;

        while (getline(file, line)) {
            stringstream ss(line);
            string item;

            while (getline(ss, item, ',')) {
                tokens.push_back(item);
            }
            // Print the tokens
            for (const auto& token : tokens) {
                std::cout << token << " ";
            }
            std::cout << std::endl;
        }
        file.close();
        return &tokens;
}


vector<int>* Sistema::obtenerFilaYColumnaDelArchivo(string nombreDelArchivo) {
    string filename = nombreDelArchivo;
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Could not open the file " << filename << std::endl;
        return 1;
    }
    string line;
    vector<int> fila0columna1; fila0columna1[0] = 0; fila0columna1[1] = 0;

    while (getline(file, line)) {
        stringstream ss(line);
        string item;
        vector<string> tokens;

        while (getline(ss, item, ',')) {
            tokens.push_back(item);
        }
        // Print the tokens
        if ( stoi(tokens[0]) > fila0columna1[0]) {
            fila0columna1[0] = stoi(tokens[0]);
        }
        if ( stoi(tokens[1]) > fila0columna1[1] ) {
            fila0columna1[1] = stoi(tokens[1]);
        }
    }
    file.close();
    return &fila0columna1;
}