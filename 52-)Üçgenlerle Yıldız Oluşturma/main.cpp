#include<iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

// * þekli ile baklava dilimi yapma

int main(){

    int i, j, boslukSayisi, yildizSayisi, boyut;

    printf("Boyut Giriniz (Satir Sayisi): ");
    scanf("%d", &boyut);

//Çift Sayý Girilirse Þekil Bozulmasýn Diye 1 ekleyerek Tek yapýyoruz
    if(boyut % 2 == 0)
        boyut += 1;

//Bosluk Sayisi Boyutun yarýsý oluyor. Kaðýt üstünde sayarak bakabilirsiniz.
    boslukSayisi = boyut / 2 ;

// Yildiz Sayisi 1 den baþlar
    yildizSayisi = 1;

//ilk for satýr sayýsýný yazdýrýr (Boyutu)
    for(i=0; i<boyut; i++){

//ikinci for önce boþluk olduðu için boþluklarý yazdirir
        for(j=0; j<boslukSayisi; j++)
            printf(" ");

//Üçüncü For Yýldýzlarý yazdýrýr
        for(j=0; j<yildizSayisi; j++)
            printf("*");


/*Baklava diliminin yarýsýnda boþluk 1 azalýr yildiz 2 artar yarisini geçince ise tam tersi boþluk artar yildiz azalir
    if ile baklava diliminin yarýsýný ve yarýsýndan sonrasýný kontrol ediliyoruz*/

        if(i < boyut / 2){
            boslukSayisi--;
            yildizSayisi+=2;
        }

//Baklava diliminin yarýsýný geçince else ye girer
        else{
            boslukSayisi++;
            yildizSayisi-=2;
            }

        //Her Satýrdan sonra aþaðý iner
        printf("\n");

    }


    getch();
    return 0;
}
