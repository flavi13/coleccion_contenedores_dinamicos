//
// Created by Flavia Rivero on 17/12/24.
//

#include "ejercicio3.h"
#include <iostream>
#include <vector>
#include <algorithm>


void ejercicio3() {
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
    std::sort(numeros.begin(), numeros.end());

    for (int num : numeros) {
        std::cout << num << std::endl;
    }

    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "Número máximo: " << maxNum << std::endl;
}
