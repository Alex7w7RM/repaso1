#include "iostream"
#include "conio.h"

using namespace std;

int main(){
    // video 32
    int numero[5]= {1,2,3,4,5};
    int  suma =0;
    for (int i = 0; i <5 ; i++) {
        suma = suma + numero [i];

    }

    cout << "la suma es " << suma << endl;
    getch();

    int numeros [100],n;

    cout << "ingrese el numero de elementos que van a tener el arreglo:" ;
    cin >> n;

    for (int i = 0; i <n ; i++) {
        cout << "ingrese un numero" ;
        cin >> numeros [i];

    }


    for (int i = 0; i < n; i++) {
        cout << i<< "->" << numeros [i];

    }

}