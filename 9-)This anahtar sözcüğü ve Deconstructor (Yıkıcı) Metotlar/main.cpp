#include <iostream>

using namespace std;
class ogrenci{
private:
    string isim;
    int numara;
public:
     ogrenci(string isim, int numara){
        this->isim=isim;
        this->numara=numara;
//this anahtar sozcugu sinifin gecerli uyesine erisim saglar. Metot icerisinde bulunan benzer degisken adlarinda this ile sinifin uyeleri ile metodun uyeleri arasinda ayrim saglar. this deyimi sinifin uyelerini niteler.
    }
    ogrenci(string yazilacakisim){
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
    ~ogrenci(){
//deconstructor olusturma komutu. Bununla RAM'de bulunan objeyi sileriz ancak bunu kullanmak icin objenin adresi gerektiginden objeyi asagida pointer ile olustururuz.
        cout<<"OBJEMIZ ARTIK SILINDI"<<endl;
    }
};
int main()
{
    ogrenci *ogr1=new ogrenci("selcuk",5664577875); //Boyle yaparak pointer ile structta pointera yer ayirdik ve Structtaki isme ve numaraya ulasip onlari degistirdik
    ogr1->banabilgilerisoyle(); //Structtaki degistirdigimiz ismi ve numarayi bastirdik. Pointer yardimiyla structtaki ifadeleri degistirdigimiz icin bastirirkende pointer araciligiyla konsola yazdirma fonksiyonuna ulasip öyle bastirma islemini yaptik
    delete ogr1; //objeyi silme komutu
    return 0;
}
