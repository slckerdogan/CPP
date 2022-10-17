#include <iostream>

using namespace std;
class ogrenci{
private:
    string isim;
    int numara;
public:
     ogrenci(string yazilacakisim, int yazilacaknumara){ //Constructor: Bir obje olusturuldugu zaman ilk deger atamasini yapmamizi saglar. Burada bizde constructor olusturduk ve asagida deger atamasini yaptik. Yine yaratilan objede degisiklik yapmak istersek set modlarini kullanip degisikli yapariz...
        isim=yazilacakisim;
        numara=yazilacaknumara;
    }
    ogrenci(string yazilacakisim){ //Burada ayni fonksiyonu farkli parametreli haliyle tekrar olusturup overloading yaptik. Normalde ogrenci fonksiyonu iki parametre almisti ama biz ayni fonksiyonu burada bir parametre ile olusturup asagida overloading yaptirdik...
        isim=yazilacakisim;
        numara=0;
    }
    void setisim(string isimsoyle){
    if (isimsoyle.size()<=3){
        cout<<"HATAAA";
    }
    else{
        isim=isimsoyle;
    }

    }
    void setnumara(int numarasoyle){
    numara=numarasoyle;
    }
    void banabilgilerisoyle(){
        cout<<"Isim: "<<isim<<endl;
        cout<<"Numara: "<<numara<<endl;
    }
    string getisim(){
    return isim;
    }
    int getnumara(){
    return numara;
    }
};
int main()
{
    ogrenci ogr1("SELCUK",12324367);
    ogrenci ogr2("ERDOGAN"); //ayni fonksiyonu tek parametre ile alip overloading yaptirdigimiz yer tam olarak burasi oldu...
    ogr1.banabilgilerisoyle();
    ogr2.banabilgilerisoyle();
    return 0;
}
