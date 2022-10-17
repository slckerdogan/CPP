#include <iostream>

using namespace std;
void dizidekiElemanlariGoruntule(int *dizimiz,int boyut){
    for (int i=0;i<4;i++)
        cout<<dizimiz[i]<<endl;
}
void keyfekederartir(int *dizimiz,int boyut,int miktar){
    for (int i=0;i<boyut;i++){
        dizimiz[i] += miktar;
    }
}
void keyfekederazalt(int *dizimiz,int boyut,int miktar){
    for (int i=0;i<boyut;i++){
        dizimiz[i] -= miktar;
    }
}
void dizidekiElemanlariTopla(int *dizimiz,int boyut){
    int toplam=0;
    for(int i=0;i<boyut;i++){
        toplam += dizimiz[i];
    }
    return toplam;
}
int maximum(int *dizimiz,int boyut){
    int buyuk= dizimiz[0];
    for(int i=0;i<boyut;i++){
        if(buyuk<dizimiz[i]){
            buyuk=dizimiz[i];
        }
    }
    return buyuk;
}
int minimum(int *dizimiz,int boyut){
    int kucuk= dizimiz[0];
    for(int i=0;i<boyut;i++){
        if(kucuk<dizimiz[i]){
            kucuk=dizimiz[i];
        }
    }
    return kucuk;
}
double ortalama(int *dizimiz,int boyut){
    ortalama = dizidekiElemanlariTopla(dizimiz,boyut) / (double)boyut;
    return ortalama;
}
int main()
{
    int sayilar[]={5,10,15,20};
    dizidekiElemanlariGoruntule(sayilar,4);
    cout<<dizidekiElemanlariTopla(sayilar,4)<<endl;
    cout<<maximum(sayilar,4)<<endl;
    cout<<minimum(sayilar,4)<<endl;
    cout<<ortalama(sayilar,4)<<endl;
    keyfekederartir(sayilar,4,3);
    dizidekiElemanlariGoruntule(sayilar,4);
    cout<<dizidekiElemanlariTopla(sayilar,4)<<endl;
    cout<<maximum(sayilar,4)<<endl;
    cout<<minimum(sayilar,4)<<endl;
    cout<<ortalama(sayilar,4)<<endl;
    keyfekederazalt(sayilar,4,2);
    dizidekiElemanlariGoruntule(sayilar,4);
    cout<<dizidekiElemanlariTopla(sayilar,4)<<endl;
    cout<<maximum(sayilar,4)<<endl;
    cout<<minimum(sayilar,4)<<endl;
    cout<<ortalama(sayilar,4)<<endl;
    return 0;
}
