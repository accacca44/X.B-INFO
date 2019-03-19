#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int e1=a%10,e2=(a/10)%10,e3=a/100,d1=b%10,d2=(b/10)%10,d3=b/100;
    int maxim= max(e1,e2);maxim=max(maxim,e3);
    int minim= min(e1,e2);minim=min(minim,e3);
   cout<<maxim<<" "<<minim<<endl;
     int maxim2= max(d1,d2);maxim2=max(maxim2,d3);
     int minim2= min(d1,d2);minim2=min(minim2,d3);
   cout<<maxim2<<" "<<minim2<<endl;
int legkis=0;
int legnagyobb=0;
    if(minim == 0 && minim2 == 0){
        int mid1=e1+e2+e3-minim-maxim;cout<<mid1;
        int mid2=d1+d2+d3-minim2-maxim2;cout<<mid2;
        int MINI=min(mid1,mid2);
        cout<<MINI*10;

    }


    if(maxim>maxim2)legnagyobb=maxim*10+maxim2;
    else legnagyobb=maxim2*10+maxim;
    cout<<legnagyobb<<" ";

    if(minim2>minim)legkis=minim*10+minim2;
    else legkis=minim2*10+minim;

    cout<<legkis;
        return 0;



}
