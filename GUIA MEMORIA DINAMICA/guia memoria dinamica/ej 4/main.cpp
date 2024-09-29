#include <iostream>

using namespace std;

int cantidadRepetidos (int *v, int tam)
{
    int contRepetidos = 0;
    int aux[tam] {};
    bool yaContado = false;

    for(int i=0; i<tam; i++)
    {
        aux[i] = v[i];
    }

    for(int i=0; i<tam; i++)
    {
        for(int x=0; x<i; x++)
        {
            if(v[i] == aux[x])
            {
                if(yaContado == false){
                contRepetidos++;
                yaContado = true;
                }else if(yaContado == true && contRepetidos > 2){
                  contRepetidos--;
                }

            }

        }

    }

    return contRepetidos;

}

int main()
{
    int *v, tam;
    int resultado;

    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> tam;

    ///PIDO MEMORIA
    v=new int[tam];
    if(v==nullptr)
    {
        cout << "no se pudo asignar memoria." << endl;
    }

    ///ASIGNO VALORES
    cout << "Ingrese " << tam << " numeros: " << endl;
    for(int i=0; i<tam; i++)
    {
        cin >> v[i];
    }

    ///LLAMO A LA FUNCION PARA VER CUANTOS NUMEROS DISTINTOS HAY REPETIDOS
    resultado = cantidadRepetidos (v, tam);

    ///MUESTRO

    cout << "Cantidad de numeros distintos que se repiten: " << resultado << endl;

    delete []v;
    return 0;
}
