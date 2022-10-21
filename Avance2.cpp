// Avance1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
#include <cstring>
#include <stdlib.h>
#include <windows.h>
using namespace std;

struct tienda;
{
    int NoArt, id, A;
    float PU, total, IVA;
    string nombreV, Clasf, car, des, gen;
};

int main()
{
    tienda articulo[3];
    int caso;
    string genero, clasificacion;
    printf("\t ---EL CHUECO GAMING---\n");
    printf(" 1.-Agregar Articulo\n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista de Articulos Vigentes\n 5.-Limpiar Pantalla\n 6.-Salir\n");
    scanf_s("%d",&caso);
    switch (caso)
    {
    case 1://agregar articulo
        for (int i = 1; i <= 3; i++)
        {
            articulo[i].id = 20220000 + (i);
            int val=1;
            do
            {
                printf("ingrese el numero del articulo\n");
                scanf_s("%d",&articulo[i].NoArt);
                if (articulo[i].NoArt == articulo[i - 1].NoArt || articulo[i].NoArt == articulo[i - 2].NoArt)
                {
                    printf("el numero del articulo ya existe?\n");
                }
                else
                {
                    val=2
                }
            } while (val == 1);
            printf("Ingrese el nombre del videojuego\n");
            cin.ignore();
            getline(cin, articulo[i].nombreV);
            printf("ingrese el a%co de lanzamiento\n", &164);
            scanf_s("%d",&articulo[i].A);
            printf("ingrese el genero del videojuego\n");
            cin.ignore();
            getline(cin, articulo[i].gen);
            printf("ingrese la clasificacion del videojuego\n");
            cin.ignore();
            getline(cin, articulo[i].Clasf);
            printf("ingrese la descripcion del videojuego\n");
            cin.ignore();
            getline(cin, articulo[i].des);
            printf("ingrese las caracteristicas del videojuego\n"9;
            cin.ignore();
            getline(cin, articulo[i].car);
            printf"ingrese el precio unitario\n");
            scanf_s("%f",&articulo[i].PU);
            articulo[i].IVA = articulo[i].PU * 0.16;
            articulo[i].total= articulo[i].PU+articulo[i].IVA;
            printf("el total a pagar es: %f", &total);
        }
        return main();
        break;
    case 2://modificar articulo
        return main();
        break;
    case 3://eliminar articulo
        return main();
        break;
    case 4://lista de articulos vigentes
        int opcion;
        printf("1.-Mostrar por genero\n2.-Mostrar por clasificacion\n3.-Mostrar todos los articulos por id\n");
        scanf_s("%d", &opcion);
        switch (opcion)
        {
        case 1:
            printf("que genero quiere buscar\n");
            scanf_s("%s", &genero);
            for (int = 1; i <= 3; i++)
            {
                if (genero == articulo[i].gen)
                {
                    printf("ID del articulo: %d\n", &articulo[i].id);
                    printf("Numero del articulo: %d\n", &articulo[i].NoArt);
                    printf("Nombre del juego: %s\n", &articulo[i].nombreV);
                    printf("A%co de lanzamiento: %d\n", &164, &articulo[i].A);
                    printf("Genero: %s\n", &articulo[i].gen);
                    printf("Clasificacion: %s\n", &articulo[i].Clasf);
                    printf("Descripcion: %s\n", &articulo[i].des);
                    printf("Caracteristicas: %s\n", &articulo[i].car);
                    printf("Precio unitario: %f\n", &articulo[i].PU);
                    printf("IVA: %f\n", &articulo[i].IVA);
                    printf("Precio total: %f\n", &articulo[i].total);
                }
            }
            break;
        case 2:
            printf("que clasificacion desea buscar");
            scanf_s("%s", clasificacion);
            for (int = 1; i <= 3; i++)
            {
                if (clasificacion == articulo[i].Clasf)
                {
                    printf("ID del articulo: %d\n", &articulo[i].id);
                    printf("Numero del articulo: %d\n", &articulo[i].NoArt);
                    printf("Nombre del juego: %s\n", &articulo[i].nombreV);
                    printf("A%co de lanzamiento: %d\n", &164, &articulo[i].A);
                    printf("Genero: %s\n", &articulo[i].gen);
                    printf("Clasificacion: %s\n", &articulo[i].Clasf);
                    printf("Descripcion: %s\n", &articulo[i].des);
                    printf("Caracteristicas: %s\n", &articulo[i].car);
                    printf("Precio unitario: %f\n", &articulo[i].PU);
                    printf("IVA: %f\n", &articulo[i].IVA);
                    printf("Precio total: %f\n", &articulo[i].total);
                }
            }
            break;
        case 3:
            for (int i = 1; i <= 3; i++)
            {
                printf("ID del articulo: %d\n", &articulo[i].id);
                printf("Numero del articulo: %d\n", &articulo[i].NoArt);
                printf("Nombre del juego: %s\n", &articulo[i].nombreV);
                printf("A%co de lanzamiento: %d\n", &164, &articulo[i].A);
                printf("Genero: %s\n", &articulo[i].gen);
                printf("Clasificacion: %s\n", &articulo[i].Clasf);
                printf("Descripcion: %s\n", &articulo[i].des);
                printf("Caracteristicas: %s\n", &articulo[i].car);
                printf("Precio unitario: %f\n", &articulo[i].PU);
                printf("IVA: %f\n", &articulo[i].IVA);
                printf("Precio total: %f\n", &articulo[i].total);
            }
            break:
        }
        return main();
        break;
    case 5://limpiar pantalla
        system("cls");
        return main();
        break;
    case 6://salir
        printf("gracias por usar este programa <3\n");
        break;
    default:
        printf("ingrese una opcion correcta\n");
        return main();
    }
}