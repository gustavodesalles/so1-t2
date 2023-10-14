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
    for (int i = 0; i < entradas.size(); i++) {
        if (!tabelaPaginas.count(entradas[i])) {
            numFaltasPagina++;
            if (tabelaPaginas.size() == tamanhoTabela) {
                int paginaARemover = preverPaginaMudar(i);
                tabelaPaginas.erase(paginaARemover);
                ordemElementosTabela.remove(paginaARemover);
            }
            tabelaPaginas.insert(entradas[i]);
            ordemElementosTabela.push_back(entradas[i]);
        }
    }
}

int AlgoritmoOPT::preverPaginaMudar(int i) {
    int paginaMenosRecente, indiceMenosRecente = i;
    for (int k : ordemElementosTabela) {
        int j;
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
    return paginaMenosRecente;
}
