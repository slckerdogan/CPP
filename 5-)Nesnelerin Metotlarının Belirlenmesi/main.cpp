#include <iostream>

using namespace std;

class insan{
    public:
    int yas;
    string isim;
    void insanbilgisigetir(){
    cout<<yas<<" "<<isim<<endl;
}
};

int main()
{
    insan i1,i2;
    i1.yas=25;
    i1.isim="A";
    i2.yas=1;
    i2.isim="B";
    i1.insanbilgisigetir();
    i2.insanbilgisigetir();
    return 0;
}
