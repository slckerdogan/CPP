#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(1);  // vektore eleman eklemeyi saglar
    v1.push_back(2);
    cout<<"v1 uzunlugu:"<<v1.size()<<endl;  //vektorun boyutunu gorunteleme

    vector <int> v2(10,3);  //virgulden sonra yazacagimiz deger vektordeki tum elemanlarýn tek bir deger olmasini saglar
    cout<<"v2 vektoru:";
    for(int i=0;i<10;i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    vector <int> v3;
    v3.assign(5,45);   //assign ile vektor uzunlugu ve icerisinde olacak elemani belirleyebiliriz
    cout<<"v3 vektoru:";
    for(int i=0;i<5;i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    int a =v3.back(); //v3 vektorundeki bulunan en arkadaki elemani almayi saglar
    cout<<"v3 en sondaki eleman:"<<a;


    cout<<endl;
    vector<float>v4;
    float b=0;
    while(b!=-1){
        cout<<"Bir sayi girin ve sayi girmekten sikilirseniz -1'e basin:";
        cin>>b;
        v4.push_back(b);
    }
    v4.pop_back();  //vektorde bulunan en sondaki elemani diziden cikarir.

    cout<<"v4:";
    for (int i=0;i<v4.size();i++){
        cout<<v4[i]<<" ";
    }
    cout<<endl;

    float toplam=0,c;
    while(!v4.empty()){
        c=v4.back();   //son elemani almayi saglar
        toplam=toplam + c;
        v4.pop_back();
    }
    cout<<"v4'teki elemanlarin toplami:"<<toplam;



    return 0;
}
