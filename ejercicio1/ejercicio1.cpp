//
// Created by Flavia Rivero on 17/12/24.
//

#include <iostream>
#include <vector>
#include "ejercicio1.h"

void ejercicio1() {
    std::vector<int> numeros;
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
    numeros.push_back(50);

    for (std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl;
    }
}
