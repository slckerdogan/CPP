#include <iostream>

using namespace std;

int main()
{
    int sayi;
    float kesirliSayi;
    double kesirliSayi2;
    char karakter;
    bool anahtar;
    sayi=5;
    kesirliSayi=5.2;
    kesirliSayi2=7.9;
    karakter='K';
    anahtar=true;
    cout <<sayi<<endl;
    cout <<kesirliSayi<<endl<<kesirliSayi2<<endl;
    cout <<"Karakterimiz:" <<karakter<< " " <<"Dongumuz:" <<anahtar<<endl;
    int sayi1;
    float kesirliSayi3;
    double kesirliSayi4;
    char karakter1;
    bool anahtar1;
    cout <<"Lutfen bir sayi giriniz:";
    cin >>sayi1;
    cout <<"Sayi:" <<sayi1<<endl;
    cout <<"Lutfen karakter,kesirli sayi,kesirli sayi ve anahtar giriniz..."<<endl;
    cin >>karakter1;
    cin >>anahtar1;
    cin >>kesirliSayi3;
    cin >>kesirliSayi4;
    cout <<"Karakterimiz: "<<karakter1<<" "<<"Anahtarimiz: "<<anahtar1<<endl;
    cout <<"Ilk kesirli sayimiz:"<<kesirliSayi3<<endl<<"Ikinci kesirli sayimiz:"<<kesirliSayi4;
    return 0;
}
