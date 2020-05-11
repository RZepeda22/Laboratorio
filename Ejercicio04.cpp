#include <iostream>
using namespace std;
int main(){
    float precio,total;
    int cantidad;
    string producto;
    cout << "Nombre del producto: " << endl;
    cin >> producto;
    cout << "Cuanto vale la unidad: " << endl;
    cin >> precio;
    cout << "Cuantas unidades llevara: " << endl;
    cin >> cantidad;
    total = precio*cantidad;
    cout << "Por total gastara: " << total << " dolares." << endl;
    return 0;
}