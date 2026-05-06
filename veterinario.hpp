#pragma once
#include <iostream>
#include <string>

class Veterinario
{
private:
    int id;
    std::string nombre;
    std::string especialidad;
    std::string horario;

public:
    Veterinario(int id, std::string nombre, std::string especialidad,std::string horario);
    int getId() const;
    std::string getNombre() const;
    std::string getEspecialidad() const;
    std::string getHorario() const;
    std::string mostrar() const;
    std::string muestra() const;
};