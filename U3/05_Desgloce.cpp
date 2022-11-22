#ifdef __MBSD__
    #include <iostream.h>
    #include <stdlib.h>
#else
    #include <iostream>
    #include <cstdlib>
    using namespace std;
#endif  //controla la compilación de partes de un archivo de código fuente.

int main (void)
{
    cout << "\t\t Desglose mínimo en billetes y monedas en una cantidad Exacta\n";
    int bi_1000,mo_10, bi_100, bi_20, bi_200, mo_5, bi_50, bi_500, cantidad, mo_1, mo_2;
    cout << "\n\nIngresa cantidad de Dinero: ";
    cin >> cantidad;
    cin.get();
    
    mo_1=cantidad;
    bi_1000=(mo_1-mo_1%1000)/1000;
    mo_1=mo_1%1000;
    bi_500=(mo_1-mo_1%500)/500;
    mo_1=mo_1%500;
    bi_200=(mo_1-mo_1%200)/200;
    mo_1=mo_1%200;
    bi_100=(mo_1-mo_1%100)/100;
    mo_1=mo_1%100;
    bi_50=(mo_1-mo_1%50)/50;
    mo_1=mo_1%50;
    bi_20=(mo_1-mo_1%20)/20;
    mo_1=mo_1%20;
    mo_10=(mo_1-mo_1%10)/10;
    mo_1=mo_1%10;
    mo_5=(mo_1-mo_1%5)/5;
    mo_1=mo_1%5;
    mo_2=(mo_1-mo_1%2)/2;
    mo_1=mo_1%2;
    
    cout << "Valor de billetes de 1000: " << bi_1000 << endl;
    cout << "Valor de billetes de 500: " << bi_500 << endl;
    cout << "Valor de billetes de 200: " << bi_200 << endl;
    cout << "Valor de billetes de 100: " << bi_100 << endl;
    cout << "Valor de billetes de 50: " << bi_500 << endl;
    cout << "Valor de billetes de 20: " << bi_20 << endl;
    cout << "Valor de monedas de 10: " << mo_10 << endl;
    cout << "Valor de monedas de 5: " << mo_5 << endl;
    cout << "Valor de monedas de 2: " << mo_2 << endl;
    cout << "Valor de monedas de 1: " << mo_1 << endl;
    cout << endl;
    return EXIT_SUCCESS;
}