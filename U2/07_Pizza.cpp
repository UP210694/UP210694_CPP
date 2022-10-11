#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int veg, ingr;
    string elemento,tipo;
    cout<<"Si quieres tu pizza vegetariana dame un 1, si no dame un 0 \n";
    cin>>veg;
    if(veg==0)
    {
        tipo="No vegetariana";
        cout<<"Escoge un ingrediente \n 1.Peperoni \n 2.Jamon \n 3.Salmón \n";
        cin>>ingr;
        switch (ingr)
        {
        case 1:
            elemento="Peperoni";
            break;
        case 2:
            elemento="Jamon";
            break;
        case 3:
            elemento="Salmon";
            break;
        default:
            break;
        }
    }
    else
    {
        tipo="Vegetariana";
        cout<<"Dame el numero del ingrediente que desees  \n 1.Pimiento \n 2.Tofu \n ";
        cin>>ingr;
        switch (ingr)
        {
        case 1:
            elemento="Pimiento";
            break;
        case 2:
            elemento="Tofu";
            break;
        default:
            break;
        }
    }

    cout<<"Tu pizza es: "<< tipo<< "\n Contiene: Mozzarela, Tomate y "<<elemento;
    return 0;
}