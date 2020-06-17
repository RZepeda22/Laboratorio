#include "iostream"
#include "math.h"
using namespace std;
bool Bisiesto(int);
int main(){                
    int anio;
    cout <<"Ingrese un anio: ";
    cin >> anio;
   
 return 0;
}                

bool Bisiesto(int a){     
    if ( 0 != a % 4 )
    return false;
    else if (0 != a % 100)
    return true;
    else if (0 != a % 400)
    return false;
    else 
    return true;
}  