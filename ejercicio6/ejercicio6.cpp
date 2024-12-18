//
// Created by Flavia Rivero on 17/12/24.
//

#include <iostream>
#include <boost/lexical_cast.hpp>
#include "ejercicio6.h"

void ejercicio6() {
    std::string s = "12345";
    try {
        int i = boost::lexical_cast<int>(s);
        std::cout << "Número: " << i << std::endl;
    } catch (boost::bad_lexical_cast &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
