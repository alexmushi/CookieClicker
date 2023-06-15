/*
 *
 * Proyecto Cookie Clicker clase Mejoras
 * Alejandro Muñoz Shimano
 * A01705550
 * 15/06/2023
 * version : 2
 * Esta clase defina objeto de tipo Mejora que contiene las clases heredadas
 * MejoraClick y MejoraCursor.
 */

#ifndef MEJORAS
#define MEJORAS
#include <iostream>

// Declaracion de clase Mejora que es abstracta
class Mejora {

    // Declaro variables de instancia
protected:
    std::string nombre;
    int costo;
    float multiplicadorCosto;

    // Declaro los métodos que va a tener el objeto
public:

    // Constructor
    Mejora(const std::string& nombre, int costoInicial, float multiplicadorCosto)
        : nombre(nombre), costo(costoInicial), multiplicadorCosto(multiplicadorCosto) {}

    // Método virtual puro para aplicar la mejora
    virtual void aplicarMejora(int& valorClick, int& contadorCursores) = 0;

    int getCosto() const {
        return costo;
    }

    std::string getNombre() const {
        return nombre;
    }

    void aumentarCosto() {
        costo = static_cast<int>(costo * multiplicadorCosto);
    }
};

// Declaro objeto MejoraClick que hereda de Mejora
class MejoraClick : public Mejora {
    // Métodos
public:
    MejoraClick() : Mejora("Mejora de Click", 10, 1.5) {}

    void aplicarMejora(int& valorClick, int&) {
        valorClick += 1;
    }
};

// Declaro objeto MejoraClick que hereda de Mejora
class MejoraCursor : public Mejora {
public:
    MejoraCursor() : Mejora("Mejora de Cursor", 100, 2.0) {}

    void aplicarMejora(int& valorClick, int& contadorCursores) {
        contadorCursores += 1;
    }
};


#endif // MEJORAS
