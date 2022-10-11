#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double punt,din;
    cout<<"Ingresa tu puntuación";
    string nivel;
    cin>>punt;
    if (punt==0||punt==0.4||punt>=0.6)
    {
       if(punt==0)
       {
        nivel="Esto es Inaceptable";
       }
       else if (punt==0.4)
       {
        nivel="Esto es Aceptable";
       }
       else if (punt>=0.6)  
       {
        nivel="Esto es Meritorio";
       }
       din=punt*2400;
       cout<<"tu nivel es: "<<nivel<<" tu recibirás: $"<<din;
    }
    else
    {
        cout<<"Error,Puntuación inválida";
    }

    return 0;
}