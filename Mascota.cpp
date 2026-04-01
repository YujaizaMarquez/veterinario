#include "Mascota.hpp"

Mascota :: Mascota( std :: string nombre, std :: string especie, std :: string raza, int edadAnios, int idDuenio) : especie(especie), raza(raza), idDuenio(idDuenio)
{
    if (edadAnios >= 0) this->edadAnios = edadAnios;
    else throw std :: invalid_argument("La edad es invalida");

    if (nombre.length() > 0) this->nombre = nombre;
    else throw std :: invalid_argument("El nombre es invalido");

    contador = contador + 1;
    this->id = contador;
}
int Mascota :: get_id() const
{
    return this->id; 
}

std :: string Mascota :: get_nombre() const
{
    return this->nombre;
}

std :: string Mascota :: get_especie() const
{
    return this->especie;
}

std :: string Mascota :: get_raza() const
{
    return this->raza;
}

int Mascota :: get_edadAnios() const
{
    return this-> edadAnios;
}

int Mascota :: get_idDuenio() const
{
    return this->idDuenio;
}
std :: string Mascota :: mostrar_info() const
{
    return "Mascota \n Id: " + 
    std :: to_string(this->id) +"\n Nombre mascota: "+
     this->nombre +"\n Especie: "+
     this->especie +"\n Raza: "+
     this->raza +"\n Edad: "+
     std :: to_string(this->edadAnios);
}
