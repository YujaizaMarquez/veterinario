#include "Mascota.hpp"
#include "Duenio.hpp"
#include "veterinario.hpp"

int main()
{
    Duenio d1(5,"Kevin","04247014968","kevin.com");
    Mascota m1("panchito","tiburon","blanco",5,d1.getId());
    Veterinario v1(23,"Yujaiza","Cirujano"," Lun-Vie 08:00-17:00 ");

    std::cout<<d1.mostrar()<<"\n";
    std::cout<<m1.mostrar_info()<<"\n";
    std::cout<<v1.mostrar()<<"\n";
    return 0;
}