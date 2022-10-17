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
    return isim;
    int getnumara(){
    return numara;
    }
};
int main()
{
    //Pointer ile olusturdugumuz bir class yapisinda bulunan structtaki ifadelere ulasip onlarin degerini degistirebiliriz
    ogrenci* ogr1= new ogrenci(); //Boyle yaparak pointer ile structta pointera yer ayirdik
    ogr1->setisim("AAAA"); //Structtaki isme ulasip onu degistirdik
    ogr1->setnumara(1233);//Structtaki numaraya ulasip onu degistirdik
    cout<<ogr1->getisim()<<" "<<ogr1->getnumara()<<endl; //Structtaki degistirdigimiz ismi ve numarayi bastirdik. Pointer yardimiyla structtaki ifadeleri degistirdigimiz icin bastirirkende pointer araciligiyla konsola yazdirma fonksiyonuna ulasip öyle bastirma islemini yaptik
    return 0;
}
