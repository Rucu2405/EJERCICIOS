#include <iostream>
#include <ctime>

using namespace std;

void cargarVec (int *vec, int tamanio){
   for(int i=0; i<tamanio; i++){
       vec[i] = rand() % 50;
    }
}

void mostrarVec (int *vec, int tamanio){
   for(int i=0; i<tamanio; i++){
       cout << vec[i] << endl;
}
}

int main()
{
    srand(time(NULL));
    int tamanio, *vec;

    cout << "Ingrese el tamanio del vector: ";
    cin >> tamanio;

    vec=new int[tamanio];
    if(vec==nullptr){
        cout << "No se pudo asignar memoria." << endl;
        return -1;
    }

    cout << "Cargando vector con los " << tamanio << " numeros..." << endl;
    cargarVec (vec, tamanio);

    cout << "Mostrando vector..." << endl;
    mostrarVec (vec, tamanio);

    delete []vec;
    return 0;
}

