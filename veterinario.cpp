#include "veterinario.hpp"
Veterinario::Veterinario(int id, std::string nombre, std::string especialidad,std::string horario)
{
    this->id=id;
    this->nombre=nombre;
    this->especialidad=especialidad;
    this->horario=horario;
}
int Veterinario::getId() const
{
    return this->id;
}
std::string Veterinario:: getNombre() const
{
    return this->nombre;
}
std::string Veterinario::getEspecialidad() const
{
    return this->especialidad;
}
std::string Veterinario:: getHorario() const
{
    return this->horario;
}
std::string Veterinario:: mostrar() const
{
    return  "VETERINARIO \n"
            "Id Dr:"+std::to_string(id)+"\n"+
            "Nombre Dr:"+nombre+"\n"+
            "Especialidad:"+especialidad+"\n"+
            "Horario:"+horario+"\n";
}
std::string Veterinario::muestra() const
{
    return "sangre o+";
}