#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    int sayi,sayac=0;
    int sistemsayi;
    srand(time(NULL));
    sistemsayi= int(1+rand() % 100);
    while(sayi!=sistemsayi){
        cout<<"Lutfen tahmininizi giriniz:";
        cin>>sayi;
        if(sayi<sistemsayi){
            cout<<"Daha buyuk"<<endl;
        }
        else if(sayi>sistemsayi){
            cout<<"Daha kucuk"<<endl;
        }
        else{
            cout<<"Dogru tahmin"<<endl;
            break;
        }
        sayac++;
    }
    cout<<"Sistemin tuttugu "<<sistemsayi<<" sayisini "<<sayac+1<<" denemede bildiniz.";
    return 0;
}
