cmake_minimum_required(VERSION 3.10)
project(coleccion_contenedores_dinamicos)

set(CMAKE_CXX_STANDARD 14)

# Establecer la ruta de Boost explícitamente
set(BOOST_ROOT /opt/homebrew/Cellar/boost/1.87.0)
set(BOOST_INCLUDEDIR /opt/homebrew/Cellar/boost/1.87.0/include)

# Buscar la biblioteca Boost
find_package(Boost REQUIRED)
if(Boost_FOUND)
        include_directories(${BOOST_INCLUDEDIR}) # Incluir directorios de Boost
        add_executable(coleccion_contenedores_dinamicos
                main.cpp
                ejercicio1/ejercicio1.cpp
                ejercicio2/ejercicio2.cpp
                ejercicio3/ejercicio3.cpp
                ejercicio4/ejercicio4.cpp
                ejercicio5/ejercicio5.cpp
                ejercicio6/ejercicio6.cpp)
        target_link_libraries(coleccion_contenedores_dinamicos ${Boost_LIBRARIES}) # Enlazar bibliotecas de Boost
endif()
