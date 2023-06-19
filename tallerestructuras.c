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
    } a1, a2, a3, a4, a5;
    struct alumno alumnos[5];
for (int i = 0; i < 5; i++)
{
    printf("Ingrese los datos del alumno %d :", i+1);
    gets(a1.nombre);
    fflush(stdin );
    gets(a1.direccion);
    fflush( stdin );
    gets(a1.carrera);
    fflush( stdin );
    scanf("Ingrese el nombre:%d"a1.edad);
    scanf("Ingrese el nombre:%.2f"a1.promedio);
}
for (int i = 0; i < 5; i++)
{
    printf("Los datos de alumno %d son: %s,%s,%s,%d,%.2f", i+1,a1.nombre, a1.direccion, a1.carrera, a1.edad, a1.promedio);
}

    return 0;
}