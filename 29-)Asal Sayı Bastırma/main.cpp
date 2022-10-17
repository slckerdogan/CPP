#include <iostream>

using namespace std;
bool asal(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"Kaca kadar asal sayilari istersin?:";
    cin>>n;
        for(int i=2;i<n;i++){
            if(asal(i)){
              cout<<i<<" ";
            }
        }
    return 0;
}
