#include <iostream>

//Crear un struct para almacenar la informmacion del personaje
struct Personaje{
    int vida;
};


// Declaracion de las funciones
void consultarVida(int vida); // muestra la vida del personaje
void Curar (int &vida, int puntos); // aumenta vida mediante referencia
void Atacar(int *vida, int puntos); // disminuye vida mediante puntero




int main (){
    Personaje personaje;

    personaje.vida = 100;
    std::cout << "HP inicial de personaje: ";
    consultarVida(personaje.vida);

    Curar(personaje.vida, 15);
    // Validacion para que el personaje no tenga mas de 100 de vida
    if (personaje.vida > 100){ 
        personaje.vida = 100;
        std::cout << "La vida del personaje no puede superar 100, se ha ajustado a 100." << std::endl;
    }
    consultarVida(personaje.vida);


    Atacar(&personaje.vida, 20);
    //Validacion que el personaje muera si su vida es menor o igual a 0
    if (personaje.vida <= 0){
        personaje.vida = 0;
        std::cout << "El personaje ha muerto." << std::endl;
    }

    std::cout << "HP restante despues de ataque: " << std::endl;
    consultarVida(personaje.vida);
    return 0;
}

// Implementacion de la funcion consultarVida
void consultarVida(int vida){

    std::cout << "La vida del personaje es: " << vida << std::endl;
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

