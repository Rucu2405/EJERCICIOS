#include <iostream>

using namespace std;

int main()
{

    int contadorpositivos = 0, contadornegativos = 0;
    int vecNumeros[10] {};
    int *vecPos;
    int *vecNeg;

///INGRESO NUMEROS

    cout << "ingrese 10 numeros: " << endl;
    for(int i=0; i<10; i++)
    {
        cin >> vecNumeros[i];
    }

///SE CUENTAN CUANTOS POSITIVOS Y NEGATIVOS HAY

    for(int i=0; i<10; i++)
    {
        if(vecNumeros[i] > 0)
        {
            contadorpositivos++;
        }
        else if(vecNumeros[i] < 0)
        {
            contadornegativos++;
        }
    }

///CREO LOS VECTORES DINAMICOS

    vecPos=new int[contadorpositivos];
    if(vecPos==nullptr)
    {
        cout << "No se pudo asignar memoria." << endl;
        return -1;
    }

    vecNeg=new int[contadornegativos];
    if(vecNeg==nullptr)
    {
        cout << "No se pudo asignar memoria." << endl;
        return -1;
    }

///ASIGNO LOS VALORES QUE CORRESPONDEN A LOS VECTORES DINAMICOS POS Y NEG

    contadorpositivos = 0;
    contadornegativos = 0;

    for(int i=0; i<10; i++)
    {
        if(vecNumeros[i] > 0)
        {
            vecPos[contadorpositivos++] = vecNumeros[i];
        }
        else
        {
            vecNeg[contadornegativos++] = vecNumeros[i];
        }
    }

///MUESTRO

    cout << "Vector de numeros positivos: " << endl;
    for(int i=0; i<contadorpositivos; i++)
    {
        cout << vecPos[i] << endl;
    }
    cout << "Vector de numeros negativos: " << endl;
    for(int i=0; i<contadornegativos; i++)
    {
        cout << vecNeg[i] << endl;
    }

    delete []vecPos;
    delete []vecNeg;

    return 0;
}
