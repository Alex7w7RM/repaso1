#include <iostream>
#include "conio.h"
#include "stdlib.h"
#include "time.h"
using namespace std ;
int main() {

    // video 18
   int saldo_inicial= 1000, opc,i, a ,e, s, suma =0, cuad, num1, num2 =0 , num3, n=0, nume, fact =1, sum1 =0 , eleva=0 , n1, n2, x=0, y=1, z=1, nu1 , dat, cont;
float extra, saldo =0, retiro;
   cout << "1. bienvenido a su cajero " << endl;
   cout << "2. ingrese  dinero en la cuenta " << endl;
   cout << "3. retirar dinero de la cuneta" << endl;
   cout << "4. salir" << endl;
   cout << "5. opciones"<< endl;

   cin >> opc;

    switch (opc) {
        case 1:
            cout << "digite la cantidad de dinero a ingresar:" ;
            cin >> extra;
            saldo = saldo_inicial + extra;
            cout << " dinero en cuenta " << saldo << endl;
            break;
        case 2:
            cout << " digite la cantidad de dinero que va a retirar" << endl;
            if ( retiro > saldo_inicial){
                cout << "no tiene esa cantidad de dinero " << endl;

            }
            else {
                saldo = saldo_inicial ;
                cout << "dinero en cuenta " << saldo << endl;

            }
            break;
        case 3:
            break;
        
    }


    // video 19

    i=1;
    while (i<=100){
        cout << i<< endl;
        i++;
    }

    // video 20

    a = 10;
    do {
        cout << a<< endl;
        a--;

    }while (a >= 1);


    // video 21

    for (int e = 1; e <=10 ; ++e) {

        cout << e << endl;
    }

    // video 22



    do {
        cout << "digite un numero del 1 al 10" << endl;
        cin >> s;
    } while (( s <1)||( s >10));

    for (int i = 1; i <= 20; ++i) {
        cout<< s << "*" << i << "="<< s*i << endl;
    }

    // video 23
    for (int i = 1; i <= 10; ++i) {

        cuad = i*i;
        suma = suma + cuad;
        cout << "resultado de la suma" << suma << endl;

    }
    // video 24
    do {
        cout <<"digite un numero"<< endl;
        cin >> num1 ;

        if (num1 >0){
            num2 +=num1;
        }

    } while (((num1 < 20)|| (num1 > 30)) && (num1 !=0));
    cout << num2<< endl;
 // video 25

 cout << "digite el numero de elementos" << endl;

 cin >> num3;
    for (int i = 1; i <= num3 ; i++) {
        n +=i;
        cout << "suma es:" << n << endl;

    }

    // video 26
    cout << "digite un numero para factorizar" << endl;
    cin >> nume;

    for (int i = 1; i <= nume ; i++) {

    fact = fact * i;
    }
    cout << "el factorial del numero es " <<  fact << endl ;


// video 28

cout <<"ingrese el numero de elementos que quiere sumar" << endl;
cin >> n1;
    for (int i = 1; i <=n1 ; i++) {
        eleva = pow (2,i);
        sum1 += eleva;

    }
    cout << "suma total es:" << sum1 << endl;
    // video 28
    cout << "digite el numero de elementos:" ;
    cin >> n2;

    for (int i = 1; i <=n1 ; i++) {
        z= x+y;
        cout << z<< endl;
        x= y;
        y = z;


    }

 // video 29
    srand(time (null));
    dat = 1 + rand()% (100);

    do {
        cout << "ingrese un numero" << endl;

        cin >> nu1 ;
        if (nu1 < dat) {
          cout <<"ingrese un numero mayor"<< endl;
        }
        cont++;
    } while (nu1 !=dat);

    cout << "adivino el numero"<< endl;
    cout << "intentos" << cont << endl;

    // video 30


}
