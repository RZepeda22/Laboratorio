#include <iostream>
#include <string.h>
using namespace std;
int  main(){
	char palabra[100],li,lf;
  int length;
  cout << "Ingrese la palabra" << endl;
  cin >> palabra;
  length = strlen(palabra);
  li = palabra[0];
  for(int i=0;i<length;i++){
  lf = palabra[i];
  }
  if(li==lf){
    cout << "La palabra finaliza con la letra que comienza" << endl;
  }else{
    cout << "La palabra no finaliza con la letra que comienza" << endl;
  }
  return 0;
}
