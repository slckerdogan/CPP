#include <iostream>

using namespace std;

int main()
{
    int dizi[5];
    char karakter;
    cout<<"Lutfen bir karakter giriniz:";
    cin>>karakter;
    for(int i=0;i<5;i++){
        cout<<"Lutfen 1-9 arasi eleman giriniz:";
        cin>>dizi[i];
    }
    for(int i=0;i<5;i++){
        cout<<i+1<<".elemana ait ozellikler:"<<dizi[i];
        cout<<" ";
        for(int j=0;j<dizi[i];j++){
            cout<<karakter;
        }
        cout<<endl;
    }

    return 0;
}
