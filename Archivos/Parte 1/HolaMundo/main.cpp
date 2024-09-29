#include <iostream>
using namespace std;
#include "Pais.h"
#include "Ciudad.h"

bool PuntoUnoBuscarCodigoPais()
{
    Pais registro;
    FILE *pFile;
    string codigoingresado;

    pFile = fopen("paises.dat", "rb");

    if(pFile == nullptr)
    {
        cout << "NO SE PUDO ABRIR EL ARCHIVO." << endl;
        return false;
    }

    cout << "INGRESE CODIGO DE PAIS A BUSCAR: ";
    cin >> codigoingresado;

    while(fread(&registro, sizeof(Pais), 1, pFile) == 1)
    {
        if(registro.getCodigo() == codigoingresado)
        {
            fclose(pFile);
            cout << "SE ENCONTRO ESE REGISTRO EXITOSAMENTE." << endl;
            return true;
        }
    }
    fclose(pFile);
    cout << "NO SE ENCONTRO EL REGISTRO." << endl;
    return false;
}

bool PuntoDosAgregarRegistro()
{
    Pais country;
    FILE *pFile;
    bool resultado;

    pFile = fopen("paises.dat", "ab");

    if(pFile == nullptr)
    {
        cout << "NO SE PUDO ABRIR EL ARCHIVO." << endl;
        return false;
    }

    country.cargarPais();

    cout << "AGREGANDO REGISTRO...";

    resultado = fwrite(&country, sizeof(Pais), 1, pFile) == 1;

    if(resultado == true)
    {
        fclose(pFile);
        cout << endl;
        cout << "SE AGREGO EL REGISTRO EXITOSAMENTE." << endl;
        return true;
    }
    else
    {
        fclose(pFile);
        cout << endl;
        cout << "NO SE PUDO AGREGAR EL REGISTRO." << endl;
        return false;
    }
}

void PuntoTresListarPaises()
{
    Pais paises;
    FILE *pFile;

    pFile = fopen("paises.dat", "rb");

    if(pFile == nullptr)
    {
        cout << "NO SE PUDO ABRIR EL ARCHIVO." << endl;
        return;
    }

    cout << "------------------------------" << endl;
    cout << "LISTADO DE PAISES" << endl;
    cout << "------------------------------" << endl;

    while(fread(&paises, sizeof(Pais), 1, pFile) == 1)
    {
        paises.mostrar();
    }
}

void PuntoCuatroListarCiudadPorIDPais()
{
    Ciudad city;
    Pais country;
    FILE *pCiudad, *pPais;
    string codigoingresado;

    pCiudad = fopen("ciudades.dat", "rb");
    pPais = fopen("paises.dat", "rb");

    if(pCiudad == nullptr)
    {
        cout << "NO SE PUDO ABRIR EL ARCHIVO." << endl;
        return;
    }
    if(pPais == nullptr)
    {
        cout << "NO SE PUDO ABRIR EL ARCHIVO." << endl;
        return;
    }

    cout << "INGRESE ID DE PAIS PARA BUSCAR LAS CIUDADES: ";
    cin >> codigoingresado;

    while(fread(&city, sizeof(Ciudad), 1, pCiudad) == 1)
    {
        if(city.getIDPais() == codigoingresado)
        {
            city.mostrar();
        }
    }

    fclose(pCiudad);

    while(fread(&country, sizeof(Pais), 1, pPais) == 1)
    {
        if(country.getCodigo() == codigoingresado)
        {
            cout << "ID de la capital de " <<codigoingresado<<": " <<country.getIDCapital() << endl;
        }
    }

    fclose(pPais);
}

void PuntoCincoListarNombreSuperficie()
{
    Pais paises;
    FILE *pFile;
    float superficieMundial = 51007200;
    float porcentaje;

    pFile = fopen("paises.dat", "rb");

    if(pFile == nullptr)
    {
        cout << "NO SE PUDO ABRIR EL ARCHIVO." << endl;
        return;
    }

    cout << "---------------------------------------------" << endl;
    cout << "|LISTADO DE PAISES CON SU NOMBRE Y SUPERFICIE|" << endl;
    cout << "---------------------------------------------" << endl;

    while(fread(&paises, sizeof(Pais), 1, pFile) == 1)
    {
        porcentaje = (paises.getSuperficie() * 100) / superficieMundial;
        cout << paises.getNombre() << ", " << paises.getSuperficie() << "km2, representa el " << porcentaje << "% del total mundial" << endl;
    }
    fclose(pFile);
}


int main()
{
    int opc;

    cout << "----------------------------------" << endl;
    cout << "| 1- Buscar pais                 |" << endl;
    cout << "| 2- Agregar pais                |" << endl;
    cout << "| 3- Listar paises               |" << endl;
    cout << "| 4- Listar ciudades             |" << endl;
    cout << "| 5- Listar paises con su nombre |" << endl;
    cout << "|    y superficie                |" << endl;
    cout << "| 6- Salir                       |" << endl;
    cout << "----------------------------------" << endl;

    cout << "    Ingrese una opcion: ";
    cin >> opc;
    cout << endl;
    system("cls");

    switch(opc)
    {
    case 1:
        PuntoUnoBuscarCodigoPais();
        cout << endl;
        system("pause");
        system("cls");
        break;

    case 2:
        PuntoDosAgregarRegistro();
        cout << endl;
        system("pause");
        system("cls");
        break;

    case 3:
        PuntoTresListarPaises();
        cout << endl;
        system("pause");
        system("cls");
        break;

    case 4:
        PuntoCuatroListarCiudadPorIDPais();
        cout << endl;
        system("pause");
        system("cls");
        break;

    case 5:
        PuntoCincoListarNombreSuperficie();
        cout << endl;
        system("pause");
        system("cls");
        break;

    case 6:
        return 0;

    default:
        cout << "Opcion incorrecta. Vuelva a ingresar el numero." << endl;
    }

  return main();
}
