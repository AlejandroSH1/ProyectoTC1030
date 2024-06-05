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
  agencia.agregar_carro("Audi", "A1", 25000, 2018, 300000, 5, "roja", 2.0);
  agencia.agregar_moto("Yamaha", "M1", 15000, 2022, 300000, "deportiva", 650);
  agencia.agregar_cuatrimoto("Italika", "150", 10000, 2021, 200000, 2, 
    "todo terreno");
  agencia.agregar_bicicleta("Trek", "Emonda", 5000, 2019, 100000, true, 
    "montaña");
  agencia.mostrar_info();
  return 0;
}
