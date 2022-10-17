#include <iostream>
#include<math.h>
#include<stdlib.h>
#include<iomanip>

using namespace std;

alan(float a,float b,float c){
    float u=(a+b+c)/2;
    float alan=u*(u-a)* (u-b) * (u-c);
    alan=abs(alan);
    float alan2=sqrt(alan);
    return alan2;
}
int main()
{
    float a,b,c;
    cout<<"Lutfen a,b ve c degerlerini girin:"<<endl;
    cin>>a>>b>>c;
    cout<<"Alan:"<<alan(a,b,c);
    return 0;
}
