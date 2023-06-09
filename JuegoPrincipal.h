#ifndef JUEGOPRINCIPAL_H_INCLUDED
#define JUEGOPRINCIPAL_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include <"Mejoras.h">


// Clase CookieClicker
class CookieClicker {

private:
    int galletas;
    int valorClick;
    int contadorCursores;
    std::vector<Mejora*> mejoras;

    // Método para comprar una mejora
    void comprarMejora() {
        std::cout << "\nMejoras disponibles:\n";
        for (size_t i = 0; i < mejoras.size(); ++i) {
            Mejora* mejora = mejoras[i];
            std::cout << i + 1 << ". " << mejora->getNombre() << " (Costo: " << mejora->getCosto() << " galletas)\n";
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

public:
    CookieClicker() : galletas(0), valorClick(1), contadorCursores(0) {
        mejoras.push_back(new MejoraClick());
        mejoras.push_back(new MejoraCursor());
    }

    // Destructor para liberar la memoria de las mejoras
    ~CookieClicker() {
        for (auto& mejora : mejoras) {
            delete mejora;
        }
    }

    // Método principal para jugar al juego
    void jugar() {
        std::cout << "Cookie Clicker!\n";

        while (true) {
            std::cout << "\n========================\n";
            std::cout << "Galletas: " << galletas << std::endl;
            std::cout << "Poder del click: " << valorClick << std::endl;
            std::cout << "Cursores extra: " << contadorCursores << std::endl;
            std::cout << "1. Haz clic en la galleta (+" << valorClick * (contadorCursores + 1) << " galletas)\n";
            std::cout << "2. Comprar una mejora\n";
            std::cout << "3. Salir\n";
            std::cout << "========================\n";
            std::cout << "Ingresa tu eleccion: ";

            int eleccion;
            std::cin >> eleccion;

            if (eleccion == 1) {
                galletas += valorClick * (contadorCursores + 1);
                std::cout << "\nHas hecho clic en la galleta y ganaste " << valorClick << " galleta(s)!\n";
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

};

#endif // JUEGOPRINCIPAL_H_INCLUDED
