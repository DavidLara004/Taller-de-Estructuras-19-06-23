#include <stdio.h> // Uso de la la libreria standard input output headset que contiene a las funciones
int main()
{ // Inicio de la funcion principal main
    // El uso de struct nos permite poner nuestros propios tipos de datos
    struct alumno
    {
        char nombre[20];
        char direccion[20];
        char carrera[20];
        int edad;
        float promedio;
    } a1;

    puts("Ingrese los datos del alumno 1 :");
    gets(a1.nombre);
    gets(a1.direccion);
    gets(a1.carrera);
    gets(a1.edad);
    gets(a1.promedio);
    printf("%s, %s, %s, %d, %.2f", a1.nombre, a1.direccion, a1.carrera, a1.edad, a1.promedio);
    puts("Ingrese los datos del alumno 2 :");
    gets(a1.nombre);
    gets(a1.direccion);
    gets(a1.carrera);
    gets(a1.edad);
    gets(a1.promedio);
    printf("%s, %s, %s, %d, %.2f", a1.nombre, a1.direccion, a1.carrera, a1.edad, a1.promedio);
    puts("Ingrese los datos del alumno 3 :");
    gets(a1.nombre);
    gets(a1.direccion);
    gets(a1.carrera);
    gets(a1.edad);
    gets(a1.promedio);
    printf("%s, %s, %s, %d, %.2f", a1.nombre, a1.direccion, a1.carrera, a1.edad, a1.promedio);
    puts("Ingrese los datos del alumno 4 :");
    gets(a1.nombre);
    gets(a1.direccion);
    gets(a1.carrera);
    gets(a1.edad);
    gets(a1.promedio);
    printf("%s, %s, %s, %d, %.2f", a1.nombre, a1.direccion, a1.carrera, a1.edad, a1.promedio);
    puts("Ingrese los datos del alumno 5 :");
    gets(a1.nombre);
    gets(a1.direccion);
    gets(a1.carrera);
    gets(a1.edad);
    gets(a1.promedio);
    printf("%s, %s, %s, %d, %.2f", a1.nombre, a1.direccion, a1.carrera, a1.edad, a1.promedio);
    return 0;
}