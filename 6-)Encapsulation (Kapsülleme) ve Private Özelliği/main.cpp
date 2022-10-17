#include <iostream>

using namespace std;
class ogrenci{
private:
    string isim;
    int numara;
public:
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
    string getisim(){
    return isim; //Alinan isimde sorun yoksa ismi alir asagida int main kisminda belirtilene gore bastirir. Eger sorun varsa ismi alamaz ve bastirma isi baska fonksiyonel yazimlara gore degisir. Ancak sorunlu ismi bastirmayacagi icin private ifadesi burada onem kazanir cunku biz alinan degeri goremeyiz bu korunmus ve olasi kargasalar onlenmis olur!!!!Gordugumuz sadece yansitacagimiz hata mesajinin kendisi olur!!!!
    }
    int getnumara(){
    return numara; //Alinan numarada sorun yoksa numarayi alir asagida int main kisminda belirtilene gore bastirir. Eger sorun varsa numarayi alamaz ve bastirma isi baska fonksiyonel yazimlara gore degisir. Ancak sorunlu numarayi bastirmayacagi icin private ifadesi burada onem kazanir cunku biz alinan degeri goremeyiz bu korunmus ve olasi kargasalar onlenmis olur!!!!Gordugumuz sadece yansitacagimiz hata mesajinin kendisi olur!!!!
    }
};
int main()
{
    ogrenci ogr1;
     //EGER BURAYA 3 VEYA 3 HARFTEN KISA ISIM YAZARSAK void setisimdeki cout komutundaki ifade ile aþagidaki coutta bulunan getnumarali ifade konsola basilir
    //EGER BURAYA 3 HARFTEN UZUN ISIM YAZARSAK asagidaki coutta bulunan getisimli ve getnumarali ifade konsola basilir
    ogr1.setisim("SEL");
    ogr1.setnumara(1233);
    cout<<ogr1.getisim()<<" "<<ogr1.getnumara()<<endl;
    return 0;
}
