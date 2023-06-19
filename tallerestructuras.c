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
    };
    struct alumno alumnos[5];


for (int i = 0; i < 5; i++)
{
    printf("Ingrese los datos del alumno %d :", i+1);
    gets(alumnos[i].nombre);
    fflush(stdin );
    gets(alumnos[i].direccion);
    fflush( stdin );
    gets(alumnos[i].carrera);
    fflush( stdin );
    gets(alumnos[i].edad);
    fflush( stdin );

}
for (int i = 0; i < 5; i++)
{
    printf("Los datos de alumno %d son: %s,%s,%s,%d,%.2f", i+1,alumnos[i].nombre,alumnos[i].direccion, alumnos[i].carrera, alumnos[i].edad);
}

    return 0;
}