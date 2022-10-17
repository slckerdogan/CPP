#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    char saat[11];
    cout<<"Lutfen 12'lik sistemde bir saat giriniz:";
    cin>>saat;
    if (saat[8]=='P'){
        char dizi[3];
        dizi[0]=saat[0];
        dizi[1]=saat[1];
        dizi[2]='\0';
        int zaman=atoi(dizi);
        zaman+=12;
        saat[0]=(char)48+zaman/10;
        saat[1]=(char)48+zaman%10;
        saat[8]='\0';
        cout<<saat;
    }
    else{
        saat[8]='\0';
        cout<<saat;
    }
    return 0;
}
