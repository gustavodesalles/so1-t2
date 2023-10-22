//
// Created by ist on 14/10/23.
//

#include "AlgoritmoOPT.h"

AlgoritmoOPT::AlgoritmoOPT(std::vector<int> entradas, int tamanhoTabela) {
    this->entradas = entradas;
    this->tamanhoTabela = tamanhoTabela;
    this->numFaltasPagina = 0;
}

void AlgoritmoOPT::executarAlgoritmo() {
    for (std::size_t i = 0; i < entradas.size(); i++) {
        if (!tabelaPaginas.count(entradas[i])) {
            numFaltasPagina++;
            if (tabelaPaginas.size() == tamanhoTabela) {
                int paginaARemover = preverPaginaMudar((int) i);
                if (paginaARemover != -1) {
                    tabelaPaginas.erase(paginaARemover);
                    ordemElementosTabela.remove(paginaARemover);
                }
            }
            tabelaPaginas.insert(entradas[i]);
            ordemElementosTabela.push_back(entradas[i]);
        }
    }
}

int AlgoritmoOPT::preverPaginaMudar(int i) {
    std::size_t paginaMenosRecente = -1, indiceMenosRecente = i;
    for (int k : ordemElementosTabela) {
        std::size_t j;
        for (j = i; j < entradas.size(); ++j) {
            if (entradas[j] == k) {
                if (j > indiceMenosRecente) {
                    indiceMenosRecente = j;
                    paginaMenosRecente = entradas[j];
                }
            break;
            }
        }
        if (j == entradas.size()) return k;
    }
    return (int) paginaMenosRecente;
}
