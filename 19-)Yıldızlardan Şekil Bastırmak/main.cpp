#include <iostream>

using namespace std;

int main()
{
    int sayi;
    cout << "Lutfen bir sayi giriniz:";
    cin>>sayi;
    for (int i=1;i<=sayi;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i=sayi;i>=0;i--){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
        }

    return 0;
}
