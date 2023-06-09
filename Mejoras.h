#ifndef MEJORAS_H_INCLUDED
#define MEJORAS_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>

// Clase base abstracta Mejora
class Mejora {
protected:
    std::string nombre;
    int costo;
    float multiplicadorCosto;

public:

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

// Clase derivada MejoraClick
class MejoraClick : public Mejora {
public:
    MejoraClick() : Mejora("Mejora de Click", 10, 1.5) {}

    void aplicarMejora(int& valorClick, int&) override {
        valorClick += 1;
    }
};

// Clase derivada MejoraCursor
class MejoraCursor : public Mejora {
public:
    MejoraCursor() : Mejora("Mejora de Cursor", 100, 2.0) {}

    void aplicarMejora(int& valorClick, int& contadorCursores) override {
        contadorCursores += 1;
    }
};


#endif // MEJORAS_H_INCLUDED
