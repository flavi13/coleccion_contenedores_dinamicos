cmake_minimum_required(VERSION 3.10)
project(coleccion_contenedores_dinamicos)

set(CMAKE_CXX_STANDARD 14)


set(BOOST_ROOT /opt/homebrew/Cellar/boost/1.87.0) # incluye la ruta de la libreria
set(BOOST_INCLUDEDIR /opt/homebrew/Cellar/boost/1.87.0/include)

find_package(Boost REQUIRED) # aqui busca la libreria
if(Boost_FOUND)
        include_directories(${BOOST_INCLUDEDIR}) #importante: incluye los directorios con la libreria
        add_executable(coleccion_contenedores_dinamicos
                main.cpp
                ejercicio1/ejercicio1.cpp
                ejercicio2/ejercicio2.cpp
                ejercicio3/ejercicio3.cpp
                ejercicio4/ejercicio4.cpp
                ejercicio5/ejercicio5.cpp
                ejercicio6/ejercicio6.cpp
                panel_control/panel_control.cpp
                panel_control/panel_control.h
                main.h)
        target_link_libraries(coleccion_contenedores_dinamicos ${Boost_LIBRARIES}) # Enlazar bibliotecas de Boost
endif()
