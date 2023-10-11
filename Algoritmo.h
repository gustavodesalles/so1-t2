//
// Created by ist on 10/10/23.
//

#ifndef SO1_T2_ALGORITMO_H
#define SO1_T2_ALGORITMO_H


#include <vector>
#include <unordered_set>
#include <list>

class Algoritmo {
protected:
    std::vector<int> entradas;
    std::unordered_set<int> tabelaPaginas;
    std::list<int> ordemElementosTabela;
    int tamanhoTabela;
public:
    const std::vector<int> &getEntradas() const;

    void setEntradas(const std::vector<int> &entradas);

    const std::unordered_set<int> &getTabelaPaginas() const;

    void setTabelaPaginas(const std::unordered_set<int> &tabelaPaginas);

    const std::list<int> &getOrdemElementosTabela() const;

    void setOrdemElementosTabela(const std::list<int> &ordemElementosTabela);

    int getTamanhoTabela() const;

    void setTamanhoTabela(int tamanhoTabela);
};


#endif //SO1_T2_ALGORITMO_H
