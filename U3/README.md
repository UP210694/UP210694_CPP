UP210694_CPP  
<center><p style="font-family:Castellar;" color= "#EE253D"><b>María Belén Salazar Delgado<b></p> 
</center>  
<br>
<hr> 

<br><H1>Unit 3</H1>
<p align="left">In this unit we were working with various types of options and structures to make functions, such as vectors, conversions. Some of them with different explanations and code with different ways of doing to obtain the indicated and correct result.    
<div align ="center">
<img src="/.vscode/exp.gif"/>
</div>
<br>  
Below we can see 9 works carried out in this third unit programmed with c++.</p>

<hr>
<hr>

 
<h2> 👨‍💻 Unit 3 Functions 👨‍💻</h2>
<e1>
<li>📋 01_Biseccion.cpp</li>
<li>📋 02_ABisiesto.cpp</li> 
<li>📋 03_Cosenos.cpp</li>
<li>📋 04_DesEstan.cpp</li>
<li>📋 05_Desgloce.cpp</li> 
<li>📋 06_ConvAR.cpp</li>
<li>📋 07_RFC.cpp</li>
<li>📋 08_Vector.cpp</li>
<li>📋 09_FR.cpp</li>
</e>
  
 <br> 
<h2><b>01_Biseccion.cpp </b></h2>

<hr>

 More about this code: 

