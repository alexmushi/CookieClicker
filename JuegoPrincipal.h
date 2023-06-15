/*
 *
 * Proyecto Cookie Clicker clase Mejoras
 * Alejandro Muñoz Shimano
 * A01705550
 * 15/06/2023
 * version : 2
 * Esta clase define el objeto de tipo CookieClicker que contiene todas las operaciones
 * para poder jugar el juego.
 */

#ifndef JUEGOPRINCIPAL
#define JUEGOPRINCIPAL
#include <iostream>
#include <string>
#include <vector>
#include "Mejoras.h" //biblioteca con mis objetos a usar


class CookieClicker {

//Declaro las variables privadas de instancia
private:
    int galletas;
    int valorClick;
    int contadorCursores;
    std::vector<Mejora*> mejoras; //se define como apuntador para usar polimorfismo
    std::string nomJugador;
    std::string nomJuego;

public:
    // Constructor
    CookieClicker() : galletas(0), valorClick(1), contadorCursores(0) {
        mejoras.push_back(new MejoraClick());
        mejoras.push_back(new MejoraCursor());
    }

    // Método para comprar una mejora
    void comprarMejora();

    // Métodos con sobrecarga para nombrar al jugador y/o juego

    void nombres(std::string jugador){
    nomJugador = jugador;
    }
    void nombres(std::string jugador, std::string juego){
    nomJugador = jugador;
    nomJuego = juego;
    }

    // Método principal para jugar al juego
    void jugar();

};

// Implementacion de metodos

/**
 * comprarMejora() muestra una lista de las mejoras disponibles en el juego
 * y permite al jugador seleccionar y comprar una mejora. Verifica si el
 * jugador tiene suficientes galletas para comprar la mejora seleccionada y,
 * en caso afirmativo, realiza la compra, actualiza los valores del juego y
 * muestra un mensaje de confirmación. Si el jugador elige una mejora no válida
 * o no tiene suficientes galletas, se muestra un mensaje de error.
 * se utilizan punteros a objetos de tipo Mejora para almacenar las mejoras
 * disponibles en el vector mejoras.
 */

void CookieClicker::comprarMejora(){
        std::cout << "\nMejoras disponibles:\n";
        for (int i = 0; i < mejoras.size(); ++i) {
            Mejora* mejora = mejoras[i];
            std::cout << i + 1 << ". " << mejora->getNombre();
            std::cout << " (Costo: " << mejora->getCosto() << " galletas)\n";
        }
        std::cout << "Ingresa el numero de la mejora que deseas comprar (0 para cancelar): ";

        int eleccion;
        std::cin >> eleccion;

        if (eleccion >= 1 && eleccion <= mejoras.size()) {
            Mejora* mejoraSeleccionada = mejoras[eleccion - 1];
            int costoMejora = mejoraSeleccionada->getCosto();
            if (galletas >= costoMejora) {
                galletas -= costoMejora;
                mejoraSeleccionada->aplicarMejora(valorClick, contadorCursores);
                mejoraSeleccionada->aumentarCosto();
                std::cout << "¡Has comprado la " << mejoraSeleccionada->getNombre() << "!\n";
            } else {
                std::cout << "\nNo tienes suficientes galletas para comprar la mejora!\n";
            }
        } else if (eleccion != 0) {
            std::cout << "Eleccion invalida. Por favor, intenta nuevamente.\n";
        }
}

/**
 * jugar() es el núcleo del juego "Cookie Clicker". Comienza pidiendo el nombre del
 * jugador y de la granja (si es que quiere), y después muestra el menú principal. Si
 * elige la opción 1, se aumenta el número de galletas según el valor de clic y la
 * cantidad de cursores extras. Si selecciona la opción 2, se muestra una lista de mejoras
 * disponibles y el jugador puede elegir comprar una con la función comprarMejora().
 * El ciclo continúa hasta que el jugador elija la opción de salida.
 */

void CookieClicker::jugar(){
        std::cout << "Cookie Clicker!\n";
        std::cout << "Escribe tu nombre:\n";

        std::string nomJug;
        std::cin >> nomJug;

        std::cout << "Quieres ponerle nombre a tu granja?\n";
        std::cout << "1. Si\n";
        std::cout << "2. No\n";

        int eleccion;
        std::cin >> eleccion;

        if (eleccion == 1) {
                std::cout << "Escribe su nombre (sin espacios):\n";

                std::string nomJue;
                std::cin >> nomJue;

                nombres(nomJug, nomJue);
            } else if (eleccion == 2) {
                nombres(nomJug);
            } else {
                std::cout << "Eleccion invalida. Por favor, intenta nuevamente.\n";
            }

        while (true) {
            std::cout << "\n========================\n";
            std::cout << "Nombre: " << nomJugador << std::endl;
            if (eleccion == 1) {
                std::cout << "Nombre de la granja: " << nomJuego << std::endl;
            }
            std::cout << "Galletas: " << galletas << std::endl;
            std::cout << "Poder del click: " << valorClick << std::endl;
            std::cout << "Cursores extra: " << contadorCursores << std::endl;
            std::cout << "1. Haz clic en la galleta (+";
            std::cout << valorClick * (contadorCursores + 1) << " galletas)\n";
            std::cout << "2. Comprar una mejora\n";
            std::cout << "3. Salir\n";
            std::cout << "========================\n";
            std::cout << "Ingresa tu eleccion: ";

            int eleccion;
            std::cin >> eleccion;

            if (eleccion == 1) {
                galletas += valorClick * (contadorCursores + 1);
                std::cout << "\nHas hecho clic en la galleta y ganaste ";
                std::cout << valorClick * (contadorCursores + 1) << " galleta(s)!\n";
            } else if (eleccion == 2) {
                comprarMejora();
            } else if (eleccion == 3) {
                std::cout << "Gracias por jugar!\n";
                break;
            } else {
                std::cout << "Eleccion invalida. Por favor, intenta nuevamente.\n";
            }
        }
    }

#endif // JUEGOPRINCIPAL
