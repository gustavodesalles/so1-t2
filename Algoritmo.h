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
    unsigned int tamanhoTabela;
    int numFaltasPagina;
public:
    virtual void executarAlgoritmo() = 0;

    const std::vector<int> &getEntradas() const;

    void setEntradas(const std::vector<int> &entradas);

    const std::unordered_set<int> &getTabelaPaginas() const;

    void setTabelaPaginas(const std::unordered_set<int> &tabelaPaginas);

    const std::list<int> &getOrdemElementosTabela() const;

    void setOrdemElementosTabela(const std::list<int> &ordemElementosTabela);

    int getTamanhoTabela() const;

    void setTamanhoTabela(int tamanhoTabela);

    int getNumFaltasPagina() const;

    void setNumFaltasPagina(int numFaltasPagina);
};


#endif //SO1_T2_ALGORITMO_H
