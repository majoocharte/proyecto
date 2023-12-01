#ifndef PEDIDO_H
#define PEDIDO_H

#include <iostream>
#include <string>
#include <vector>
#include "Producto.h"

using namespace std;

class Pedido {
private:
float total;
vector<Producto> productos;

public:
Pedido() {
  total = 0;
}
Pedido(float tot, vector<Producto> products) {
  total = tot;
  productos = products;
}
float getTotal() {return total;}
vector<Producto> getProductos() {return productos;}

void setTotal(float tot) {total = tot;}
//No es neceario el setProductos 

void agregarProducto(Producto producto) {
  productos.push_back(producto);
}

float calcularCuenta() {
  float cuenta = 0;
  for (int i = 0; i < productos.size(); i++) {
    cuenta += productos[i].getPrecio();
  }
  return cuenta;
}

void DesglosarPedido() {
  cout << "------------------------------" << endl;
  cout << "Detalles del Pedido:" << endl;
  for (int i = 0; i < Pedido::getProductos().size(); i++) {
    Pedido::getProductos()[i].ImprimeDatos();
}
  cout << "------------------------------" << endl;
}

};

#endif