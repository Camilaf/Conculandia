#ifndef ASISTENTE_H_
#define ASISTENTE_H_
#include <iostream>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <cerrno>

#include "Logger.h"
#include "MemoriaCompartida/MemoriaCompartida.h"
#include "Contadores.h"
#include "Entidades/Ministro.h"
#define CANT_MIN_PARAMETROS 5
using namespace std;

class Asistente {
private:
  int ventanillas;
  int sellos;
  bool debug;
  Contadores c;
  Ministro m;

public:
  Asistente();
  ~Asistente();

  void iniciarMenu();
  int verificarArgumentos(int argc, char *argv[]);
  int inicializarContadoresConsultas();
  int crearListadoPersonasDeRiesgo();
  int obtenerCantidadVentanillas();
  int obtenerCantidadSellos();
  int consultarTuristasDeportados();
  int consultarTuristasIngresados();
  int consultarResidentesDetenidos();
  void liberarContadoresConsultas();

};

#endif /* ASISTENTE_H_ */
