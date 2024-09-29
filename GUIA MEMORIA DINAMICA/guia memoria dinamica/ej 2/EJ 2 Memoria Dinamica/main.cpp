#include <iostream>

using namespace std;

void cargarVec (int *vec, int tamanio)
{
    for(int i=0; i<tamanio; i++)
    {
        cin >> vec[i];
    }
}

void mostrarVec (int *vec, int tamanio)
{
    for(int i=0; i<tamanio; i++)
    {
        cout << vec[i] << endl;
    }
}

int main()
{
    cout << "Bienvenido! Ingrese una opcion (1-3)" << endl;
    cout << "1- Cargar vector" << endl;
    cout << "2- Mostrar vector" << endl;
    cout << "3- Salir" << endl;

    int opcion, tamanio, *vec, i;
    int contadoropcionuno = 0;
    cout << endl;
    cin >> opcion;
    cout << endl;

    while(opcion != 1 && opcion != 2 && opcion !=3)
    {
        cout << endl;
        cout << "Opcion invalida, ingrese una opcion entre (1-3)" << endl;
        cin >> opcion;
    }

    if(opcion == 1)
    {
        contadoropcionuno = 1;
        system("cls");

        cout << "Usted eligio cargar el vector." << endl;

        system("pause");
        system("cls");

        cout << "Ingrese el tamanio del vector: ";
        cin >> tamanio;

        vec=new int[tamanio];
        if(vec==nullptr)
        {
            cout << "No se pudo asignar memoria." << endl;
            return -1;
        }

        system("cls");

        cout << "Cargue el vector con los " << tamanio << " numeros..." << endl;
        cout << endl;
        cargarVec (vec, tamanio);

        cout << endl;
        system("pause");
        system("cls");

        cout << "Ingrese una opcion (2-3)" << endl;
        cout << "2- Mostrar vector" << endl;
        cout << "3- Salir" << endl;
        cin >> opcion;

    }

    if(opcion == 2 && contadoropcionuno == 1)
    {
        system("cls");

        cout << "Usted eligio mostrar el vector." << endl;

        system("pause");
        system("cls");

        cout << "Mostrando vector..." << endl;
        mostrarVec (vec, tamanio);

        system("pause");
        system("cls");

        cout << "Ingrese opcion 3 para salir del programa." << endl;
        cout << "3- Salir" << endl;
        cin >> opcion;
    }
    else if(opcion == 2 && contadoropcionuno == 0)
    {
        system ("cls");
        cout << "Todavia no se cargo ningun vector. Vuelva a ingresar al programa." << endl;
    }

    if(opcion == 3)
    {
        delete []vec;
        system("cls");
        cout << endl;
        cout << "Gracias por utilizar este programa." << endl;
    }

    return 0;
}
