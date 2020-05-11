#include <iostream>
using namespace std;
int main(){
  int Numero1, Numero2, Numero3, Suma, Resultado;
  cout<<"Numero 1: ";
  cin >> Numero1;
  cout << "Numero 2: ";
  cin >> Numero2;
  cout<< "Numero 3: ";
  cin >> Numero3;
  Suma = Numero1+Numero2+Numero3;
  Resultado = Suma/3;
  cout<< "El promedio es: "<< Resultado;
  return 0;
}
