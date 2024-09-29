#include <iostream>

using namespace std;

float CargarNotas(float NotasPrimerParcial[], int cantidaddealumnos, float Promedio)
{

    for(int i=0; i<cantidaddealumnos; i++)
    {
        cout << "Ingrese la nota del alumno N " << i+1 << ": ";
        cin >> NotasPrimerParcial[i];
        Promedio += NotasPrimerParcial[i];
    }
    Promedio = Promedio / cantidaddealumnos;
    return Promedio;
}

void PedirNota(float NotasPrimerParcial[], int cantidaddealumnos)
{
    int numerodealumno;
    cout << "Ingrese el numero de alumno para saber su nota: ";
    cin >> numerodealumno;
    cout << "La nota es " << NotasPrimerParcial[numerodealumno-1] << endl;
}

void NotasMayorAlPromedio (float NotasPrimerParcial[], int cantidaddealumnos, float Promedio)
{
    int notasmayores = 0;
    for(int i= 0; i<10; i++)
    {
        if (NotasPrimerParcial[i]>Promedio)
        {
            notasmayores++;
        }
    }
    cout << "La cantidad de estudiantes que obtuvieron una nota mayor al promedio son: " << notasmayores << endl;
}

int main()
{

    float NotasPrimerParcial[10];
    int cantidaddealumnos = 10;
    float Promedio = 0;
    Promedio = CargarNotas(NotasPrimerParcial, cantidaddealumnos, Promedio);
    PedirNota(NotasPrimerParcial, cantidaddealumnos);
    NotasMayorAlPromedio(NotasPrimerParcial, cantidaddealumnos, Promedio);

    return 0;
}
