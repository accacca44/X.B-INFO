#include <iostream>

using namespace std;

int main()
{
    int a[3],n;
    a[0]=0;
    a[1]=1;
    cin>>n;
    if(n==1 || n==2){a[2]=1;cout<<a[2];}
    else {
        for(int i=0; i<n;i++){
        a[2]=a[0]+a[1];
        a[0]=a[1];
        a[1]=a[2];
        cout<<a[2]<<endl;
    }}

    return 0;
}
