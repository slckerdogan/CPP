#include <iostream>
#include<fstream>
using namespace std;

string terscevir(string s){
    char c=s[0];
    int i=1;
    char *p,*q;
    p=&s[0];
    q=&s[0];
    while(*p!='\0'){
        p++;
    }
    p--;
    while(p>q){
        char c =*p;
        *p=*q;
        *q=c;
        p--;
        q++;
    }
    return s;
}

int main()
{
    ifstream dosya("OkunacakDosya.txt");
    string s;
    ofstream dosya2("Cikti.txt");
    while(getline(dosya,s)){
        cout<<s<<endl;
        cout<<terscevir(s)<<endl;
        dosya2<<terscevir(s)<<endl;
    }
    dosya.close();
    dosya2.close();
    return 0;
}
