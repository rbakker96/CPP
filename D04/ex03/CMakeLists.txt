cmake_minimum_required(VERSION 3.17)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex03 main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp ../../D05/ex01/Form.hpp ../../D05/ex01/Form.cpp ../../D05/ex02/ShrubberyCreationForm.cpp ../../D05/ex02/ShrubberyCreationForm.hpp ../../D05/ex02/RobotomyRequestForm.cpp ../../D05/ex02/RobotomyRequestForm.hpp ../../D05/ex02/PresidentialPardonForm.cpp ../../D05/ex02/PresidentialPardonForm.hpp)