#include "auto.h"
#include <iostream>

using namespace Automobile;
using namespace std;

int main(int argc, char **argv) {
  Vehiculo carro("Chevrolet", 2010, true, 5);
  carro.sube();
  cout << carro.getOcupados() << "\n";
  return 0;
}
