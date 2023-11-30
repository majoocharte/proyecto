#include <iostream>
#include <string>
#include <vector>

#include "Bebida.h"
#include "Caliente.h"
#include "Comida.h"
#include "Factura.h"
#include "Frio.h"
#include "Pedido.h"
#include "Producto.h"

using namespace std;

int main() {

  cout << "------------STARBUCKS--------------" << endl;
  cout << "¡Bienvenido a Starbucks! ¿Cuál es tu nombre?" << endl;
  string nombreCliente;
  cin >> nombreCliente;

  cout << "¿Quieres ver el menú? si/no" << endl;
  string opcion;
  cin >> opcion;

  if (opcion == "si") {
    // Crear un pedido
    Pedido pedido;

    do {
      cout << "Menú" << endl;
      cout << "1. Panini" << endl;
      cout << "2. Medio panini" << endl;
      cout << "3. Croissant" << endl;
      cout << "4. Americano" << endl;
      cout << "5. Capuccino" << endl;
      cout << "6. Latte" << endl;
      cout << "7. Mocha" << endl;
      cout << "8. Frappe" << endl;

      cout << "¿Qué producto quieres comprar? (Ingresa el número)" << endl;
      int opcionProducto;
      cin >> opcionProducto;

      Producto *productoSeleccionado = nullptr;

      switch (opcionProducto) {
      case 1:
        productoSeleccionado =
            new Comida("Panini", 90.50, 1, 380, 10, "Grande", false, true);
        break;
      case 2:
        productoSeleccionado =
            new Comida("Medio Panini", 50, 2, 380, 10, "Medio", false, true);
        break;
      case 3:
        productoSeleccionado =
            new Comida("Croissant", 80, 3, 400, 10, "Normal", false, true);
        break;
      case 4:
        productoSeleccionado =
            new Caliente("Café Americano", 50.00, 3, 0, 20, "Mediano", "Entera",
                         "Caliente", "Azúcar", true);
        break;
      case 5:
        productoSeleccionado =
            new Bebida("Capuccino", 60.00, 4, 200, 15, "Mediano", "Leche",
                       "Caliente", "Azúcar");
        break;
      case 6:
        productoSeleccionado = new Bebida("Latte", 55.00, 5, 180, 15, "Mediano",
                                          "Leche", "Caliente", "Azúcar");
        break;
      case 7:
        productoSeleccionado =
            new Frio("Mocha", 65.00, 6, 250, 20, "Grande", "Leche de Almendra",
                     "Frío", "Miel", "Frappe", true);
        break;
      case 8:
        productoSeleccionado =
            new Frio("Frappe", 70.00, 7, 120, 15, "Grande", "Leche de Almendra",
                     "Frío", "Miel", "Frappe", true);
        break;
      default:
        cout << "Opción no válida." << endl;
        break;
      }

        // Agregar el producto al pedido
        pedido.agregarProducto(*productoSeleccionado);

        // Liberar la memoria del producto seleccionado
        delete productoSeleccionado;

      cout << "¿Desea agregar otro producto? si/no" << endl;
      cin >> opcion;
    }  while (opcion == "si");
  
  cout << "¿Desea agregar propina? si/no" << endl;
  string propina;
  cin >> propina;
  int propinaAgregada = 0;

  if (propina == "si") {
    cout << "Gracias!! ¿Cuánta propina desea agregar?" << endl;
    cin >> propinaAgregada;
  } else {
    cout << ">:(" << endl;
  }
    cout << "¿Cuál será el método de pago? (Tarjeta/Efectivo)" << endl;
    string metodoPago;
    cin >> metodoPago;

    // Mostrar la información del pedido
    Factura factura1(nombreCliente, metodoPago, 0, pedido);
    factura1.imprimeFactura();
  }
  return 0;
}