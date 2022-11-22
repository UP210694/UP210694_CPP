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