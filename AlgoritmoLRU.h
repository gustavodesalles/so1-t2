//
// Created by ist on 13/10/23.
//

#ifndef SO1_T2_ALGORITMOLRU_H
#define SO1_T2_ALGORITMOLRU_H


#include "Algoritmo.h"

class AlgoritmoLRU : public Algoritmo {
public:
    AlgoritmoLRU(std::vector<int> entradas, int tamanhoTabela);

    void executarAlgoritmo() override;
};


#endif //SO1_T2_ALGORITMOLRU_H
