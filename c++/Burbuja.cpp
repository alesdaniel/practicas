#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int nro, i;
    int lista[101], cont, aux;
    //Inicializa Random
    srand (time(NULL));
    i=0;
    while(nro != 100)
    {
     nro = 1 + (rand() % 1001);
     i++;
     if (nro > 1001)
        cout << "nro es > que 100 : " << nro<< " i->"<< i <<endl;
    }
    cout << "Intentos: " << i<< endl;

    /* Burbuja */
    cont = 1 + (rand() % 10);
    cout << "Burbuja -> "<< cont+1 << " Numeros a ordenar"<< endl;

    for (int c = 0; c <= cont; c++){
        lista[c] = 1 + (rand() % 1001);
        cout << lista[c] <<";";
    }
    cout << endl<<endl;

    for (int i=0;i < cont;i++)
    for(int j=0;j <(cont-i);j++){
        if (lista[j] > lista[j+1]){
            aux = lista[j];
            lista[j]=lista[j+1];
            lista[j+1]=aux;
        }

    }

    for (int c = 0; c <= cont; c++){
        cout << lista[c] <<";";
    }

    return 0;
}
