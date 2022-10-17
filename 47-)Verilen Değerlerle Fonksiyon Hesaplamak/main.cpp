#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    char devam='E';
    while(devam=='E'|| devam=='e'){
        float x;
        float y;
        cout<<"Lutfen sirasiyla x ve y degerlerini giriniz:"<<endl;
        cin>>x>>y;
        if(x>=0 && y>=0){
            cout<<"Sonuc:"<<x+y<<endl;
            cout<<"Devam etmek istiyor musunuz[E//e]?";
            cin>>devam;
        }
        else if(x>=0 && y<0){
            cout<<"Sonuc:"<<x*y<<endl;
            cout<<"Devam etmek istiyor musunuz[E//e]?";
            cin>>devam;
        }
        else if(x<0 && y>=0){
            cout<<"Sonuc:"<<(1/x)+ pow(y,2)<<endl;
            cout<<"Devam etmek istiyor musunuz[E//e]?";
            cin>>devam;
        }
        else if(x<0 && y<0){
            cout<<"Sonuc:"<<(1/y)+ pow(x,3)<<endl;
            cout<<"Devam etmek istiyor musunuz[E//e]?";
            cin>>devam;
        }
    }
    cout<<"Gule Gule...";
    return 0;
}
