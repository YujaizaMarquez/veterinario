#pragma once 
#include <iostream>
#include <stdexcept>
#include <string>


class Mascota
{
    private:
    int id;
    std :: string nombre;
    std :: string especie;
    std :: string raza;
    int edadAnios;
    int idDuenio;
    public:
    Mascota ( std :: string nombre, std :: string especie, std :: string raza, int edadAnios, int idDuenio);
    int get_id() const;
    std :: string get_nombre() const;
    std :: string get_especie() const;
    std :: string get_raza() const;
    int get_edadAnios() const;
    int get_idDuenio() const;
    std :: string mostrar_info() const;

};

static int contador = 0;
