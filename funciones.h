#ifndef funciones_h
#define funciones_h
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <typeinfo>

void menu();
std::string leerDato(std::ifstream &archivo);
int longitudArchivo(std::ifstream &archivo);
int calcularAscii(std::string codigo);

#endif /* funciones_h */

