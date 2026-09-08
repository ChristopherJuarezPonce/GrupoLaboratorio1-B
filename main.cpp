#include <iostream>

//Crear un struct para almacenar la informmacion del personaje
struct Personaje{
    int vida;
};

void Curar (int &vida, int puntos); // aumenta vida mediante referencia
void Atacar(int *vida, int puntos); // disminuye vida mediante puntero



int main (){
    Personaje personaje;

    personaje.vida = 100;
    std::cout << "HP inicial de personaje:" << std::endl;

    Curar(personaje.vida, 15);

    Atacar(&personaje.vida, 20);

    std::cout << "HP restante despues de ataque: " << std::endl;
    return 0;
}


// Paso por referencia
void Curar(int &vida, int puntos)
{
    vida += puntos;
}

// Paso por puntero
void Atacar(int *vida, int puntos)
{
    *vida -= puntos;
}

