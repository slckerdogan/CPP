#include <iostream>

using namespace std;

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3];
    cout<<"A MATRISI:"<<endl;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            b[i][j]=a[j][i];
        }
    }
    cout<<"A MATRISININ TRANSPOSE HALI:"<<endl;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
