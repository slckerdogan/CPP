#include <iostream>

using namespace std;

int main()
{
    float ogrenciler[3][3];
    for(int i=0;i<3;i++){
        cout<<"Lutfen "<<i+1<<". ogrencinin notlarini giriniz:"<<endl;
        for(int j=0;j<3;j++){
            cin>>ogrenciler[i][j];
        }
    }
    float donemSonuNotu;
    for(int i=0;i<3;i++){
            donemSonuNotu=(ogrenciler[i][0]*0.25) + (ogrenciler[i][1]*0.25) + (ogrenciler[i][2]*0.50);
            cout<<i+1<<". ogrencinin not ortalamasi:"<<donemSonuNotu<<endl;
    }
    return 0;
}
