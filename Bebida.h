#ifndef BEBIDA_H
#define BEBIDA_H

#include <iostream>
#include <string>
#include <vector>
#include "Producto.h"

using namespace std;

class Bebida : public Producto {

  protected:
    string tamano;
    string tipoLeche;
    string endulzante;

  public:
    Bebida() {
      tamano = "";
      tipoLeche = "";
      endulzante = "Ninguno";
    }
    Bebida(string nom, float pre, int ide, int calo, int sto, string tam, string leche, string temp, string endul) : Producto(nom, pre, ide, calo, sto) {
      tamano = tam;
      tipoLeche = leche;
      endulzante = endul;
    }

string getTamano() { return tamano; }
string getTipoLeche() { return tipoLeche; }
string getEndulzante() { return endulzante; }

void setTamano(string tam) { tamano = tam; }
void setTipoLeche(string leche) { tipoLeche = leche; }
void setEndulzante(string endul) { endulzante = endul; }

void imprimeDatos() {
  ImprimeDatos();
  cout << "Tamaño:    " << tamano << endl;
  cout << "Leche:     " << tipoLeche << endl;
  cout << "Endulzante: " << endulzante << endl;
}
};

#endif