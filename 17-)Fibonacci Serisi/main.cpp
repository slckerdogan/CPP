#include <iostream>

using namespace std;

int main()
{
    int sayi,a=1,b=1,c;
    cout<<"Fibonacci serimiz ne kadar olsun?:";
    cin>>sayi;
    if (sayi==1){
        cout<<"Fibonacci serimiz: "<<a;
    }
    else if (sayi==2){
        cout<<"Fibonacci serimiz: "<<a<<" "<<b;
    }
    else{
        cout<<"Fibonacci serimiz: ";
        cout<<a<<" "<<b;
        while (sayi>2){
            c=a+b;
            cout<<" "<<c;
            a=b;
            b=c;
            sayi--;
        }
    }
    return 0;
}
