#include <iostream>

using namespace std;
int usalma(int taban,int us){
    int sonuc=1;
    for (int i=0;i<=us;i++){
        sonuc=(sonuc*2);

    }
    return sonuc;

}
bool asal(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n,k;
    cout<<"Kac tane Mersanne sayisi içinden asal sayilara bakalim:";
    cin>>n;
    for(int i=1;i<=n;i++){
        k=usalma(2,i)-1;
        if(asal(k)){
            cout<<k<<" ";
        }
    }
    return 0;
}
