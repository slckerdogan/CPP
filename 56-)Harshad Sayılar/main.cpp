#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int sayi,ikincisayi,basamak,toplam=0;
    cout<<"Lutfen bir sayi giriniz:";
    cin>>sayi;
    ikincisayi=sayi;
    while(ikincisayi>0){
        basamak=ikincisayi%10;
        toplam+=basamak;
        ikincisayi=ikincisayi/10;
    }
    if (sayi%toplam==0){
        cout<<sayi<<" sayisi Harshad sayisidir."<<endl;
    }
    else{
        cout<<sayi<<" sayisi Harshad sayisi degildir."<<endl;
    }
    return 0;
}
