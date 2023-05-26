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
    // Implementación del método hornear_galletas()
}

void Esclavo::sacrificar() {
    // Implementación del método sacrificar()
}

void Abuela::sacrificar() {
    // Implementación del método sobreescrito sacrificar()
}

void Asistente::crear_conejo() {
    // Implementación del método crear_conejo()
}

void CookieClicker::crea_abuelas(int num) {
    // Implementación del método crea_abuelas()
}

void CookieClicker::muestra_abuelas() {
    // Implementación del método muestra_abuelas()
}

int CookieClicker::num_abuelas() {
    // Implementación del método num_abuelas()
}

void CookieClicker::crea_asistentes(int num) {
    // Implementación del método crea_asistentes()
}

void CookieClicker::muestra_asistentes() {
    // Implementación del método muestra_asistentes()
}

int CookieClicker::num_asistentes() {
    // Implementación del método num_asistentes()
}

void CookieClicker::clic_galleta(int poder, int asistentes) {
    // Implementación del método clic_galleta()
}

void CookieClicker::mejora_clic() {
    // Implementación del método mejora_clic()
}

void CookieClicker::empezar_juego() {
    // Implementación del método empezar_juego()
}

int main() {
    // Código principal
    return 0;
}
