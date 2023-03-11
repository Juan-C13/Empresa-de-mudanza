/*
  Archivo: EmpresaDeMudanza.h
  Autor: Juan Esteban Clavijo García <juan.esteban.clavijo@correounivalle.edu.co>
  Fecha creación: 2022-11-08
  Fecha última modificación: 2022-11-17
  Versión: 0.2
*/

/**
  CLASE: EmpresaDeMudanza
  INTENCIÓN: Estoy modelando una empresa de mudanza con un nombre, un nit, y una flota de camiones. Se le puede pedir que compre camiones, que cargue los camiones con ciertos objetos a transportar, que les ordene hacer la mudanza, que descarguen los objetos que llevan y que me diga el cuánto peso trasnportaron todos los camiones en total.
  RELACIONES: contiene Camiones
*/

#include "Camion.h"
#include <vector>
#include <string>
using namespace std;

#ifndef HH_EMPRESADEMUDANZA
#define HH_EMPRESADEMUDANZA

class EmpresaDeMudanza
{
private:
  string el_nombre;
  string el_nit;
  vector<Camion> flota_de_camiones;

public:
  /**
  Constructor: Construye una empresa con un nombre, un nit, y una flota de camiones. Como está recién fabricada, no tiene ningún camión en su flota.
  */
  EmpresaDeMudanza(string el_nombre, string el_nit, vector<Camion> flota_de_camiones);
  /**
  Destructor: No hace nada.
  */
  virtual ~EmpresaDeMudanza();
  /**
  Compra el camion elegido y lo añade a la flota.
  */
  virtual void comprar_camion(Camion un_camion);
  /**
    Si el objeto tiene un peso menor a cero, se descarta. Luego, comienza a chequear cada objeto válido en el primer camión, si no puede, el segundo, y así hasta que el objeto pueda ser cargado en uno de ellos (una carga efectiva, y si no se pudo en ningún camión, se descarta el objeto).
    */
  virtual void cargar_camiones(vector<int> los_objetos);
  /**
  Da la orden a los camiones de hacer la mudanza.
  */
  virtual void realizar_mudanza();
  /**
  Retorna la carga que transportaron todos los camiones en total.
  */
  virtual int peso_transportado_total();
  /**
  Descarga los objetos que lleva en el momento cada camion.
  */
  virtual void descargar_todo();
};

#else
class EmpresaDeMudanza;
#endif