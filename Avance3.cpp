#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <stdlib.h>
using namespace std;

//declaracion de variables fuera
int* item, * anio, n, desicion;
string* nombre, * clasf, * car, * genero, * descri;
float* precio, * iva, * total;

//hacer funciones de tipo void
void alta();
void eliminar();
void lista();
void modificar();
void archivo();

void alta()
{
	int f = 1;
	printf("cuantos registros dara de alta\n");
	scanf_s("%d", &n);

	//new tiene que ser el mismo tipo de variable uqe la que se esta usando
	//se de clara fuera del arreglo
	item = new int[n];
	anio = new int[n];
	nombre = new string[n];
	clasf = new string[n];
	car = new string[n];
	genero = new string[n];
	descri = new string[n];
	precio = new float[n];
	iva = new float[n];
	total = new float[n];


	//arreglo
	for (int i = 0; i = n; i++)
	{
		printf("Ingrese el numero del articulo\n");
		scanf_s("%d", &item[i]);
		do
		{
			if (item[i] != item[i - f])
			{
				f = f + 1;
			}
			else
			{
				printf("el articulo ya existe\n");
				printf("ingrese el articulo\n");

			}
		} while (f < n);
		printf("Ingrese el a%co de lanzamiento\n", 164);
		scanf_s("%d", &anio[i]);
		printf("Ingrese el nombre del juego\n");
		cin.ignore();
		getline(cin, nombre[i]);
		printf("Ingrese la clasificacion del juego\n");
		getline(cin, clasf[i]);
		printf("Ingrese las caracteristicas del juego\n");
		getline(cin, car[i]);
		printf("Ingrese el genero\n");
		getline(cin, genero[i]);
		printf("Ingrese la descripcion del juego\n");
		getline(cin, descri[i]);
		printf("Ingrese el precio del juego\n");
		scanf_s("%f", &precio[i]);
		iva[i] = precio[i] * 0.16;
		total[i] = precio[i] + iva[i];
		if ((n - 1) == i)
		{
			printf("quiere dar de alta otro articulo?\n1.-SI   2.-NO\n");
			scanf_s("%d", &desicion);
			if (desicion == 1)
			{
				n = n + 1;
			}
		}
	}
}

void modificar()
{
	int mod, selec;
	//switch si quiere cambiar solo una ocpicion
	do
	{
		printf("ingrese el numero del articulo a modificar\n");
		scanf_s("%d", &mod);
	} while (mod == 0);

	for (int i = 0; i = n; i++)
	{
		if (mod == item[i])
		{
			printf("Elija que opcion va a modificar\n");
			printf("1.-año\n2.-Nombre\n3.-Clasificacion\n4.-Caracteristicas\n5.-Genero\n6.-Descripcion\n7.-Precio\n8.-Modificar otro articulo\n9.-Salir\n");
			scanf_s("%d", &selec);
			switch (selec)
			{
			case 1:
				printf("Ingrese el a%co de lanzamiento\n", 164);
				scanf_s("%d", &anio[i]);
				i = i - 1;
				break;
			case 2:
				printf("Ingrese el nombre del juego\n");
				cin.ignore();
				getline(cin, nombre[i]);
				i = i - 1;
				break;
			case 3:
				printf("Ingrese la clasificacion del juego\n");
				getline(cin, clasf[i]);
				i = i - 1;
				break;
			case 4:
				printf("Ingrese las caracteristicas del juego\n");
				getline(cin, car[i]);
				i = i - 1;
				break;
			case 5:
				printf("Ingrese el genero\n");
				getline(cin, genero[i]);
				i = i - 1;
				break;
			case 6:
				printf("Ingrese la descripcion del juego\n");
				getline(cin, descri[i]);
				i = i - 1;
				break;
			case 7:
				printf("Ingrese el precio del juego\n");
				scanf_s("%f", &precio[i]);
				iva[i] = precio[i] * 0.16;
				total[i] = precio[i] + iva[i];
				i = i - 1;
				break;
			case 8:
				return modificar();
				break;
			case 9:
				break;
			default:
				printf("ingrese una opcion valida\n");
				i = i - 1;
				break;
			}
		}
	}
}