[click here to see the code](https://github.com/UP210694/UP210694_CPP/blob/main/U3/01_Biseccion.cpp)   

__Visualization of code__
<p align="left"> 

```
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
```

__Visualization of compiled code__
<center>
<img src="/U3/Bisec.PNG" alt="Stickman" width="350" height="390">
</center>

<br>
<h2>02_ABisiesto.cpp </h2>

<hr>

 More about this code:

[click here to see the code](https://github.com/UP210694/UP210694_CPP/blob/main/U3/02_ABisiesto.cpp.cpp)  


__Visualization of code__
<p align="left"> 
 
```
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
```

__Visualization of compiled code__
<center>
<img src="/U3/noBi.PNG" alt="Stickman" width="350" height="390">
<img src="/U3/siBi.PNG" alt="Stickman" width="350" height="390">
</center>

<br>

<br>
<h2>03_Cosenos.cpp</h2>

<hr>  

 More about this code: 
[click here to see the code](https://github.com/UP210694/UP210694_CPP/blob/main/U3/03_Cosenos.cpp)  

__Visualization of code__
<p align="left"> 
 
```
#include <iostream>
#include <math.h>
using namespace std;

#define n 6
#define PI 3.14159265358979323846

double g2r(double grados){
    return grados * PI/180;
}

long double factorial (int num)
{
    long double ft=1.0;

    for (int i=1; i<=num; i++){
        ft=ft*i;
    }
    return ft;
}

double cos(double x){
    double r=0;
    for (int i = 0; i <= n; i++)
    {
        r=r+(pow(-1, i)*((pow(x, 2*i))/factorial(2*i)));
    }
    
    
    return r;
}

int main(int argc, char const *argv[])
{
    double angulo;
    cout << "Dame un angulo" << endl;
    cin >> angulo;
    double a=g2r(angulo), res;
    cout << "El resultado es:" << endl;
    res=cos(a);
    cout << res << endl;

    return 0;
}
```

__Visualization of compiled code__
<center>
<img src="/U3/coseno.PNG" alt="Stickman" width="350" height="390">
</center>

<br>


<br>
<h2>04_DesEstan.cpp</h2>

<hr>   
 
More about this code:  
[click here to see the code](https://github.com/UP210694/UP210694_CPP/blob/main/U3/04_DesEstan.cpp)    

__Visualization of code__
<p align="left"> 
 
```
#include<bits/stdc++.h> //agrega o incluye bibliotecas estándar
using namespace std;

int main()
{
    int n;  //número de elementos que queremos que el usuario ingrese
    cout<<"\n\n Introduzca el número de elementos o datos\n ";
    cin>>n;

    int arr[n]; //matriz para almacenar los elementos

    cout<<"\nIntroduce los elementos\n";
for(int i=0;i<n;i++)
        cin>>arr[i];

    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }

    double mean = (double)sum/n;

    double sum2 = 0.0;

    for(int i=0;i<n;i++)
    {
        sum2 = sum2 + (arr[i]-mean)*(arr[i]-mean);
    }
    
    double variance = (double)sum2/n;// proceso para dar varianza 
      
    double sD = sqrt(variance);
    
    cout<<"\n Media: "<<mean<<endl; //Impresion de media
    cout<<"\nVarianza: "<<variance<<endl; //Impresion de variaza
    cout<<"\nLa Desviación Estándar Poblacional: "<<sD;
  {
      double variance = (double)sum2/(n-1);// proceso para dar varianza 
      
    double sD = sqrt(variance);
    cout<<"\nLa Desviación Estándar de la Muestra: "<<sD;
  }
}
```

__Visualization of compiled code__
<center>
<img src="/U3/DesEs.PNG" alt="Stickman" width="250" height="190">
</center>

<b

<br>
<h2>05_Desgloce.cpp</h2>

<hr>

PMore about this code:  
[click here to see the code](https://github.com/UP210694/UP210694_CPP/blob/main/U3/05_Desgloce.cpp) 

__Visualization of code__
<p align="left"> 
 
```
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
```

__Visualization of compiled code__
<center>
<img src="/U3/desglo.PNG" alt="Stickman" width="350" height="390">

</center>


<br>
<h2>06_ConvAR.cpp</h2>

<hr>

More about this code:  
[click here to see the code](https://github.com/UP210694/UP210694_CPP/blob/main/U3/06_ConvAR.cpp)  

__Visualization of code__
<p align="left"> 
 
```
#include<bits/stdc++.h> //agrega o incluye bibliotecas estándar
using namespace std;

void ro(int x);
void print(string t);

int main(){
    print("\n\t\t Conversion de Numeros\n ");
    cout << "\nIntroduce un numero mayor de -1- y menoe que -3999-" << endl;
    int r;
    cin >> r;
    if(( r > 3999 )||(r<1)){
        cout << "¡Error, Cantidad Invalida!" << endl;
        return 0;
    }
    cout << "\n\t\t----------------------------------------" << endl;
    print("\n\t\t La Conversion del Numeros es: ");
    ro( r );
    cout << endl << "\n\t\t----------------------------------------" << endl;

    return 0;
}
void ro(int x){
   while(x>=1000){x-=1000;print("M");}
   while(x>=900){x-=900;print("CM");}
   while(x>=500){x-=500;print("D");}
   while(x>=400){x-=400;print("CD");}
   while(x>=100){x-=100;print("C");}
   while(x>=90){x-=90;print("XC");}
   while(x>=50){x-=50;print("L");}
   while(x>=40){x-=40;print("XL");}
   while(x>=10){x-=10;print("X");}
   while(x>=9){x-=9;print("IX");}
   while(x>=5){x-=5;print("V");}
   while(x>=4){x-=4;print("IV");}
   while(x>=1){x-=1;print("I");}
}
void print(string t){
    cout << t;
} 
```

__Visualization of compiled code__
<center>
<img src="/U3/noBi.PNG" alt="Stickman" width="350" height="390">
<img src="/U3/siBi.PNG" alt="Stickman" width="350" height="390">
</center>



<br>
<h2>07_RFC.cpp</h2>

<hr>

More about this code: 
[click here to see the code](https://github.com/UP210694/UP210694_CPP/blob/main/U3/07_RFC.cpp) 

__Visualization of code__
<p align="left"> 
 
```
#include<bits/stdc++.h> //agrega o incluye bibliotecas estándar
using namespace std;
int main(){
    string nombre,apellidop,apellidom,anio,mes,dia,rfc;
    cout<<"\n\t\t -RFC-\n "<<endl;
    cout<<"\nIntroduce los datos solicitados"<<endl;
    cout<<"Ingresa tu nombre: "<<endl;
    cin>>nombre;
    cout<<"Ingresa tu apellido paterno: "<<endl;
    cin>>apellidop;
    cout<<"Ingresa tu apellido materno: "<<endl;
    cin>>apellidom;
    cout<<"Ingresa año de nacimiento (ingrese con numeros): "<<endl;
    cin>>anio;
    cout<<"Ingresa mes de nacimiento: (ingrese con numerose, ejemplo en mayo= 05) "<<endl;
    cin>>mes;
    cout<<"Ingresa dia de nacimiento(ingrese con numeros): "<<endl;
    cin>>dia;
    rfc=apellidop.substr(0,2);
    rfc=rfc+apellidom.substr(0,1);
    rfc=rfc+nombre.substr(0,1);
    rfc=rfc+anio;
    rfc=rfc+mes;
    rfc=rfc+dia; 
    cout<<"\n\t\tSu RFC es: ["<<rfc<<"]"<<endl;
    return 0;
}
```

__Visualization of compiled code__
<center>
<img src="/U3/rfci.PNG" alt="Stickman" width="350" height="390">
</center>


<br>
<h2>08_Vector.cpp</h2>
<hr>

More about this code:  
[click here to see the code](https://github.com/UP210694/UP210694_CPP/blob/main/U3/08_Vector.cpp) 

__Visualization of code__
<p align="left"> 
 
```
#include<iostream>
using namespace std;
void llenar(int V[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el valor para el Vector "<< i <<endl;
        cin >> V[i];
    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "\n\t\t¿Cuantos numeros quieres en el vector?"<<endl;
    cin >> n;
    int V[n];
    llenar(V, n);

    for (int i = n-1; i >=0; i--)
    {
        for (int j = 0; j < i ; j++)
        {
            if(V[j]<V[j+1])
            swap(V[j], V[j+1]);
        }
              
    }
    cout << "Vector ordenado es:" << endl; 
    for (int i=n-1; i>=0; i--)
    {
        cout << V[i] << endl;
    }
    
    return 0;
}
```

__Visualization of compiled code__
<center>
<img src="/U3/vecto.PNG" alt="Stickman" width="350" height="390">
</center>


<br>
<h2>09_FR.cpp</h2>

<hr>

More about this code: 
[click here to see the code](https://github.com/UP210694/UP210694_CPP/blob/main/U3/09_FR.cpp) 

__Visualization of code__
<p align="left"> 
 
```
#include <iostream>  
using namespace std;
long long factorial(long long n)
  {
     if(n==1 || n==0)   // condición de parada
         return 1;
      return n * factorial(n - 1);   // Llamada recursiva a la función y condición de parada
  }
int main()
  {
     int n; 
     cout<<"\n\t\tIngrese un numero:\n";
     cin >> n; 
     cout<< "factorial de  "<< n <<" es " << factorial(n) << endl;
     return 0;
  }
```

__Visualization of compiled code__
<center>
<img src="/U3/facti.PNG" alt="Stickman" width="350" height="390">
</center>

<div align ="center">
<h2>🔄RETURN🔄<h2/>:

 > [☞ Click to go back ☜](https://github.com/UP210694/UP210694_CPP/tree/main/U3#readme)
</div>

