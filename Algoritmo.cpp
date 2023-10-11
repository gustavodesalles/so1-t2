//
// Created by ist on 10/10/23.
//

#include "Algoritmo.h"

const std::vector<int> &Algoritmo::getEntradas() const {
    return entradas;
}

void Algoritmo::setEntradas(const std::vector<int> &entradas) {
    Algoritmo::entradas = entradas;
}

const std::unordered_set<int> &Algoritmo::getTabelaPaginas() const {
    return tabelaPaginas;
}

void Algoritmo::setTabelaPaginas(const std::unordered_set<int> &tabelaPaginas) {
    Algoritmo::tabelaPaginas = tabelaPaginas;
}

const std::list<int> &Algoritmo::getOrdemElementosTabela() const {
    return ordemElementosTabela;
}

void Algoritmo::setOrdemElementosTabela(const std::list<int> &ordemElementosTabela) {
    Algoritmo::ordemElementosTabela = ordemElementosTabela;
}

int Algoritmo::getTamanhoTabela() const {
    return tamanhoTabela;
}

void Algoritmo::setTamanhoTabela(int tamanhoTabela) {
    Algoritmo::tamanhoTabela = tamanhoTabela;
}
