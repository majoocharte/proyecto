#ifndef FACTURA_H
#define FACTURA_H

#include <iostream>
#include <string>
#include "Pedido.h"
#include "Producto.h"

class Factura {
private:
string nombre_clt;
string metodo_pago;
float propina;
Pedido pedido;

public:
Factura() {
  nombre_clt = "";
  metodo_pago = "";
  propina = 0;
  pedido = Pedido();
}
Factura(string nom, string met, float prop, Pedido ped) {
  nombre_clt = nom;
  metodo_pago = met;
  propina = prop;
  pedido = ped;
}

void imprimeFactura() {
  cout << "-------------FACTURA-------------" << endl;
  cout << "Cliente: " << nombre_clt << endl;
  pedido.DesglosarPedido();
  cout << "Propina:  $" << propina << endl;
  cout << "Total:   $" << pedido.calcularCuenta()+propina << endl;
  cout << "Método de pago: " << metodo_pago << endl;
  cout << "----------------------------------" << endl;
  }
};

#endif  