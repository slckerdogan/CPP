#include <iostream>

using namespace std;
int usalma(int taban,int us){
    int sonuc=1;
    for (int i=0;i<=us;i++){
        sonuc=(sonuc*2);
    }
    return sonuc;

}
int main()
{
    int n;
    cout<<"Kac tane Mersanne sayisi olsun:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<usalma(2,i)-1<<" ";
    }
    return 0;
}
