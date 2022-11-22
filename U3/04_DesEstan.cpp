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