#include <iostream>
#include <array>

using namespace std;
int main(){

int matriz [3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

int mat[3][3];

for (int i = 0; i < 3; i ++){
    for (int j = 0; j < 3; j++){
        mat[i][j] = matriz[j][i];
    }

}
cout << "Matriz original: " << endl;
for (int i = 0; i < 3; i ++){
    for (int j = 0; j < 3; j++){
        cout << matriz[i][j] << "\t" << endl;
    }
    cout << endl;
}
cout << "Transpuesta: " << endl;

for (int i =0; i < 3; i++){
    for (int j = 0; j < 3; j ++){
        cout << mat[i][j] << "\t";
    }
    cout << endl;
}












    return 0;
}
