#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int sayi,uzunluk,ikincisayi,basamak,toplam=0;
    cout<<"Lutfen bir sayi giriniz:";
    cin>>sayi;
    uzunluk=log10(sayi) + 1;
    ikincisayi=sayi;
    while(ikincisayi>0){
        basamak=ikincisayi%10;
        toplam+=pow(basamak,uzunluk);
        ikincisayi=ikincisayi/10;
    }
    if (toplam==sayi){
        cout<<sayi<<" sayisi Armstrong sayisidir."<<endl;
    }
    else{
        cout<<sayi<<" sayisi Armstrong sayisi degildir."<<endl;
    }
    return 0;
}
