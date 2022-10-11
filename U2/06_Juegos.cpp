#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int edad;
    cout<<"Ingresa tu edad";
    cin>>edad;
    if(edad<4)
    {
        cout<<"Entras gratis";
    }
    else if(edad>=4 && edad<=18)
    {
        cout<<"Deberas Pagagar: $5";
    }
    else
    {
        cout<<"Deberas Pagagar: $10";
    }
    return 0;
}