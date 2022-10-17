#include <iostream>

using namespace std;

int main()
{
    /*
    Bir harf aldiginda bunun ASCII kodunu ogrenmek istersen su islemleri yapabilirsin basitce;
	char harf2='B';
	int x=harf2;
	cout<<harf2<<" "<<x;
    */
    char harf;
	cout<<"Piramitin ilk harfini giriniz:";
	cin>>harf;

	int boyut;
	cout<<"Lutfen piramitin boyutunu giriniz:";
	cin>>boyut;
	boyut=boyut+harf; //Burada harf indeksinin gidecegi son yeri hesaplamis olduk

	for(int i=harf;i<boyut;i++){
//Harf diye belirttigimiz sey piramidin ilk harfinin indeksidir. Boyut ise piramidin gidecegi son harfin indeksidir.
            for(int j=harf;j<=i;j++){
                cout<<char(j);
            }
            for(int j=i-1;j>=harf;j--){
                cout<<char(j);
            }
            cout<<endl;
	}
    return 0;
}
