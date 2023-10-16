#include <iostream>
#include "Leitor.h"
#include "AlgoritmoFIFO.h"
#include "AlgoritmoLRU.h"
#include "AlgoritmoOPT.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Quantidade inválida de argumentos!" << std::endl;
        return 1;
    }

    Leitor leitorNovo;

    int tamanho = std::stoi(argv[1]);
    std::vector<int> entradas = leitorNovo.ler();

    AlgoritmoFIFO fifo(entradas, tamanho);
    AlgoritmoLRU lru(entradas, tamanho);
    AlgoritmoOPT opt(entradas, tamanho);
    fifo.executarAlgoritmo();
    lru.executarAlgoritmo();
    opt.executarAlgoritmo();
    std::cout << tamanho << " quadros" << std::endl;
    std::cout << entradas.size() << " refs" << std::endl;
    std::cout << "FIFO: " << fifo.getNumFaltasPagina() << " PFs" << std::endl;
    std::cout << "LRU: " << lru.getNumFaltasPagina() << " PFs" << std::endl;
    std::cout << "OPT: " << opt.getNumFaltasPagina() << " PFs" << std::endl;

    return 0;
}
