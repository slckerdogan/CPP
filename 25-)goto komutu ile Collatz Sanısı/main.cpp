#include <iostream>

using namespace std;

int main()
{
    int sayi;
    cout<<"Lutfen bir sayi girin:";
    cin>>sayi;
    menu:
    if (sayi%2==0){
        sayi=sayi/2;
        cout<<sayi<<" ";
    }
    else{
        sayi=3*sayi + 1;
        cout<<sayi<<" ";
    }
    if (sayi!=1){
        goto menu;
    }
    return 0;
}
