#ifndef COMIDA_H
#define COMIDA_H

#include <iostream>
#include <string>
#include <vector>
#include "Producto.h"

using namespace std;

class Comida : public Producto {
private:
string porcion;
bool vegana;
bool gluten;

public:
Comida() {
  porcion = "";
  vegana = false;
  gluten = false;
}
Comida(string nom, float pre, int ide,int calo, int sto, string porc, bool veg, bool glut) : Producto(nom, pre, ide, calo, sto) {
  porcion = porc;
  vegana = veg;
  gluten = glut;
}

void imprimeDatos() {
  string veg = "";
  string glut = "";
  if (vegana) {veg = "Si";} else {veg = "No";}
  if (gluten) {glut = "Si";} else {glut = "No";}
    ImprimeDatos();
  cout << "Porción:   " << porcion << endl;
  cout << "Vegana:    " << veg << endl;
  cout << "Gluten:    " << glut << endl;
}

};

#endif