# Versión de CMake, campo requerido
cmake_minimum_required(VERSION 3.10)
# Nombre del proyecto
project(ej1)
# Definir el estandard de C++
set(CMAKE_CXX_STANDARD 17)
# Los archivos fuente todos juntos
file(GLOB SOURCES "sources/*.cpp")
# Crear el ejecutable
file(GLOB EXAMPLE_SOURCES "example/main.cpp")
add_executable(main ${SOURCES} ${EXAMPLE_SOURCES})
# Indica los directorios de las librerías y headers
target_include_directories(main PRIVATE 
${CMAKE_SOURCE_DIR}/include)
# Especifica la carpeta donde se creara el ejecutable
set_target_properties(main PROPERTIES
RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)