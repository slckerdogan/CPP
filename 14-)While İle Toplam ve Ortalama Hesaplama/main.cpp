#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int sayac;
    float sayi;
    cout<<"Kac tane sayi gireceksiniz?:";
    cin>>sayac;
    int sayac2=sayac;
    float toplam=0;
    while (sayac>0){
        cout<<"Lutfen sayiyi giriniz:";
        cin>>sayi;
        toplam+=sayi;
        sayac--;
    }
    float ortalama=toplam/sayac2;
    cout<<"Toplam:"<<toplam<<endl<<"Ortalama:"<<ortalama<<endl;
    return 0;
}
