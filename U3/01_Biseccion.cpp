#include <iostream>
#include <cmath>
using namespace std;
double funE1(double x)
{ 
    double y;    //x3^-2x+15--Funcion de ejemplo
    return (pow(x,3)-2*x+15);
}

int main()
{
    double x1=2;
    double x2=7;
    double xm;
    double es=.00000001;  //Error estandar
    double er=abs(x2-x1); //error relativo//abs= valor absoluto
    double r=funE1(0);
    
    int i=1;
    while(er > es )
    {
        xm=(x1+x2)/2;
        if(funE1(x1)* funE1(xm)<0)
        {
            x2=xm;
        }
        else
        { x1=xm; }
        er=abs(x2-x1);
        i++;
    }
    cout<<"\n\n El i = "<< i <<"\n\n La raiz = "<<xm<<endl;
    return 0;
}