#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Producto {
protected:
    string nombre;
    float precio;
    int identificador;
    int calorias;
    int stock;

public:
    Producto() {
      nombre = "";
      precio = 0;
      identificador = 1;
      calorias = 0;
      stock = 0;
    }
    Producto(string nom, float pre, int ide,int calo, int sto) {
      nombre = nom;
      precio = pre;
      identificador = ide;
      calorias = calo;
      stock = sto;
    }
  string getNombre() {return nombre;}
  float getPrecio() {return precio;}
  int getID() {return identificador;}
  int getStock() {return stock;}
  int getCalorias() {return calorias;}

  void setNombre(string nom) {nombre = nom;}
  void setPrecio(float pre) {precio = pre;}
  void setID(int ide) {identificador = ide;}
  void setCalorias(int calo) {calorias = calo;}
//no es necesario el setStock por los metodos existentes

int agregarStock(int n_stock) {
  stock += n_stock; 
  return stock;
}
int eliminarStock(int n_stock) {
  stock -= n_stock; 
  return stock; 
}
void mostrarCalorias() {cout << calorias;}

void ImprimeDatos() {
  cout << "----------" + nombre + "----------" << endl;
  cout << "ID:         " << identificador << endl;
  cout << "Precio:    $" << precio << endl;
  cout << "Calorias:   " << calorias << endl;
}

};

#endif