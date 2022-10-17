#include <iostream>

using namespace std;

int EBOB(int a,int b){

    int kucuk,buyuk;
    if (a>b){
        buyuk=a;
        kucuk=b;
    }
    else{
        buyuk=b;
        kucuk=a;
    }
    int bolen=kucuk;
    while(a%bolen!=0 || b%bolen!=0){
        bolen--;
    }
    return bolen;
}
int EKOK (int a,int b){

    int kucuk,buyuk;
    if (a>b){
        buyuk=a;
        kucuk=b;
    }
    else{
        buyuk=b;
        kucuk=a;
    }

    int kat=kucuk;
    while(kat%kucuk!=0 || kat%buyuk!=0){
          kat=kat+kucuk;
    }
    return kat;
}
int main()
{
    int x,y;
    cout<<"EBOB ve EKOK ogrenmek istediginiz sayilari giriniz:"<<endl;
    cin>>x>>y;
    cout<<"EBOB'lari:"<<EBOB(x,y)<<endl<<"EKOK'lari:"<<EKOK(x,y);
    return 0;
}
