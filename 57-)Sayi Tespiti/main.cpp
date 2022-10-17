#include<iostream>

using namespace std;

int main()
{
    int i, count=0;
    char rakam[]={}, gecenifade;

    cout << "Lutfen bir sayi giriniz: ";
    cin>>rakam;

    cout << "Lutfen sayi icinde bulmak istediginiz bir karakteri giriniz: ";
    cin>>gecenifade;

    for(i=0;rakam[i]!='\0';i++)
    {
        if(rakam[i]==gecenifade)
        count++;
        break;
    }
    if(count!=0)
        cout << "Sayi ondalikli sayidir";
    else
        cout<<"Sayi tam sayidir";
    return 0;
}
