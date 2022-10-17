#include <iostream>

using namespace std;

int main()
{
    float boy, kilo,VKE;
    cout<<"Lutfen sirayla boyunuzu metre ve kilonuzu kilogram cinsinden giriniz"<<endl;
    cout<<"Boy:";
    cin>>boy;
    cout<<"Kilo:";
    cin>>kilo;
    VKE=kilo/(boy*boy);
    if (VKE>16 && VKE<18.5){
        cout<<"Kisi az kiloludur";
    }
    else if(VKE>=18.5 && VKE<25){
        cout<<"Kisi normal kiloludur";
    }
    else if(VKE>=25 && VKE<30){
        cout<<"Kisi kiloludur";
    }
    else if(VKE>=30 && VKE<40){
        cout<<"Kisi obezdir";
    }
    else if(VKE>=40){
        cout<<"Kisi saglik problemleri yasamaktadir";
    }
    else{
        cout<<"Error";
    }
    return 0;
}
