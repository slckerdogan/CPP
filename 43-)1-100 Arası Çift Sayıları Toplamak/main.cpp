#include <iostream>

using namespace std;

int main()
{
    int toplam=0;
    for(int i=1;i<100;i++){
        if (i%2==0){
            cout<<i<<" ";
            toplam+=i;
        }
    }
    cout<<endl<<"Toplam:"<<toplam;
    return 0;
}
