#include <iostream>

using namespace std;


int faktoriyel(int sayi){

    if(sayi==1){
        return 1;
    }
    else{
        return sayi * faktoriyel (sayi-1);
    }
}


int main()
{
    int a;
    cin>>a;
    cout<<"Faktöriyel:"<<faktoriyel(a);
    return 0;
}
