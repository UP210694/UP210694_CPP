#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int i;
    int n;
    char opcion = 's';
    printf("Tabla de Multiplicar\n");
    while (opcion == 's')
    {
        // entrada
        printf("Numero: ");
        scanf("%d", &n);

        // proceso
        i = 1;
        do
        {
           printf("\n %d X %d = %d\n",n,i,n*i);
            i++;
        } while (i <= 10);
            
        printf("\n Desea otra <s/n>");
        scanf("%s", &opcion);
    }
    printf("...Hecho...");
    return 0;
}