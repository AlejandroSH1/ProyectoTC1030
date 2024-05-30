#include <iostream>
#include "vehiculo.h"
#include "agencia.h"

using namespace std;

int main(){
  Agencia agencia;
  agencia.agregar_carro("Audi", "A1", 25000, 2018, 300000, 5, "roja", 2.0);
  agencia.agregar_moto("Yamaha", "M1", 15000, 2022, 300000, "deportiva", 650);
  agencia.agregar_cuatrimoto("Italika", "150", 10000, 2021, 200000, 2, "todo terreno");
  agencia.agregar_bicicleta("Trek", "Emonda", 5000, 2019, 100000, true, "montaña");
  agencia.mostrar_info();
  return 0;
}
