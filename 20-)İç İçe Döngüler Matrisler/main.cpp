#include <iostream>

using namespace std;

int main()
{
    int boyut;
    cout << "Lutfen matris boyutu giriniz:";
    cin>>boyut;
    for(int i=0;i<boyut;i++){
        for(int j=0;j<boyut;j++){
            if (j==i){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<boyut;i++){
        for(int j=0;j<boyut;j++){
            if (i+j==boyut-1){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}
