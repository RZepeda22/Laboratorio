#include <iostream>
using namespace std;
int  main(){
	int num,divs,res;
  cout << "Ingresar un numero" << endl;
  cin >> num;
  res = num%2;
  if (res==0){
    cout << "El numero es par" << endl;
  }else{
    cout << "El numero es impar" << endl;
  }
  return 0;
}
