//1. Escribe un programa en C++ que declare dos variables enteras, a y b, y calcule la suma, resta,
//multiplicación y división de estas variables. Muestra los resultados por pantalla.
//2. Escribe un programa en C++ que solicite al usuario un número entero positivo n y muestre la suma de
//todos los números enteros desde 1 hasta n.
//3. Escribe una función en C++ llamada esPrimo que reciba un número entero como parámetro y devuelva
//true si es primo y false si no lo es. Luego, en el main(), pide al usuario un número y muestra si es primo o no.
//4. Escribe un programa en C++ que calcule la raíz cuadrada de un número ingresado por el usuario
//utilizando la función sqrt() de la biblioteca cmath. Asegúrate de incluir la biblioteca correspondiente.

#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdio.h>
   

using namespace std; 

int OperacionesMate();
int Factorial();
bool EsPrimo();
int Raiz();

int main()
{
    int parcial;

    do
    {
        cout << "\t\tLaboratorio No. 5\n" // Menú
             << endl;

        cout << "\t[1] Operciones Matematicas\n"
             << endl;
        cout << "\t[2] Factorial \n"
             << endl;
        cout << "\t[3] Numeros Primos \n"
             << endl;
        cout << "\t[4] Raiz Cuardratica\n"
             << endl;

        cout << "\tElije una opcion: \n"; 
        cin >> parcial;

        switch (parcial)
        {
        case 1:
            OperacionesMate();
            break;

        case 2:
            Factorial();
            break;

        case 3:
            EsPrimo();
            break;

        case 4:
            Raiz();
            break;

        default:
            cout << "Opcion incorrecta.\n" << endl;
            break;
        }
    } while (parcial != 5); 
    return 0;
}

int OperacionesMate()
{
    char calc;
    int valor1;
    int valor2;

    cout << "Ingrese el primer dato: ";
    cin >> valor1;

    cout << "Ingrese el segundo dato: ";
    cin >> valor2;

    cout << "Selecciona la operacion (+, -, *, /)" << endl;
    cin >> calc;

    switch (calc)
    {
    case '+':
        cout << valor1 + valor2;
        break;

    case '-':
        cout << valor1 - valor2;
        break;

    case '*':
        cout << valor1 * valor2;
        break;

    case '/':
        if (valor2 != 0) 
            cout << valor1 / valor2;
        else
            cout << "Error";
        break;
    }
    return 0;
}


int Factorial()
{
    int n;
    int resultado = 1;

    cout << "Ingrese un numero entero positivo para calcular su factorial: ";
    cin >> n;

    while (n > 1)
    {
        resultado *= n;
        n--;                            
    }

    cout << "El factorial es: " << resultado << endl;
    
    return resultado;
}


bool EsPrimo()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero <= 1) 
    {
        cout << numero << " no es un numero primo.\n"
             << endl;
        return false; 
    }

    for (int i = 2; i <= sqrt(numero); i++)
    {
        if (numero % i == 0) 
        {
            cout << numero << " no es un numero primo.\n"
                 << endl;
            return false; 
        }
    }

    cout << numero << " es un numero primo." << endl;
    
    return true;
}

double calcularRaizCuadrada(int n) {
    return sqrt(n);
}

int Raiz()
{
    int numero;
   
    cout << "Ingrese un numero para calcular su raiz cuadradao: ";
    cin >> numero;

    double raizCuadrada = calcularRaizCuadrada(numero);

    cout << "Raiz cuadrada de " << numero << " es: " << raizCuadrada << endl;

    return 0;
}