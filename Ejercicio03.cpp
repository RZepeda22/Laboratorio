#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a, b, c, res, raiz, denominador, x1, x2;
    cout<< "Ingrese a: ";
    cin>> a;
    cout<<"Ingrese b: ";
    cin>> b;
    cout<< "Ingrese c: ";
    cin>> c;
    res = pow(b,2)-(4*a*c);
    raiz = sqrt(res);
    denominador = 2*a;
    x1 = (-b+raiz)/denominador;
    x2 = (-b-raiz)/denominador;
    cout<< "X1= "<< x1 << endl;
    cout<< "X2= "<< x2;
    return 0;
}