#include <stdio.h>   //incluimos la libreria de estandar input/output
#include <unistd.h>  //para hacer sleep
#include <time.h>    //para inicializar el tiempo
#include <pthread.h> //para correr funcion por un thread
#include <stdlib.h>

// void calculo_aritmetico()
// {
//     int contador = 0;
//     while (contador < 2147483647)
//     {
//         contador = contador + 1;
//     }
// }

// int main()
// {
//     calculo_aritmetico();
//     calculo_aritmetico();
//     calculo_aritmetico();
//     calculo_aritmetico();
//     calculo_aritmetico();
//     return 0;
// }
// Con thread
void *calculo_aritmetico(void *vargp)
{
    int contador = 0;
    while (contador < 2147483647)
    {
        contador = contador + 1;
    }

    return NULL;
}

int main()
{
    pthread_t thread;
    pthread_create(&thread, NULL, calculo_aritmetico, NULL);
    pthread_join(thread, NULL);
    pthread_t thread1;
    pthread_create(&thread1, NULL, calculo_aritmetico, NULL);
    pthread_join(thread1, NULL);
    pthread_t thread2;
    pthread_create(&thread2, NULL, calculo_aritmetico, NULL);
    pthread_join(thread2, NULL);
    pthread_t thread3;
    pthread_create(&thread3, NULL, calculo_aritmetico, NULL);
    pthread_join(thread3, NULL);
    pthread_t thread4;
    pthread_create(&thread4, NULL, calculo_aritmetico, NULL);
    pthread_join(thread4, NULL);
    exit(0);
}
