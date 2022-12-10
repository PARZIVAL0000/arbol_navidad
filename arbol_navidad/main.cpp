#include <iostream>
#include <string>
#include <unistd.h>
#include <stdio.h>


using namespace std;

void arbolDeNavidad(){
    //vamos a hacer la estrella del arbol de navidad....
    for(int x = 1; x <= 3; x++){
        if(x == 1){
            cout << "\n\n          ";
        }

        if(x == 2){
            cout << "\t";
        }

        if(x == 3){
            cout <<"      ";
        }

        for(int y = 1; y < x; y++){
            cout << "****";
        }

        cout << "*" << endl;
    }

    for(int x = 1; x <= 2; x++){
        if(x == 1){
            cout << "        ";
        }


        if(x == 2){
            cout << "          ";
        }


        for(int y = 2; y > x; y--){
            cout << "****";
        }

        cout << "*" << endl;
    }


    int i = 1;
    //este va a ser las columnas...
    while(i <= 10){

        if(i == 10){
            cout << " ";
        }
        if(i == 9){
            cout << "  ";
        }
        if(i == 8){
            cout << "   ";
        }

        if(i == 7){
            cout << "    ";
        }
        if(i == 6){
            cout << "     ";
        }

        if(i == 5){
            cout << "      ";
        }

        if(i == 4){
            cout << "       ";
        }

        if(i == 3){
            cout << "        ";
        }

        if(i == 2){
            cout << "         ";
        }

        if(i == 1){
            cout << "          ";
        }

        int j = 1;

        while(j < i){
            cout << "**";



            j++;
        }

        cout << "* " << endl;

        i++;
    }


    int filas = 1;

    while(filas <= 5){

        switch(filas){
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                cout << "     ";
                break;
        }

        int tronco_arbol = 1;

        while(tronco_arbol <= 10){

            cout << "*";

            tronco_arbol++;
        }

        cout << " " << endl;

        filas++;
    }

    for(int i = 0; i <= 25; i++){
        cout << "*";
    }

}


int main()
{

    /*
        Este es un programa el cual vamos a crear un arbol de navidad en particular....
    */

    //la secuencia va sumando de 2 en 2... pero comienza desde 1...


    /*           *
                ***
               ******
                ***
                 *

                 *
                ***
               *****
              *******
             *********
            ***********
           *************
          ***************
         *****************
        *******************
        |   ***********   |
        0   ***********   0
            ***********
            ***********
            ***********


    */

    arbolDeNavidad();


    return 0;
}
