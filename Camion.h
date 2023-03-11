/*
  Archivo: Camion.h
  Autor: Juan Esteban Clavijo García <juan.esteban.clavijo@correounivalle.edu.co>
  Fecha creación: 2022-11-08
  Fecha última modificación: 2022-11-17
  Versión: 0.2
*/

/**
  CLASE: Camion
  INTENCIÓN: Estoy modelando un camión con una placa, que puede transportar una cierta carga en kilos, y que tiene una capacidad máxima en kilos. Se le puede pedir que me diga su placa, que cargue un objeto, que transporte toda la carga y que me diga cuanto transportó y que descargue todo.
  RELACIONES: Ninguna
*/

#include <string>
using namespace std;

#ifndef HH_CAMION
#define HH_CAMION

class Camion
{
private:
  string la_placa;
  int la_capacidad_maxima;
  int peso_cargado_actual;
  bool mudanza_realizada;

public:
  /**
  Constructor: Construye un camión con una placa y una capacidad máxima en kilos. Como está recién fabricado, no ha hecho ninguna mudanza ni tiene peso cargado.
  */
  Camion(string la_placa, int la_capacidad_maxima);
  /**
  Destructor: No hace nada.
  */
  virtual ~Camion();
  /**
  Pregunta y retorna la placa del camion.
  */
  virtual string cual_es_la_placa();
  /**
  Mira el peso de un objeto y si este se puede cargar.
  true = se pudo hacer; false = no se pudo.
  */
  bool cargar_un_objeto(int peso_del_objeto);
  /**
  Da la orden al camion de hacer la mudanza.
  */
  virtual void hacer_mudanza();
  /**
  Retorna la carga que transportó.
  */
  virtual int peso_transportado();
  /**
  Descarga los objetos que lleva en el momento, poniendo 0 como peso total cargado.
  */
  virtual void descargar();
};

#else
class Camion;
#endif
