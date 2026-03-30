
#include <iostream>
#include <vector>
#include <array>
#include <string>
using namespace std;
int main(){
    
int identidad [4][4] = {
 {1,0,0,0},
 {0,1,0,0},
 {0,0,1,0},
 {0,0,0,1}
 };
int matriz[4][4];
cout << "Ingrese los numeros para la matriz 4x4 : "<< endl;
for (int i =0; i < 4; i++){
    for (int j = 0; j < 4; j++){
cout << "Elemento para la fila [" << i << "] columna [" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

int suma [4][4];
for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
        suma[i][j] = matriz[i][j] + identidad[i][j];
    } 
}
cout << "La suma de las matrices es: "<< endl;
for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
        cout << suma [i][j] <<"\t";
    }
    cout<< endl;
}

    
    
    return 0;
}
