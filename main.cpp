/*
  Archivo: laboratorio_2_JC.cpp
  The autor: Juan Esteban Clavijo García <juan.esteban.clavijo@correounivalle.edu.co>
  Fecha creación: 2022-11-08
  Última modificación: 2022-11-17
  Versión: 0.2
*/

/**
  HISTORIA: Tenemos una empresa de mudanza, la cual puede comprar camiones para añadir a su flota, y un conjunto de objetos a transportar. Una vez conseguidos los camiones, la empresa da la orden de cargar los objetos, cada uno lo intentamos subir al primer camión, pero si no se puede lo llevamos al siguiente camión; y si no se pudo en ninguno, lo dejamos en tierra (no se puede transportar). Luego a cada camión le pedimos que haga la mudanza, después, pedimos que se nos retorne la cantidad total de peso que transportaron todos los camiones. Finalmente, cada camión descarga los objetos que lleva. Adicionado a esto, durante la carga de los objetos se chequea su peso, y si uno llega a ser menor a 0 kg se descarta (ya que un peso negativo no tiene sentido).
*/

#include "Camion.h"
#include "EmpresaDeMudanza.h"
#include <vector>
#include <iostream>

int main()
{
  EmpresaDeMudanza empresa_1("entregas_rapiditas", "7005239601", vector<Camion>());
  Camion primer_camion("ABC-001", 10000);
  Camion segundo_camion("DEF-002", 5000);
  vector<int> objetos = {1000, 3000, 5000, 2000, 500, 1800, 4000, 30};

  empresa_1.comprar_camion(primer_camion);
  empresa_1.comprar_camion(segundo_camion);

  empresa_1.cargar_camiones(objetos);
  empresa_1.realizar_mudanza();

  cout << empresa_1.peso_transportado_total() << " kg" << endl;

  empresa_1.descargar_todo();

  return 0;
}