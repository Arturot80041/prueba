#include "auto.h"
#include <stdexcept>

using namespace std;
using namespace Automobile;


string Vehiculo::getMake() {
  return this -> make;
}

int Vehiculo::getYear() {
  return this -> year;
}

bool Vehiculo::getGas() {
  return this -> gas;
}

int Vehiculo::getPasajeros() {
  return this -> pasajeros;
}
int Vehiculo::getOcupados() {
  return this -> ocupados;
}

void Vehiculo::sube() {
  if (ocupados >= pasajeros) {
    throw length_error("Vehículo lleno");
  }
  ocupados++;
}

