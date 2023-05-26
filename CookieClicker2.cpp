#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Esclavo {
protected:
    string nombre;
    int edad;

public:
     void sacrificar();
};

class Abuela : public Esclavo{
private:
    int galletas_horneadas;

public:
    void hornear_galletas();
    void sacrificar(); //sobreescritura
};

class Asistente : public Esclavo{
private:
    int conejos_creados;

public:
    void crear_conejo();
    void crear_conejo(int color); //sobrecarga
};

class CookieClicker {
private:
    int galletas;
    int poderClic;
    //pointers
    vector<Esclavo*> esclavos;
    vector<Abuela*> abuelas;
    vector<Asistente*> asistentes;

public:
    void crea_abuelas(int num);
    void muestra_abuelas();
    int num_abuelas();
    void crea_asistentes(int num);
    void muestra_asistentes();
    int num_asistentes();
    void clic_galleta(int poder, int asistentes);
    void mejora_clic();
    void empezar_juego();
};

void Abuela::hornear_galletas() {
    // Implementaci�n del m�todo hornear_galletas()
}

void Esclavo::sacrificar() {
    // Implementaci�n del m�todo sacrificar()
}

void Abuela::sacrificar() {
    // Implementaci�n del m�todo sobreescrito sacrificar()
}

void Asistente::crear_conejo() {
    // Implementaci�n del m�todo crear_conejo()
}

void CookieClicker::crea_abuelas(int num) {
    // Implementaci�n del m�todo crea_abuelas()
}

void CookieClicker::muestra_abuelas() {
    // Implementaci�n del m�todo muestra_abuelas()
}

int CookieClicker::num_abuelas() {
    // Implementaci�n del m�todo num_abuelas()
}

void CookieClicker::crea_asistentes(int num) {
    // Implementaci�n del m�todo crea_asistentes()
}

void CookieClicker::muestra_asistentes() {
    // Implementaci�n del m�todo muestra_asistentes()
}

int CookieClicker::num_asistentes() {
    // Implementaci�n del m�todo num_asistentes()
}

void CookieClicker::clic_galleta(int poder, int asistentes) {
    // Implementaci�n del m�todo clic_galleta()
}

void CookieClicker::mejora_clic() {
    // Implementaci�n del m�todo mejora_clic()
}

void CookieClicker::empezar_juego() {
    // Implementaci�n del m�todo empezar_juego()
}

int main() {
    // C�digo principal
    return 0;
}
