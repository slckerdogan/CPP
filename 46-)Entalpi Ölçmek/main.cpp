#include <iostream>

using namespace std;

int main()
{
    float deger;
    while(deger!=-1 && deger!=1){
        cout<<"Entalpi durumunu ogrenmek istediginiz malzemenin entalpisini giriniz:";
        cin>>deger;
        if(deger>1){
            cout<<"Malzemenin Entalpisi Yuksek"<<endl;
        }
        else if(deger==0){
            cout<<"Malzemenin Entalpisi Kritik Noktada"<<endl;
        }
        else if(deger>-1 && deger<1){
            cout<<"Entalpi Normal"<<endl;
        }
        else if(deger<-1){
            cout<<"Malzemenin Entalpisi Dusuk"<<endl;
        }
        else{
            cout<<"Hatali Deger Girdiniz..."<<endl<<"Gule Gule...";
        }
    }
    return 0;
}
