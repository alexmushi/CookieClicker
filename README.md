# CookieClicker
## Alejandro Muñoz Shimano A01705550

Este proyecto es una versión basada en texto del popular videojuego "Cookie Clicker". El juego se trata de conseguir puntos al "darle clic" a una galleta (en este caso se hará con inputs en la consola). Esos puntos podrán ser usados consecuentemente para comprar mejoras, las cuales son las siguientes:

Poder del clic: Mientras más alto sea el nivel, mayor será el número de galletas conseguidas por clic. (Si se dan dos clics con un poder nivel 5, se conseguirán 10 galletas

Cursor: Los asistentes funcionan como multiplicador del poder del clic. (Si se dan dos clics con un poder nivel 5 y 3 cursores, se conseguirán 30 galletas)

Consta de un menú con las opciones iniciales y corre sobre consola.
El programa dejará de funcionar si el usuario ingresa cualquier carácter que no sea un número. Si se ingresa un número no válido, se imprimirá un mensaje de error.


## Contexto
En el juego Cookie Clicker, los jugadores disfrutan haciendo clic en una galleta para ganar galletas virtuales. El juego ofrece la posibilidad de comprar mejoras que aumentan la eficiencia del clic y proporcionan beneficios adicionales para conseguir más galletas. El objetivo es acumular la mayor cantidad de galletas posible.

## Diagrama UML

## Funcionalidad
El programa de Cookie Clicker permite a los jugadores interactuar con el juego a través de una interfaz de consola. Al ejecutar el programa, se muestra un menú donde los jugadores pueden elegir entre diferentes opciones, como hacer clic en la galleta para ganar galletas, comprar mejoras o salir del juego. Los jugadores pueden ver la cantidad actual de galletas, el poder del clic y la cantidad de cursores que poseen.

El juego ofrece mejoras que se pueden comprar con galletas. Cada mejora tiene un costo y proporciona beneficios específicos, como aumentar el valor del clic o agregar más cursores. Los jugadores pueden ver las mejoras disponibles y su costo, y luego seleccionar una mejora para comprarla. Si tienen suficientes galletas, se realiza la compra y se aplican los beneficios de la mejora. Cada vez que se compra una mejora, su precio aumenta.

## Consideraciones

El programa se ejecuta en la consola y se compila con un compilador de C++.
Se utilizan las bibliotecas iostream, string y vector.
Las interacciones con el usuario se realizan mediante la entrada y salida estándar (cin y cout).
Las entradas del usuario se validan para garantizar que sean correctas y evitar errores. Si se llega a ingresar una letra, el programa se cicla.
El programa no permite al usuario agregar nuevas mejoras al juego. Las mejoras están predefinidas en el código y no se pueden modificar o ampliar durante la ejecución del programa. Si el usuario desea agregar nuevas mejoras, deberá hacerlo directamente en el código fuente.
Los datos del juego, como el número de galletas, el valor de clic y el contador de cursores, no pueden ser modificados directamente por el usuario. Si se requiere corregir o actualizar estos datos, debe hacerse mediante la modificación del código fuente. Además, si se desean implementar futuros métodos o funcionalidades que involucren cambios en los atributos, es posible que sea necesario agregar getters y setters para acceder y modificar los datos apropiadamente.
Si el jugador acumula una cantidad extremadamente grande de galletas, podría producirse un desbordamiento de datos en la variable que almacena la cantidad. Esto es altamente probable, pues se necesitarían aproximadamente 2,147,483,647 galletas para que pase (dependiendo del compilador)
