#include <iostream>

using namespace std;

int f(int *a,int boyut){
    int eb=a[0];
    for (int i=1;i<5;i++){
        if (a[i]>eb){
            eb=a[i];
        }
    }
    int ek=a[0];
    for (int i=1;i<5;i++){
        if (a[i]<ek){
            ek=a[i];
        }
    }
    return eb-ek;

}
int main()
{
    int a[5];
    for (int i=0;i<5;i++){
        cout<<"Lutfen sayi giriniz:";
        cin>>a[i];
    }
    cout<<f(a,5);

    return 0;
}
