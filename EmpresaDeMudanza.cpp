/*
  Archivo: EmpresaDeMudanza.cpp
  Autor: Juan Esteban Clavijo García <juan.esteban.clavijo@correounivalle.edu.co>
  Fecha creación: 2022-11-08
  Fecha última modificación: 2022-11-17
  Versión: 0.2
*/

#include "EmpresaDeMudanza.h"

EmpresaDeMudanza::EmpresaDeMudanza(string el_nombre, string el_nit, vector<Camion> flota_de_camiones) : el_nombre(el_nombre), el_nit(el_nit), flota_de_camiones(flota_de_camiones)
{
  // No hay que hacer nada
}

EmpresaDeMudanza::~EmpresaDeMudanza()
{
  // No hay que hacer nada
}

void EmpresaDeMudanza::comprar_camion(Camion un_camion)
{
  flota_de_camiones.push_back(un_camion);
}

void EmpresaDeMudanza::cargar_camiones(vector<int> los_objetos)
{
  for (int cual_objeto = 0; cual_objeto < los_objetos.size(); cual_objeto++)
  {
    int objeto_a_transportar = los_objetos.at(cual_objeto);

    if (objeto_a_transportar < 0)
      objeto_a_transportar = 0;

    bool carga_efectiva = false;
    int cual_camion = 0;

    while (not carga_efectiva)
    {
      if (cual_camion == flota_de_camiones.size())
        break;

      if ((flota_de_camiones.at(cual_camion).cargar_un_objeto(objeto_a_transportar) == true))
        carga_efectiva = true;
      else
        cual_camion += 1;
    }
  }
}

void EmpresaDeMudanza::realizar_mudanza()
{
  for (int cual_camion = 0; cual_camion < flota_de_camiones.size(); cual_camion++)
    flota_de_camiones.at(cual_camion).hacer_mudanza();
}

int EmpresaDeMudanza::peso_transportado_total()
{
  int peso_total = 0;

  for (int cual_camion = 0; cual_camion < flota_de_camiones.size(); cual_camion++)
    peso_total += flota_de_camiones.at(cual_camion).peso_transportado();

  return peso_total;
}

void EmpresaDeMudanza::descargar_todo()
{
  for (int cual_camion = 0; cual_camion < flota_de_camiones.size(); cual_camion++)
    flota_de_camiones.at(cual_camion).descargar();
}