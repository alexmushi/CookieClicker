/*
 * Proyecto Cookie Clicker main
 * Alejandro Mu�oz Shimano
 * A01705550
 * 15/06/2023
 *
 * Este es el proyecto final para la clase TC1030 Programaci�n Orientado a
 * Objetos. Es un programa que simula el juego "Cookie Clicker", donde
 * se consiguen galletas para conseguir mejoras que te permiten conseguir
 * m�s. Por el momento existen dos mejoras.
 */

#include <vector> // para guardar las mejoras.
#include "Mejoras.h" // bibliotecas con objetos de mi proyecto.
#include "JuegoPrincipal.h"

// Funcion principal main
int main() {
    CookieClicker juego;
    juego.jugar();

    return 0;
}
