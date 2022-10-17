#include <iostream>
#include<math.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

float fonksiyon(float a){
    float sonuc=1;
    float us=pow(a,2) - (5 * a) + 3;
    cout<<"Us degeri:"<<us<<endl;
    if(us<0){
        us=abs(us);
        float sonuc2=1;
        for(int i=0;i<us;i++){
            sonuc2*=(float)1/3;
        }
        sonuc=sonuc2;
    }
    else{
        for(int i=0;i<us;i++){
            sonuc*=3;
            cout<<"deger:"<<sonuc<<endl;
        }
    }
    return sonuc;
}
int main()
{
    float deger;
    cout<<"Lutfen bir deger giriniz:";
    cin>>deger;
    cout<<"Islem sonucu:"<<fonksiyon(deger)<<endl;
    return 0;
}
