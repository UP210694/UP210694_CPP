#include <iostream>
using namespace std;

int main()

{
    char letra = 65; //letras= 'A'

    for (int i = 0; i < 26; i++)
    {
        cout << letra << "\t";
        letra = letra + 1;
        
    }
    return 0;
}