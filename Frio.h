#ifndef FRIO_H
#define FRIO_H

#include <iostream>
#include <string>
#include <vector>
#include "Bebida.h"

class Frio : public Bebida {
private:
string tipoFrio;
bool crema_batida;
public:
Frio() { tipoFrio = ""; crema_batida = true;}
Frio(string nom, float pre, int ide, int calo, int sto, string tam, string leche, string temp, string endul, string tipo, bool crema) : Bebida(nom, pre, ide, calo, sto, tam, leche, temp, endul) { tipoFrio = tipo; crema_batida = crema;}
string getTipo() {return tipoFrio;}
bool getCrema() {return crema_batida;}
void setTipo(string tipo) {tipoFrio = tipo;}
void setCrema(bool crema) {crema_batida = crema;}

void imprimirDatos() {
  string crema = "";
  if (crema_batida) {crema = "Si";} else {crema = "No";}
  imprimeDatos();
  cout << "Tipo:  " << tipoFrio << endl;
  cout << "Crema Batida:  " << crema << endl;
}
};

#endif