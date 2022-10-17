#include <iostream>

using namespace std;

int main()
{
    float puan;
    while(puan!=0){
        cout<<"Lutfen basari sonucunu ogrenmek istediginiz notu giriniz:";
        cin>>puan;
        if(puan>0 && puan<60){
            cout<<"Basarisiz oldunuz..."<<endl;
        }
        else if(puan>=60 && puan<76){
            cout<<"Orta notla basarili oldunuz..."<<endl;
        }
        else if(puan>=76 && puan<91){
            cout<<"Iyi notla basarili oldunuz..."<<endl;
        }
        else if(puan>=91 && puan<=100){
            cout<<"Pekiyi notla basarili oldunuz..."<<endl;
        }
        else{
            cout<<"Lutfen girdiginiz notu kontrol ediniz..."<<endl;
        }
    }

    return 0;
}
