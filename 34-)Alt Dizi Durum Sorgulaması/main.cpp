#include <iostream>

using namespace std;

int main()
{
    int a[4];
    int b[7];
    int aboyut;
    int bboyut;
    int sayac=0;
    cout<<"Olusturmak istediginiz ilk kume kac elemanli olsun?:";
    cin>>aboyut;
    cout<<"Ilk kume alt kumesi mi diye merak ettiginiz esas kume kac elemanli olsun?:";
    cin>>bboyut;
    cout<<"Lutfen ilk kumeyi giriniz:"<<endl;
    for(int i=0;i<aboyut;i++){
        cin>>a[i];
    }
    cout<<"Ilk kume alt kumesi mi diye merak ettiginiz kumeyi giriniz:"<<endl;
    for(int i=0;i<bboyut;i++){
        cin>>b[i];
    }
    for (int i=0;i<aboyut;i++){
        for(int j=0;j<bboyut;j++){
            if(a[i]==b[j]){
                sayac++;
                break;
             }
       }
    }
    if (sayac>0 && sayac==aboyut){
        cout<<"a dizisi b dizisinin alt dizisidir.";
    }
    else{
        cout<<"a dizisi b dizisinin alt dizisi degildir.";
    }
    return 0;
}
