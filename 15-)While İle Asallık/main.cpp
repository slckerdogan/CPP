#include <iostream>

using namespace std;

int main()
{
    int sayi,sayac=0,sonuc;
    int sayi2=2;
    cout<<"Lutfen bir sayi giriniz:";
    cin>>sayi;
    if (sayi==1){
        cout<<sayi<<" sayisi asal degildir."<<endl;
    }
    else if (sayi==2){
        cout<<sayi<<" sayisi asaldir."<<endl;
    }
    else{
        while (sayi2<sayi){
            sonuc=sayi%sayi2;
            if (sonuc==0){
                 sayac+=1;
                    if (sayac>0){
                        cout<<sayi<<" sayisi asal degildir."<<endl;
                        break;
                    }
            }
                    else{
                      sayi2++;
                    }

        }
        if (sayac==0){
            cout<<sayi<<" sayisi asaldir."<<endl;
        }
      }
    return 0;
}
