#ifndef AUTO_H
#define AUTO_H
#include <string>

namespace Automobile {

  class Vehiculo {
  private:
    std::string make;
    int year;
    bool gas;
    int pasajeros;
    int ocupados = 0;
    Vehiculo() {}

  public:
    Vehiculo(std::string mk,
		  int yr,
		  bool g,
		  int psjr) {
      this -> make = mk;
      this -> year = yr;
      this -> gas = g;
      this -> pasajeros = psjr;
    }
    
    std::string getMake();
    int getYear();
    bool getGas();
    int getPasajeros();
    int getOcupados();
    void sube();
    void baja();
    void carga();
    void desconecta();
    void avanza();
  };
}

#endif
