//
// Created by ist on 13/10/23.
//

#include "AlgoritmoLRU.h"

AlgoritmoLRU::AlgoritmoLRU(std::vector<int> entradas, int tamanhoTabela) {
    this->entradas = entradas;
    this->tamanhoTabela = tamanhoTabela;
    this->numFaltasPagina = 0;
}

void AlgoritmoLRU::executarAlgoritmo() {
    for (int i : entradas) {
        if (!tabelaPaginas.count(i)) { // se i não estiver na tabela, count == 0
            numFaltasPagina++;
            if (tabelaPaginas.size() == tamanhoTabela) {
                tabelaPaginas.erase(ordemElementosTabela.front());
                ordemElementosTabela.pop_front();
            }
            tabelaPaginas.insert(i);
            ordemElementosTabela.push_back(i);
        } else {
            ordemElementosTabela.remove(i);
            ordemElementosTabela.push_back(i); // mover i ao fim da lista de ordem (ver se há método melhor)
        }
    }
}
