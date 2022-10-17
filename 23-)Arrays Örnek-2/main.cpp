#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int dizi[5];
    int dizi2[5];
    float dizi3[5];
    for(int i=0;i<5;i++){
        cout<<"Lutfen ilk dizi icin 1-9 arasi eleman giriniz:";
        cin>>dizi[i];
    }
    for(int i=0;i<5;i++){
        cout<<"Lutfen ikinci dizi icin 1-9 arasi eleman giriniz:";
        cin>>dizi2[i];
    }
    for(int i=0;i<5;i++){
        dizi3[i]=(float)(dizi[i]*dizi2[i]) / (dizi[i]+dizi2[i]);
    }
    cout<<"Birinci dizi:";
    for(int i=0;i<5;i++){
        cout<<dizi[i]<<" ";
    }
    cout<<endl;
    cout<<"Ikinci dizi:";
    for(int i=0;i<5;i++){
        cout<<dizi2[i]<<" ";
    }
    cout<<endl;
    cout<<"Ucuncu dizi:";
    for(int i=0;i<5;i++){
        cout<<fixed<<setprecision(2)<<dizi3[i]<<" ";
    }
    return 0;
}
