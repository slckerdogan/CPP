#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    int sayi;
    int tahmin;
    srand(time(NULL));
    sayi=rand() % 10;
    int sayac=1;
    while (sayac<6){
        cout<<"Lutfen 1-10 aras�nda bir tahmin yazin:";
        cin>>tahmin;
        if (tahmin==sayi){
            cout<<"Tebrikler do�ru tahmin.."<<endl;
            break;
        }
        sayac++;
    }
    cout<<"Rastgele sayi:"<<sayi;
    return 0;
}