void eliminar()
{
	int eliminar;
	printf("ingrese el numero del articulo a eliminar\n");
	scanf_s("%d", &eliminar);
	for (int i = 0; i = n; i++)
	{
		if (eliminar == item[i])
		{
			item[i] = 0;
		}
	}
}

void lista()
{
	int op;
	string busc;
	printf("1.-Clasificacion\n2.-Genero\n");
	scanf_s("%d", &op);
	switch (op)
	{
	case 1:
		printf("ingrese la clasificacion que va a buscar\n");
		getline(cin, busc);
		for (int i = 0; i = n; i++)
		{
			if (clasf[i] == busc)
			{
				printf("Numero de articulo: %d\n", &item[i]);
				printf("A%co de salida: %d\n", 164, &anio[i]);
				printf("Nombre del juego: %s\n", &nombre[i]);
				printf("Clasificacion: %s\n", &clasf[i]);
				printf("Caracteristicas: %s\n", &car[i]);
				printf("Genero: %s\n", &genero[i]);
				printf("Descripcion: %s\n", &descri[i]);
				printf("Precio: %f\n", &precio[i]);
				printf("IVA: %f\n", &iva[i]);
				printf("Total: %f\n", &total[i]);
				//se sigue imprimiendo los demas valores
			}
		}
		break;
	case 2:
		//busqueda pero con genero en vez de clasificacion
		printf("ingrese la clasificacion que va a buscar\n");
		getline(cin, busc);
		for (int i = 0; i = n; i++)
		{
			if (genero[i] == busc)
			{
				printf("Numero de articulo: %d\n", &item[i]);
				printf("A%co de salida: %d\n", 164, &anio[i]);
				printf("Nombre del juego: %s\n", &nombre[i]);
				printf("Clasificacion: %s\n", &clasf[i]);
				printf("Caracteristicas: %s\n", &car[i]);
				printf("Genero: %s\n", &genero[i]);
				printf("Descripcion: %s\n", &descri[i]);
				printf("Precio: %f\n", &precio[i]);
				printf("IVA: %f\n", &iva[i]);
				printf("Total: %f\n", &total[i]);
			}
		}
		break;
	default:
		printf("ingrese una opcion valida\n");
		return lista();
		break;
	}
}

void archivo()
{
	ofstream arch;
	string name;
	name = "Archivo tuyo";
	arch.open(name.c_str(), ios::out);
	if (arch.fail())
	{
		printf("ERROR NO SE GENERO EL ARCHIVO\n");
		system("pause");
		exit(1);
	}
	arch << "\t \t INFO";
	for (int i = 0; i < n; i++)
	{
		if (item[i] != 0)
		{
			arch << "dato\n" << 1 + 1 << endl;
			arch << "Articulo" << item[i];
			arch << "A%co", 164 << anio[i];
			arch << "Videojuego" << nombre[i];
			arch << "clasificacion %s" << clasf[i];
			arch << "genero %s" << genero[i];
			arch << "caracteristicas %s" << car[i];
			arch << "Descripcion %s" << descri[i];
			arch << "Precio %f" << precio[i];
			arch << "Iva %f" << iva[i];
			arch << "Total %f" << total[i];
		}

	}
}

int main()
{
	int opcion;
	printf("\t La Tiendita Virtual \n");
	printf("1.-Agregar Articulo\n\n2.-Modificar Articulo\n\n3.-Eliminar Articulo\n\n4.-Lista de Articulo\n\n5.-Limpiar Pantalla\n\n6.-Salir\n");
	scanf_s("%d", &opcion);
	switch (opcion)
	{
	case 1:
		alta();
		system("pause");
		return main();
		break;
	case 2:
		modificar();
		system("pause");
		return main();
		break;
	case 3:
		eliminar();
		system("pause");
		return main();
		break;
	case 4:
		lista();
		system("pause");
		return main();
		break;
	case 5:
		system("cls");
		return main();
		break;
	case 6:
		archivo();
		exit(1);
		break;
	default:
		printf("ingrese una opcion correcta\n");
		return main();
		break;
	}
}