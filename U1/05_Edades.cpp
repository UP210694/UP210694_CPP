#include <iostream>
using namespace std;

int main()
{

    int edad;

    cout << endl
         << "Ingrese una edad: ";
    cin >> edad;

    if (edad > 0 && edad <= 150)
    {

        if (edad <= 30)
        {
            cout << endl
                 << "\n\n Primera edad.\n\n";
        }
        else if (edad > 30 && edad < 61)
        {
            cout << endl
                 << "Segunda edad.\n\n";
        }
        else if (edad > 60 && edad < 91)
        {
            cout << endl
                 << "Tercera edad.\n\n";
        }
        else if (edad > 90 && edad <= 150)
        {
            cout << endl
                 << "Ya Date de baja de la vida bero, hazle un favor al Mundo.\n\n";
        }
    }
    else
    {
        cout << endl
             << "Esa edad no existe. ¿ o Acaso eres Edward Cullen?\n\n";
    }

    getchar();
    return 0;
}