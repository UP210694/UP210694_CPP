#include<bits/stdc++.h> //agrega o incluye bibliotecas estándar
#include <conio.h>
int main()
{
    int an;

    printf( "\n   Introduzca un año: ");
    scanf( "%d", &an );

    if ( an % 4 == 0 && an % 100 != 0 || an % 400 == 0 )
        printf( "\n 1, ES BISIESTO" );
    else
        printf( "\n  0, NO ES BISIESTO" );
    return 0;
}