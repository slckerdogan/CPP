#include <iostream>

using namespace std;

int faktoriyel(int x){

    int factoriyel=1;
    for (int i=1;i<=x;i++){
        factoriyel=factoriyel*i;
    }
    return factoriyel;
}
int kombinasyon(int x, int y){
    return faktoriyel(x) / (faktoriyel(y) * faktoriyel(x-y));
}

int main()
{
    int a,b;
    giris:
    cout<<"Lutfen kombinasyonunu bulmak istediginiz 0 veya 0'dan buyuk bir sayi giriniz:";
    cin>>a;
    cout<<"Lutfen kacli kombinasyonunu almak istiyorsaniz 0 veya 0'dan buyuk bir sayi giriniz:";
    cin>>b;
    if (a>=0 && b>=0){
        kombinasyon(a,b);
    }
    else{
        goto giris;
    }
    cout<<kombinasyon(a,b);
    return 0;
}
