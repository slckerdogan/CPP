#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int sayac,sayac2,sayi,sifirsayaci=0,negatifsayaci=0,pozitifsayaci=0;
    cout<<"Kac sayi girmek istersiniz:";
    cin>>sayac;
    sayac2=sayac;
    while (sayac>0){
        cout<<"Lutfen sayiyi giriniz:";
        cin>>sayi;
        if (sayi==0){
            sifirsayaci++;
        }
        else if (sayi<0){
            negatifsayaci++;
        }
        else{
            pozitifsayaci++;
        }
        sayac--;
    }
    cout<<"Toplam sayi sayisi: "<<sayac2<<endl;
    float negatifsayiorani=(float)negatifsayaci/sayac2;
    float pozitifsayiorani=(float)pozitifsayaci/sayac2;
    float sifirsayiorani=(float)sifirsayaci/sayac2;
    cout<<"Negatif sayilarin sayisi "<<negatifsayaci<<" olup negatif sayi yuzdesi "<<fixed<<setprecision(2)<<negatifsayiorani<<" seklindedir."<<endl;
    cout<<"Pozitif sayilarin sayisi "<<pozitifsayaci<<" olup pozitif sayi yuzdesi "<<fixed<<setprecision(2)<<pozitifsayiorani<<" seklindedir."<<endl;
    cout<<"Sifirlarin sayisi "<<sifirsayaci<<" olup sifirlarin yuzdesi "<<fixed<<setprecision(2)<<sifirsayiorani<<" seklindedir."<<endl;
    return 0;
}
