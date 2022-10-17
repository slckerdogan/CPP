#include <iostream>

using namespace std;

int main()
{
    int enbuyuk=0;
    int dizi[5]={};
    cout<<"Lutfen dizinin elemanlarini giriniz..."<<endl;
    for(int i=0;i<5;i++){
            cin>>dizi[i];
    }
    for(int i=0;i<5;i++){
            cout<<"Dizinin "<<i+1<<". elemani:"<<dizi[i];
            cout<<endl;
    }
    for(int i=0;i<5;i++){
            if (dizi[i]>= enbuyuk){
                    enbuyuk=dizi[i];
            }
    }
    cout<<"En buyuk eleman:"<<enbuyuk<<endl;
return 0;
}
