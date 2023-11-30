#ifndef CALIENTE_H
#define CALIENTE_H

#include <iostream>
#include <string>
#include <vector>
#include "Bebida.h"

class Caliente : public Bebida {
private:
bool espuma;
public:
Caliente() {espuma = false;}
Caliente(string nom, float pre, int ide, int calo, int sto, string tam, string leche, string temp, string endul, bool espu) : Bebida(nom, pre, ide, calo, sto, tam, leche, temp, endul) {espuma = espu;}

bool getEspuma() {return espuma;}
void setEspuma(bool espu) {espuma = espu;}

void imprimirDatos() {
  string espu = "";
  if (espuma) {espu = "Si";} else {espu = "No";}
  imprimeDatos();
  cout << "Espuma:   " << espu << endl;
}
};

#endif
