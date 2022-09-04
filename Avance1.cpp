// Avance1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
    int NoArt, A, caso;
    float PU, IVA, total;
    string nombreV, Clasf, car, des, gen;
    cout << "\t ---EL CHUECO GAMING---\n";
    cout << " 1.-Agregar Articulo\n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista de Articulos Vigentes\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> caso;
    switch (caso)
    {
    case 1://agregar articulo
        cout << "ingrese el numero del articulo\n";
        cin >> NoArt;
        cout << "Ingrese el nombre del videojuego\n";
        cin.ignore();
        getline(cin, nombreV);
        cout << "ingrese el año de lanzamiento\n";
        cin >> A;
        cout << "ingrese el genero del videojuego\n";
        cin.ignore();
        getline(cin, gen);
        cout << "ingrese la clasificacion del videojuego\n";
        cin.ignore();
        getline(cin, Clasf);
        cout << "ingrese la descripcion del videojuego\n";
        cin.ignore();
        getline(cin, des);
        cout << "ingrese las caracteristicas del videojuego\n";
        cin.ignore();
        getline(cin, car);
        cout << "ingrese el precio unitario\n";
        cin >> PU;
        return main();
        break;
    case 2://modificar articulo
        return main();
        break;
    case 3://eliminar articulo
        return main();
        break;
    case 4://lista de articulos vigentes
        return main();
        break;
    case 5://limpiar pantalla
        system("cls");
        return main();
        break;
    case 6://salir
        cout << "gracias por usar este programa <3\n";
        break;
    default:
        cout << "ingrese una opcion correcta\n";
        return main();
    }
}