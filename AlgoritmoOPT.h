//
// Created by ist on 14/10/23.
//

#ifndef SO1_T2_ALGORITMOOPT_H
#define SO1_T2_ALGORITMOOPT_H


#include "Algoritmo.h"

class AlgoritmoOPT : public Algoritmo {
public:
    AlgoritmoOPT(std::vector<int> entradas, int tamanhoTabela);

    void executarAlgoritmo() override;

    int preverPaginaMudar(int i);
};


#endif //SO1_T2_ALGORITMOOPT_H
