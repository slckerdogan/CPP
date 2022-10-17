#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* 1.YOL!!!!!!!!!!!!
    char dizi [40];
    int sayac=0;
    int temp;
    cout<<"Lutfen kelime girin..."<<endl;
    cin>>dizi;
    while(dizi[sayac]!= '\0'){
        sayac++;
    }
    int i=0,j=0;
    while(i<sayac-1){
        j=i+1;
        while(j<sayac) {
        if (dizi[i]>dizi[j]){
            temp = dizi[j];
            dizi[j] = dizi[i];
            dizi[i] = temp;
        }
        j++;
    }
    i++;
    }
    cout<<dizi;
    */
    /* 2.YOL!!!!!!!!!!!!!!!
    string dizi;
    int sayac=0;
    int temp;
    cout<<"Lutfen kelime girin..."<<endl;
    cin>>dizi;
    sayac=dizi.length();
    int i=0,j=0;
    while(i<sayac-1){
        j=i+1;
        while(j<sayac) {
        if (dizi[i]>dizi[j]){
            temp = dizi[j];
            dizi[j] = dizi[i];
            dizi[i] = temp;
        }
        j++;
    }
    i++;
    }
    cout<<dizi;
    */
    // 3. YOL!!!!!!!!!!!!! Burada bir tane de dizi yapmayi ekledik!!!!!
    string dizi;
    int dizi1[12]={1,2,3,4,7,6,5,3,-9,-52,78,68};
    cout<<"Lutfen kelime girin..."<<endl;
    cin>>dizi;
    sort(dizi.begin(),dizi.end());
    sort(dizi1,dizi1+12);
    cout<<dizi<<endl;
    for(int i=0;i<12;i++){
          cout<<dizi1[i]<<endl;
    }
    return 0;
}
