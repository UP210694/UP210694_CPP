#include <iostream>
#include <stdlib.h>

using namespace std;

 int main()
 {
    for (int i = 0; i<11; i++)
    {
        for(int j = 0;j<11; j++){
            if  (i == 0)
     cout<< j << "       ";

      else
      cout<< (i * j) << "      ";

        }
        cout<< "\n";
    }
    return 0;
 }