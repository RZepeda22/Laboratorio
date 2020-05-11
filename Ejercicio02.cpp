#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float Radio, Area, Perimetro, PI;
    cout<<"Ingrese el radio: ";
    cin>> Radio;
    PI=3.1416;
    Area = PI*pow(Radio,2);
    Perimetro = 2*PI*Radio;
    cout<<"El perimetro es: "<<Perimetro << endl;
    cout<<"El area es: "<<Area;
    return 0;
}