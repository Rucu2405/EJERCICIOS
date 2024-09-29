#include <iostream>

using namespace std;

void puntoA_mayores(float importecategoria[], string nombrecategoria[])
{
    int mayorcategoria = 0;
    string mayornombre;

    for(int i=0; i<10; i++)
    {
        if(importecategoria[i] > mayorcategoria)
        {
            mayorcategoria = importecategoria[i];
            mayornombre = nombrecategoria[i];
        }
    }
    cout << endl;
    cout << "-Punto A): La categoria de gasto a la que mas dinero se destino es " << mayornombre << "." << endl;
    cout << endl;
}

void puntoB_totalacumulado (float importecategoria[], string nombrecategoria[])
{
    cout << "-Punto B): " << endl;
    cout << endl;

    for(int i=0; i<10; i++)
    {

        cout << nombrecategoria [i] << ": " << importecategoria[i] << endl;
    }
    cout << endl;
}

void puntoC_catsinreg (float importecategoria[])
{
    int contador = 0;
    for(int i=0; i<10; i++)
    {
        if(importecategoria[i] == 0)
        {
            contador++;

        }

    }

    cout << "-Punto C): La cantidad de categorias que no registraron movimientos es de " << contador << "." << endl;
    cout << endl;

}

void puntoD_gastosdecadadia (float acumulagastosdia[])
{
    cout << "-Punto D): " << endl;
    for(int i=0; i<31; i++)
    {
        if(acumulagastosdia[i] > 0)
        {
            cout << "Dia #" << i+1 << ": $" << acumulagastosdia[i] << endl;
        }

    }


}

int main()
{

    int id;
    int dia;
    float importe;
    float acumulagastosdia[31] {};
    float importecategoria[10] {};
    string nombrecategoria[10] {"1-Servicios", "2-Alimentacion", "3-Limpieza", "4-Transporte", "5-Educacion", "6-Salud", "7-Ocio", "8-Impuestos", "9-Vestimenta", "10-Inversiones"};

    cout << "Ingrese dia del mes: ";
    cin >> dia;

    while (dia != 0)
    {
        cout << "Ingrese ID de categoria de gasto: ";
        cin >> id;

        cout << "Ingrese importe del gasto: $";
        cin >> importe;

        importecategoria[id-1] += importe;
        acumulagastosdia[dia-1] += importe;

        cout << "-------" << endl;
        cout << "Ingrese dia del mes: ";
        cin >> dia;
    }

    puntoA_mayores (importecategoria, nombrecategoria);
    puntoB_totalacumulado (importecategoria, nombrecategoria);
    puntoC_catsinreg (importecategoria);
    puntoD_gastosdecadadia (acumulagastosdia);

    return 0;
}
