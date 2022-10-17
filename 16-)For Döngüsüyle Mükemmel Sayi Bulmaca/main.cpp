#include <iostream>

using namespace std;

int main()
{
    int sayi,toplam=0;
    cout<<"Lutfen bir sayi giriniz:";
    cin>>sayi;
    for (int i=1;i<sayi;i++){
        if(sayi%i==0){
            toplam+=i;
        }
    }
    if (sayi==toplam){
        cout<<sayi<<" mukemmel sayidir."<<endl;
    }
    else{
        cout<<sayi<<" mukemmel sayi degildir."<<endl;

    }
    return 0;
}
