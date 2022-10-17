#include <iostream>

using namespace std;

int main()
{
    float vizeNotu,finalNotu,gecmeNotu;
    for(int i=1;i<26;i++){
        menu:
        cout<<"Lutfen "<<i<<". ogrencinin vize ve final notlarini giriniz:"<<endl;
        cout<<"Vize Notu:";
        cin>>vizeNotu;
        cout<<"Final Notu:";
        cin>>finalNotu;
        if(vizeNotu>=0 && finalNotu>=0){
            gecmeNotu=(vizeNotu*0.4) + (finalNotu*0.6);
        if(gecmeNotu<60){
            cout<<i<<". ogrenci dersten kalmistir..."<<endl;
        }
        else if(gecmeNotu>=60 && finalNotu<50){
            cout<<i<<". ogrenci dersten kalmistir..."<<endl;
        }
        else{
            cout<<i<<". ogrenci dersten gecmistir..."<<endl;
        }
        }
        else{
            cout<<"Lutfen notlari tekrar giriniz..."<<endl;
            goto menu;
        }
    }
    return 0;
}
