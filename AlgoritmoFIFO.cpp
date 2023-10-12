//
// Created by ist on 12/10/23.
//

#include "AlgoritmoFIFO.h"


AlgoritmoFIFO::AlgoritmoFIFO(std::vector<int> entradas, int tamanhoTabela) {
    this->entradas = entradas;
    this->tamanhoTabela = tamanhoTabela;
    this->numFaltasPagina = 0;
}

void AlgoritmoFIFO::executarAlgoritmo() {
    for (int i : entradas) {
        if (!tabelaPaginas.count(i)) { // se i não estiver na tabela, count == 0
            numFaltasPagina++;
            if (tabelaPaginas.size() == tamanhoTabela) {
                tabelaPaginas.erase(ordemElementosTabela.front());
                ordemElementosTabela.pop_front();
            }
            tabelaPaginas.insert(i);
            ordemElementosTabela.push_back(i);
        }
    }
}
