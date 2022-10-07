#include <iostream>
using namespace std;

int main()
{
    int n= 10,suma=0,pa = 0,im= 0;
    for (int i = 1;i <= n; i++)
    {
        if(i%2==0)
        {
            pa=pa+i;
        }
            else{
                im=im+i;
            }
        
    }
    suma= pa+im;
    printf("\n\n La suma de los numermos impares es %d", im);
    printf("\n\n La suma de los numeros pares es %d", pa);
    printf("\n\n La suma de los numermos ipares y pares es %d\n\n", suma);
    
}