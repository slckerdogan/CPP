#include <iostream>

using namespace std;


int fibonacci(int sayi){
    int a,b;
    a=1;
    b=1;
    if (sayi==0){
        return false;
    }
    else if(sayi==1){
        return 1;
    }
    else if(sayi==2){
        return 1;
    }
    else{
        return fibonacci(sayi-1) + fibonacci(sayi-2);
    }

}
int main()
{

    int x;
    cout<<"Kacinci fibonacci terimini gormek istediginizi giriniz:";
    cin>>x;
    cout<<fibonacci(x);
    return 0;
}
