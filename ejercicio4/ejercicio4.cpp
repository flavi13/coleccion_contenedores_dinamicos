//
// Created by Flavia Rivero on 17/12/24.
//

#include <iostream>
#include <valarray>
#include "ejercicio4.h"

void ejercicio4() {
    std::valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

    std::cout << "Suma: " << valores.sum() << std::endl;
    std::cout << "Media: " << valores.sum() / valores.size() << std::endl;

    valores += 5.0;

    std::cout << "Valores + 5.0: ";
    for (double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;
}
