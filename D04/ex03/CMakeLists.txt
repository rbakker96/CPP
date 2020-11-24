cmake_minimum_required(VERSION 3.17)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex03 main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp ../../D05/ex01/Form.hpp ../../D05/ex01/Form.cpp)