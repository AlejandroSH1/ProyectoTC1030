/*
 * Agencia Vehicular
 * A01711368
 * Alfredo Alejandro Soto Herrera
 * 04/06/24
 * Esta clase define objeto de tipo Agencia, la cual contiene un vector de
 * vehiculos, con el cual se pueden agregar y mostrar vehiculos.
 */

#ifndef AGENCIA_H
#define AGENCIA_H

#include <iostream>
#include "vehiculo.h"

using namespace std;

// Declaro la clase Agencia
class Agencia{
// Declaro variables de instancia
private:
  Vehiculo* vhc[100];
  int cantidad;
  double dinero;

// Declaro los metodos de la clase 
public:
  Agencia() : cantidad(0),dinero(500000){}; // Constructor por omisión

  void crea_agencia();

  void agregar_carro(string mar, string mod, double u, int yr, double val_com,
  int n_pue, string tip_gas, double mot);

  void agregar_moto(string mar, string mod, double u, int yr, double val_com,
  string tip_mot, double mot);

  void agregar_cuatrimoto(string mar, string mod, double u, int yr, 
  double val_com, int cap, string tip_ter);

  void agregar_bicicleta(string mar, string mod, double u, int yr, 
  double val_com, bool vel, string tip);

  void mostrar_info();
};

/**
  * crea_agencia() crea 5 vehiculos a la agencia, con el objetivo de no tener 
  * que crear uno por uno.
  *
  * Agrega vehiculos al vector de vehiculos.
  *
  * @param
  * @return void
*/
void Agencia :: crea_agencia(){
  //new crea el objeto en tiempo de ejecución para usar polimorfismo
  vhc[cantidad] = new Carro("Toyota" , "Corolla", 10000, 2013, 100000, 4, 
    "verde", 1.6);
  cantidad++;
  vhc[cantidad] = new Carro("BMW" , "Series 1", 50000, 2011, 200000, 4, 
    "verde", 2.0);
  cantidad++;
  vhc[cantidad] = new Motocicleta("Honda", "Choper", 20000, 2019, 230000, 
    "deportiva", 250);
  cantidad++;
  vhc[cantidad] = new Cuatrimoto("Suzuki", "GSX", 15000, 2022, 300000, 3, 
    "todo terreno");
  cantidad++;
  vhc[cantidad] = new Bicicleta("Caloi", "Cruiser", 5000, 2020, 90000, true, 
   "pista");
  cantidad++;
};

/**
  * agregar_carro() agrega un carro al vector de vehiculos.
  *
  * Agrega un carro al vector de vehiculos por medio de polimorfismo.
  *
  * @param string marca, string modelo, double uso, int año, double valor 
  * en el que se compró, int número de puertas, string tipo de gasolina y
  * double motor.
  * @return void
*/
void Agencia :: agregar_carro(string mar, string mod, double u, int yr, 
  double val_com, int n_pue, string tip_gas, double mot){
  //new crea el objeto en tiempo de ejecución para usar polimorfismo
  vhc[cantidad] = new Carro(mar, mod, u, yr, val_com, n_pue, tip_gas, mot);
  cantidad++;
}

/**
  * agregar_moto() agrega una motocicleta al vector de vehiculos.
  *
  * Agrega una motocicleta al vector de vehiculos por medio de polimorfismo.
  *
  * @param string marca, string modelo, double uso, int año, double valor
  * en el que se compró, string tipo de moto, double motor.
  * @return void
*/
void Agencia :: agregar_moto(string mar, string mod, double u, int yr, 
  double val_com, string tip_mot, double mot){
  //new crea el objeto en tiempo de ejecución para usar polimorfismo
  vhc[cantidad] = new Motocicleta(mar, mod, u, yr, val_com, tip_mot, mot);
  cantidad++;
}

/**
  * agregar_cuatrimoto() agrega una cuatrimoto al vector de vehiculos.
  *
  * Agrega una cuatrimoto al vector de vehiculos por medio de polimorfismo.
  *
  * @param string marca, string modelo, double uso, int año, double valor de
  * compra, int capacidad, string tipo de terreno.
  * @return void
*/
void Agencia :: agregar_cuatrimoto(string mar, string mod, double u, int yr, 
  double val_com, int cap, string tip_ter){
  //new crea el objeto en tiempo de ejecución para usar polimorfismo
  vhc[cantidad] = new Cuatrimoto(mar, mod, u, yr, val_com, cap, tip_ter);
  cantidad++;
}

/**
  * agregar_bicicleta() agrega una bicicleta al vector de vehiculos.
  *
  * Agrega una bicicleta al vector de vehiculos por medio de polimorfismo.
  *
  * @param string marca, string modelo, double uso, int año, double valor de
  * compra, bool si cuenta con velocidades, string tipo de bicicleta.
  * @return void
*/
void Agencia :: agregar_bicicleta(string mar, string mod, double u, int yr, 
  double val_com, bool vel, string tip){
  //new crea el objeto en tiempo de ejecución para usar polimorfismo
  vhc[cantidad] = new Bicicleta(mar, mod, u, yr, val_com, vel, tip);
  cantidad++;
}

/**
  * mostrar_info() imprime la información de todos los vehiculos del vector.
  *
  * Utiliza el método de mostrar_info() de cada objeto del vector de vehiculos,
  * para imprimir la información de cada uno de ellos.
  *
  * @param
  * @return void
*/
void Agencia :: mostrar_info(){
  /*
  Ciclo que recorre el arreglo e imprime cada objeto, además de calcular
  el dinero con el que cuenta la empresa
  */
  for (int i = 0; i < cantidad; i++){
    vhc[i]->mostrar_info();
    dinero = dinero - vhc[i]->getValorCompra() + vhc[i]->calcula_precio_venta();
    cout << "Dinero en la empresa: " <<dinero << " pesos mexicanos" << endl;
    cout << endl;
  }
}  

#endif
