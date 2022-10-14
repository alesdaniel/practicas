#include <iostream>
#include <list>

#include <time.h>

using namespace std;

int main()
{
    list<int> lista;
    //Iterador para recorrer lista
    list<int>::iterator it;
    int cant;
    //Inicializa Random
    srand (time(NULL));
    cant = 1 + (rand() % 50);
    cout <<"Insertando "<<cant<<" elementos en la lista"<<endl;
    for (int i=0; i<cant;i++){
        int nro = 1 + (rand() % 100);
        cout<<nro<<";";
        lista.push_back(nro);
    }
    cout<<endl;
    //Muesta elementos
    cout<<"Elementos en la lista: "<<endl;
    //ordena no va por ahora
    //lista.sort();
    for(it=lista.begin();it!=lista.end();++it)
        cout<<*it<<";";
    cout<<endl;

    //Test itetator
    it=lista.begin();
    //inserta un valor al inicio de la lista
    lista.insert(it,555);
    it=lista.end();
    //inserta un valor al final de la lista
    lista.insert(it,777);
    for(it=lista.begin();it!=lista.end();++it)
        cout<<*it<<";";
    cout<<endl;
    return 0;
}
