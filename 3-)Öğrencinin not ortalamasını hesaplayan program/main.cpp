#include <iostream>

using namespace std;

int main()
{
    string isim1="Kaan";
    string isim2="Mert";
    string isim3="Burcu";

    int ogrencilerVize1Sonuclari[3];
    int ogrencilerVize2Sonuclari[3];
    int ogrencilerFinalSonuclari[3];
    int notOrtalamalari[3];

    cout<<"Lutfen ogrencilerin 1.vize notlarini giriniz."<<endl;
    for(int i=0;i<3;i++){
        cin>>ogrencilerVize1Sonuclari[i];
    }
    cout<<"Lutfen ogrencilerin 2.vize notlarini giriniz."<<endl;
    for(int i=0;i<3;i++){
        cin>>ogrencilerVize2Sonuclari[i];
    }
    cout<<"Lutfen ogrencilerin final notlarini giriniz."<<endl;
    for(int i=0;i<3;i++){
        cin>>ogrencilerFinalSonuclari[i];
    }
    for (int i=0;i<3;i++){
        notOrtalamalari[i]= ogrencilerVize1Sonuclari[i]*0.2 + ogrencilerVize2Sonuclari[i]*0.2 + ogrencilerFinalSonuclari[i]*0.6;
    }
    for (int i=0;i<3;i++){
        cout<<i+1<<"."<<" ogrencinin ortalamasi: "<<notOrtalamalari[i]<<endl;
    }
    return 0;
}
