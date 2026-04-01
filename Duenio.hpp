#pragma once
#include <iostream>
#include <string>

class Duenio
{
    private:
    int id;
    std::string nombre;
    std::string telefono;
    std::string email;
    public:
    Duenio(int id, std::string nombre,std::string telefono,std::string email);
    int getId() const;
    std::string getNombre() const;
    std::string getTelefono() const;
    std::string getEmail() const;
    std::string mostrar()const;
};