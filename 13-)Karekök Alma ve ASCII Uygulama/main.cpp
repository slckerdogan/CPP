#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

int main()
{
    float karekoksayi;
    cout<<"Lutfen kokunu bulmak istediginiz sayiyi girin:";
    cin>>karekoksayi;
    float sayininkarekok = sqrt(karekoksayi);
    cout<<"Karekok:"<<sayininkarekok<<endl;

    int asciisayi;
    cout<<"Lutfen ASCII kodundan harf bulmak istediginiz sayiyi girin:";
    cin>>asciisayi;
    char ascii= asciisayi;
    cout<<"Harf:"<<ascii;
    return 0;
}
