//
// Created by Flavia Rivero on 4/12/24.
//

#include <iostream>
#include "ejercicio1/ejercicio1.h"
#include "ejercicio2/ejercicio2.h"
#include "ejercicio3/ejercicio3.h"
#include "ejercicio4/ejercicio4.h"
#include "ejercicio5/ejercicio5.h"
#include "ejercicio6/ejercicio6.h"

int main() {
    int opcion;

    do {
        std::cout << "Selecciona un ejercicio para ejecutar:\n";
        std::cout << "1. Ejercicio 1: Vector e Iteradores\n";
        std::cout << "2. Ejercicio 2: Contenedores Estándar y Secuencias\n";
        std::cout << "3. Ejercicio 3: Algoritmos\n";
        std::cout << "4. Ejercicio 4: Cálculo numérico\n";
        std::cout << "5. Ejercicio 5: C++ Moderno\n";
        std::cout << "6. Ejercicio 6: Introducción a Boost\n";
        std::cout << "0. Salir\n";
        std::cout << "Ingrese su opción: ";
        std::cin >> opcion;

        // Verificar si la entrada es válida
        if (std::cin.fail()) {
            std::cin.clear(); // Limpiar el estado de error
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descartar la entrada inválida
            std::cout << "Entrada no válida. Por favor, ingrese un número entre 0 y 6.\n";
            continue;
        }

        switch (opcion) {
            case 1:
                ejercicio1();
            break;
            case 2:
                ejercicio2();
            break;
            case 3:
                ejercicio3();
            break;
            case 4:
                ejercicio4();
            break;
            case 5:
                ejercicio5();
            break;
            case 6:
                ejercicio6();
            break;
            case 0:
                std::cout << "Saliendo...\n";
            break;
            default:
                std::cout << "Opción no válida. Por favor, ingrese un número entre 0 y 6.\n";
            break;
        }
    } while (opcion != 0);

    return 0;
}
