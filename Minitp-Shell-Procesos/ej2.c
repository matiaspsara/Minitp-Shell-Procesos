#include <stdio.h>
// Funcion Suma
int suma(int a, int b)
{
    int sum = a + b;
    return sum;
}
// Funcion Resta
int resta(int a, int b)
{
    int diferencia = a - b;
    return diferencia;
}
// Funcion Multiplicacion
int multiplicacion(int a, int b)
{
    int mult = a * b;
    return mult;
}
// Funcion Division
float division(float a, float b)
{
    float div = a / b;
    return div;
}
int main()
{
    int num1, num2;

    // Asking for input
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    // Displaying output
    printf("Operaciones aritmeticas con %d y %d: \n", num1, num2);
    printf("Suma: %d\n", suma(num1, num2));
    printf("Resta: %d\n", resta(num1, num2));
    printf("Multiplicacion: %d\n", multiplicacion(num1, num2));
    printf("Division: %f\n", division(num1, num2));
    return 0;
}