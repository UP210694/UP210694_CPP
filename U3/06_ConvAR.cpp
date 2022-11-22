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