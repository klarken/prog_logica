#include <iostream>

using namespace std;

int main()
{
    int x, cont=0;
    unsigned long long int trigoT=1, suma, TrigoFinal;
    cout<<"Trigo "<<"1: "<<trigoT<<endl;
    for (x=0;x<=62;x++)
    {
        trigoT=(trigoT*2)+1;
        TrigoFinal=trigoT-1;
        trigoT=TrigoFinal;
        cont++;
        cout<<"Trigo "<<cont+1<<": "<<trigoT<<endl;
        suma=suma+trigoT;
if (x==62)
{
    cout<<"\n\n\tVALOR DE ULTIMA CASILLA: "<<trigoT;
}

    }
cout<<"\n\n\t\tSUMA TOTAL DE GRANOS: "<<suma+1;
    return 0;
}
