//
// Created by ist on 12/10/23.
//

#ifndef SO1_T2_ALGORITMOFIFO_H
#define SO1_T2_ALGORITMOFIFO_H


#include "Algoritmo.h"

class AlgoritmoFIFO : public Algoritmo {
public:
    AlgoritmoFIFO(std::vector<int> entradas, int tamanhoTabela);

    void executarAlgoritmo() override;
};


#endif //SO1_T2_ALGORITMOFIFO_H
