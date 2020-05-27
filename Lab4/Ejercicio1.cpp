#include <iostream>
using namespace std;
int  main(){
	int div,divs,res;
  cout << "Ingresar el dividendo" << endl;
  cin >> div;
  cout << "Ingresar el divisor" << endl;
  cin >> divs;
  res = div % divs;
  if (res==0){
    cout << "Es divisible" << endl;
  }else{
    cout << "No es divisible";
  }
  return 0;
}