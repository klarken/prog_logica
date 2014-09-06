#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int quicksort(int *lista, int izq, int der) {
    int i = izq;
    int j = der;
    int x= lista[(izq + der )/2];
    int aux;

    while(i < j)
    {
        while(lista[i]<x && j<=der)
        {
            i++;
        }
        while(x<lista[j] && j>izq)
        {
            j--;
        }
        if(i<j)
        {
            aux = lista[i];
            lista[i] = lista[j];
            lista[j] = aux;
            i++;
            j--;
        }
        if(izq < j)
        {
            quicksort(lista,izq,j);
        }
    }
    if(i < der)
    {
        quicksort(lista,i,der);
    }


   }

int imprimeLista(int *lista,int tam)
{
    for(int i =0;i<= tam; i++)
    {
        cout<<lista[i];
    }
}
int leeLista(int *lista, int tam)
{
    srand(time(NULL));
//	int tam;
//	cout<< " de cuantos elementos desea el arreglo "<<endl;
//	cin>>tam;
//	int lista[tam];
	for(int i=0;i< tam;i++)
	{
		lista[i]=rand()%100;
		cout<<lista[i]<<endl;
	}

}

int main()
{
   leeLista();
}