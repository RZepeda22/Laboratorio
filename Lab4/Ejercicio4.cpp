#include <iostream>
#include <string>
using namespace std;
int  main(){
	string palabra;
  int res;
  cout << "Ingrese la palabra" << endl;
  cin >> palabra;
  cout << "La palabra tiene: " << palabra.length() << " caracteres"<<  endl;
  res = palabra.length()%2;
  if(res==0){
    cout << "La longitud de la cadena es par" << endl;
  }else{
    cout << "La longitud de la cadena es impar" << endl;
  }
  
  return 0;
}