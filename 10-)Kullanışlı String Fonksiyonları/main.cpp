#include <iostream>
#include <string>
using namespace std;

int main()
{
    string isim;
    cout<<"isim gir!"<<endl;
    getline(cin,isim); //Bosluklu bir stringi kullanicidan almamizi saglayan fonksiyon getline ile olur
    cout<<isim<<endl;
    string isim2;
    isim2.assign("faa aaaa"); //Fonksiyon ile stringin degerini atama assign ile olur
    cout<<isim2<<endl;
    string isim3;
    cout<<"isim gir!"<<endl;
    cin>>isim3;
    isim3.assign(isim3);
    cout<<isim3<<endl;
    string isim4;
    isim4.assign(isim);
    cout<<isim4<<endl;
    string isim5="SELCUK ERDOGAN";
    for (int i=0;i<isim5.length();i++){ //Bir stringin uzunlugunu bulma .length ile olur
        cout<<isim5.at(i); //Stringin icindeki bir karaktere ulasma .at() ile olur
    }
    cout<<" "<<endl;
    string isim6="SELCUK ERDOGAN";
    cout<<isim6.substr(5,7)<<endl; //Bir stringin bir indisinden itibaren kac karakter yazalim substr ile olur
    string isim7="GS";
    string isim8="FB";
    isim7.swap(isim8); // Iki stringin degerlerinin degismesi swap ile olur
    cout<<isim8<<" "<<isim7<<endl;
    string isim9="KARALAMACA";
    isim9.erase(4); //String icerisindeki karakterleri silme erase ile olur
    cout<<isim9<<endl;
    string isim10="Carsidan aldim on tane eve geldim bin tane";
    cout<<isim10.find("on")<<endl; //String icerisindeki karakter ya da karakter dizilerinin indisini bulma find ile olur
    //cout<<isim10.lfind("dim")<<endl;  => soldan aramak boyle yapilir ancak lfind ile find ayni o yuzden find kullanirsin lfind degil
    cout<<isim10.find("dim")<<endl;
    cout<<isim10.rfind("dim")<<endl; //sagdan aramak boyle yapilir
    string isim11="SELCUK ERDOGAN";
    cout<<isim11.replace(0,6,"KUCLES");//Bir stringin içerisindeki karakter ya da karakterleri yer degistirme replace ile olur
    return 0;
}
