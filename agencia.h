#ifndef AGENCIA_H
#define AGENCIA_H

#include <iostream>
#include "vehiculo.h";

using namespace std;

class Agencia{
private:
  Vehiculo* vhc[100];
  int cantidad;
  double dinero;

public:
  Agencia(){
    cantidad = 10;
    dinero = 500000;
  };
  void agregar_carro(string mar, string mod, double u, int yr, double val_com, int n_pue, string tip_gas, double mot){
    vhc[cantidad] = new Carro(mar, mod, u, yr, val_com, n_pue, tip_gas, mot);
    cantidad++;
  }

  void agregar_moto(string mar, string mod, double u, int yr, double val_com, string tip_mot, double mot){
    vhc[cantidad] = new Motocicleta(mar, mod, u, yr, val_com, tip_mot, mot);
    cantidad++;
  }

  void agregar_cuatrimoto(string mar, string mod, double u, int yr, double val_com, int cap, string tip_ter){
    vhc[cantidad] = new Cuatrimoto(mar, mod, u, yr, val_com, cap, tip_ter);
    cantidad++;
  }

  void agregar_bicicleta(string mar, string mod, double u, int yr, double val_com, bool vel, string tip){
    vhc[cantidad] = new Bicicleta(mar, mod, u, yr, val_com, vel, tip);
    cantidad++;
  }

  void mostrar_info(){
    for (int i = 0; i < cantidad; i++){
      vhc[i]->mostrar_info();
    }
  }

  double calcula_dinero(double dinero, double valor_compra){
    dinero = dinero - valor_compra;
    return dinero;
  }
};

#endif
