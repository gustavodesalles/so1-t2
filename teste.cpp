#include <iostream>
#include "AlgoritmoFIFO.h"
#include "AlgoritmoLRU.h"
#include "AlgoritmoOPT.h"

int test() {
    int tamanho = 4;
    std::vector<int> entradas = {0, 1, 2, 3, 4, 0, 1, 2, 5, 0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, 0, 1, 2, 5, 0, 1, 2, 3, 4, 5};

    AlgoritmoFIFO fifo(entradas, tamanho);
    fifo.executarAlgoritmo();

    return 0;
}