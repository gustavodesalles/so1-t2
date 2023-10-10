//
// Created by ist on 09/10/23.
//

#include <iostream>
#include "Leitor.h"

Leitor::Leitor() {}

Leitor::~Leitor() {

}

std::vector<int> Leitor::ler() {
    std::vector<int> numeros;
    std::string linha;
    while (getline(std::cin, linha)) {
        int numero = stoi(linha);
        numeros.push_back(numero);
    }
    return numeros;
}
