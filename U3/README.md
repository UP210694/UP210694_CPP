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

<br>
<h2>03_Cosenos.cpp</h2>

<hr>  

 More about this code: 
[click here to see the code](https://github.com/UP210694/UP210694_CPP/blob/main/U3/03_Cosenos.cpp)   

<br>
<h2>04_DesEstan.cpp</h2>

<hr>   
 
More about this code:  
[click here to see the code](https://github.com/UP210694/UP210694_CPP/blob/main/U3/04_DesEstan.cpp)    

<br>
<h2>05_Desgloce.cpp</h2>

<hr>

PMore about this code:  
[click here to see the code](https://github.com/UP210694/UP210694_CPP/blob/main/U3/05_Desgloce.cpp) 

<br>
<h2>06_ConvAR.cpp</h2>

<hr>

More about this code:  
[click here to see the code](https://github.com/UP210694/UP210694_CPP/blob/main/U3/06_ConvAR.cpp)  

<br>
<h2>07_RFC.cpp</h2>

<hr>

More about this code: 
[click here to see the code](https://github.com/UP210694/UP210694_CPP/blob/main/U3/07_RFC.cpp) 

<br>
<h2>08_Vector.cpp</h2>
<hr>

More about this code:  
[click here to see the code](https://github.com/UP210694/UP210694_CPP/blob/main/U3/08_Vector.cpp) 

<br>
<h2>09_FR.cpp</h2>

<hr>

More about this code: 
[click here to see the code](https://github.com/UP210694/UP210694_CPP/blob/main/U3/09_FR.cpp) 

