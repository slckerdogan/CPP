#include <iostream>

using namespace std;

int main()
{
    float birinciUrun,ikinciUrun,toplam=0,indirim=0;
    char servis='E';
    cout<<"Birinci Urun Fiyati:";
    cin>>birinciUrun;
    cout<<"Ikinci Urun Fiyati:";
    cin>>ikinciUrun;
    toplam=birinciUrun + ikinciUrun;
    cout<<"Servis kullanacak misiniz[E//e]?";
    cin>>servis;
    if(servis=='E' || servis=='e'){
        if(toplam>=100){
            if(toplam>=100 && toplam<150){
                indirim=(toplam * 0.07)/2;
                cout<<"Odenecek tutar:"<<toplam-indirim;
            }
            else if(toplam>=150){
                indirim=(toplam * 0.1)/2;
                cout<<"Odenecek tutar:"<<toplam-indirim;
            }
        }
        else{
            cout<<"Servisi kullanmak icin yapacaginiz odeme yeterli degildir...";
        }
    }
    else{
        if(toplam<100){
            indirim=toplam * 0.05;
            cout<<"Odenecek tutar:"<<toplam-indirim;
        }
        else if(toplam>=100 && toplam<150){
            indirim=toplam * 0.07;
            cout<<"Odenecek tutar:"<<toplam-indirim;
        }
        else if(toplam>=150){
            indirim=toplam * 0.1;
            cout<<"Odenecek tutar:"<<toplam-indirim;
        }
    }

    return 0;
}
