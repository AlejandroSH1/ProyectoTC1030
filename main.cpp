/*
 * Agencia Vehicular
 * A01711368
 * Alfredo Alejandro Soto Herrera
 * 04/06/24
 * Este proyecto consiste en la creación de un negocio o empresa, en el cual
 * se pueda crear un vehículo, ver los datos del vehículo y en base a los
 * vehiculos que se hayan creado se pueda calcular el dinero que la empresa
 * ha ganado.
 */

#include <iostream> // Para imprimir
// bicliotecas con las clases a utilizar en el proyecto.
#include "vehiculo.h"
#include "agencia.h"

using namespace std;

int main(){
  Agencia agencia;
  agencia.crea_agencia();
  agencia.agregar_carro("Audi", "A1", 25000, 2018, 300000, 5, "roja", 2.0);
  agencia.agregar_moto("Yamaha", "M1", 15000, 2022, 300000, "deportiva", 650);
  agencia.agregar_cuatrimoto("Italika", "150", 10000, 2021, 200000, 2, 
    "todo terreno");
  agencia.agregar_bicicleta("Trek", "Emonda", 5000, 2019, 100000, true, 
    "montaña");
  agencia.mostrar_info();

  // Le preguntamos al usuario si desea agregar más vehículos
  string agregar;
  cout << "Deseas agregar un vehiculo? (si/no): ";
  cin >> agregar;
  
  while (agregar == "si") {
    // Ahora preguntamos al usuario que tipo de vehículo desea agregar
    string tipo;
    cout << "Tipo de vehiculo (carro, motocicleta, cuatrimoto, bicicleta): ";
    cin >> tipo;
    
    if (tipo == "carro") {
      // Creamos las variables que el usuario ingresará
      string marca, modelo, tipoGasolina;
      int año, puertas;
      double kilometraje, precio, motor;
      // Pedimos los datos al usuario
      cout << "Ingresa la marca: ";
      cin >> marca;
      cout << "Ingresa el modelo: ";
      cin >> modelo;
      cout << "Ingresa el kilometraje: ";
      cin >> kilometraje;
      cout << "Ingresa el año: ";
      cin >> año;
      cout << "Ingresa el precio: ";
      cin >> precio;
      cout << "Ingresa el numero de puertas: ";
      cin >> puertas;
      cout << "Ingresa el tipo de gasolina (verde o roja): ";
      cin >> tipoGasolina;
      cout << "Ingresa el tipo de motor (ej. 1.5): ";
      cin >> motor;
      // Agregamos el vehiculo al arreglo con los datos ingresados
      agencia.agregar_carro(marca, modelo, kilometraje, año, precio, puertas,
        tipoGasolina, motor);
    } 
    else if (tipo == "motocicleta") {
      // Creamos las variables que el usuario ingresará
      string marca, modelo, tip_mot;
      int año, motor;
      double kilometraje, precio;
      // Pedimos los datos al usuario
      cout << "Ingresa la marca: ";
      cin >> marca;
      cout << "Ingresa el modelo: ";
      cin >> modelo;
      cout << "Ingresa el kilometraje: ";
      cin >> kilometraje;
      cout << "Ingresa el año: ";
      cin >> año;
      cout << "Ingresa el precio: ";
      cin >> precio;
      cout << "Ingresa el tipo de moto (ej. deportiva o motocross): ";
      cin >> tip_mot; 
      cout << "Ingresa el motor (ej. 250): ";
      cin >> motor;
      // Agregamos el vehiculo al arreglo con los datos ingresados
      agencia.agregar_moto(marca, modelo, kilometraje, año, precio, tip_mot, 
        motor);
    } 
    else if (tipo == "cuatrimoto") {
      // Creamos las variables que el usuario ingresará
      string marca, modelo, terreno;
      int año, capacidad;
      double kilometraje, precio;
      // Pedimos los datos al usuario
      cout << "Ingresa la marca: ";
      cin >> marca;
      cout << "Ingresa el modelo: ";
      cin >> modelo;
      cout << "Ingresa el kilometraje: ";
      cin >> kilometraje;
      cout << "Ingresa el año: ";
      cin >> año;
      cout << "Ingresa el precio: ";
      cin >> precio;
      cout << "Ingresa la capacidad de la cuatrimoto: ";
      cin >> capacidad;
      cout << "Ingresa el tipo de terreno (ej. todo terreno): ";
      cin >> terreno;
      // Agregamos el vehiculo al arreglo con los datos ingresados
      agencia.agregar_cuatrimoto(marca, modelo, kilometraje, año, precio, 
        capacidad, terreno);
    } 
    else if (tipo == "bicicleta") {
      // Creamos las variables que el usuario ingresará
      string marca, modelo, tipo;
      int año;
      double kilometraje, precio;
      bool vel;
      // Pedimos los datos al usuario
      cout << "Ingresa la marca: ";
      cin >> marca;
      cout << "Ingresa el modelo: ";
      cin >> modelo;
      cout << "Ingresa el kilometraje: ";
      cin >> kilometraje;
      cout << "Ingresa el año: ";
      cin >> año;
      cout << "Ingresa el precio: ";
      cin >> precio;
      cout << "Ingresa si cuenta con velocidades (1 para si o 0 para no): ";
      cin >> vel;
      cout << "Ingresa el tipo de bicicleta (ej. pista): ";
      cin >> tipo;
      // Agregamos el vehiculo al arreglo con los datos ingresados
      agencia.agregar_bicicleta(marca, modelo, kilometraje, año, precio, vel,
        tipo);
    }
    // Revisamos si se requiere agregar otro vehiculo
    cout << "Deseas agregar otro vehiculo? (si/no): ";
    cin >> agregar; 
  }

  // Mostramos la información de los vehiculos si así se desea
  string visual;
  cout << "¿Deseas ver los vehículos de la agencia? (si/no): ";
  cin >> visual;
  if (visual == "si"){
    agencia.mostrar_info();
  }
  return 0;
}
