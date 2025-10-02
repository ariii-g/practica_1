#include <iostream>
#include <cmath>
using namespace std;

// Callback functions for different operations
float add(float a, float b)
{
    return a + b;
}

float multiply(float a, float b)
{
    return a * b;
}

float subtract(float a, float b)
{
    return a - b;
}
float division(float a, float b)
{
    if (b != 0)
        return a / b;
    else
    {
        cout << "Error: Division por cero" << endl;
        return 0;
    }
}
float potencia(float a, float b)
{
    return pow(a, b);
}

// Function that performs an operation using a callback
void performOperation(float (*callback)(float, float), float x, float y)
{
    cout << "El resultado es: " << callback(x, y) << endl;
}
void leer_op (float &a, char &op, float &b){
    cout << "Calculadora con callbacks" << endl;
    cout << "Ingrese la operacion a realizar con 2 numeros usando +,-,*,/,^ " << endl;
    cin >> a >> op >> b;
}

int main()
{
    float a, b;
    char op;
    leer_op(a, op, b);
    switch (op)
    {  
    case '+':
        performOperation(add, a, b);
        break;
    case '*':
        performOperation(multiply, a, b);
        break;
    case '-':
        performOperation(subtract, a, b);
        break;  
    case '/':
        performOperation(division, a, b);
        break;
    case '^':
        performOperation(potencia, a, b);
        break;
    default:
        cout << "Operación no válida. Ingresa correctamente los datos (a + b, a * b, a - b, a / b, a ^ b)" << endl;
        break;
    }
}