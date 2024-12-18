//
// Created by Flavia Rivero on 4/12/24.
//

#include "panel_control/panel_control.h"

int main() {
    int opcion;
    do {
        mostrarPanelControl();
        opcion = obtenerOpcion();
        ejecutarOpcion(opcion);
    } while (opcion != 0);

    return 0;
}
