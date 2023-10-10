#include <iostream>
#include "Leitor.h"

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;

//    Leitor leitor(argv[2]);
//    leitor.lerArquivo();

    Leitor leitorNovo;

    int tamanhoTabela = std::stoi(argv[1]);
    std::cout << tamanhoTabela << std::endl;
    std::vector<int> numeros = leitorNovo.ler();

    for (int i : numeros) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
