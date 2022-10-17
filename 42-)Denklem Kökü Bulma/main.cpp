#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    float a,b,c,diskriminat,kok1,kok2;
    cout<<"Lutfen sirayla a,b,c sayilarini giriniz"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    diskriminat=pow(b,2)-(4*a*c);
    if (diskriminat<0){
        cout<<"Reel kok bulunamadi"<<endl;
        cout<<diskriminat;
    }
    else if (diskriminat == 0){
		kok1 = (-1 * b) / (2 * a);
        cout<<"Denklemin tek koku vardir ve koku"<<endl<<"Kok 1:"<<kok1<<endl;

    }
    else{
        kok1=(float)(-b+sqrt(diskriminat))/(2*a);
        kok2=(float)(-b-sqrt(diskriminat))/(2*a);
        cout<<"Denklemin reel kokleri vardir ve kokler"<<endl<<"Kok 1:"<<kok1<<endl<<"Kok 2:"<<kok2<<endl;
    }
    return 0;
}
