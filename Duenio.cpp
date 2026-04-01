#include "Duenio.hpp"
Duenio::Duenio(int id, std::string nombre,std::string telefono,std::string email)
{
    this->id=id;
    this->nombre=nombre;
    this->telefono=telefono;
    this->email=email;
}
int Duenio:: getId() const
{
    return this->id;
}
std::string Duenio:: getNombre() const
{
    return this->nombre;
}
std::string Duenio:: getTelefono() const
{
    return this->telefono;
}
std::string Duenio:: getEmail() const
{
    return this->email;
}
std::string Duenio::mostrar()const
{
    return "Duenio \n"
            "Id Dueno:"+std::to_string(id)+"\n"+
            "Nombre dueno:"+nombre+"\n"+
            "telefono:"+telefono+"\n"+
            "email:"+email+"\n";
}
