#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float R[5],I[5],U[5],RK=0,dR[5],dRK=0;

    for(int i=0;i<5;i++){
        cin>>I[i];
        cin>>U[i];
        R[i]=U[i]/I[i];
        RK+=R[i];
        cout<<"R"<<i+1<<"="<<R[i]<<endl;
    }
    RK=RK/5;cout<<"Az R kozep = "<<RK<<endl;
     for(int i=0;i<5;i++){
        dR[i]=abs(R[i]-RK);
        dRK+=dR[i];
        cout<<"A hibak="<<dR[i]<<endl;
     }
     dRK=dRK/5;
     cout<<"A delta kozep = "<<dRK<<endl;
    return 0;
}
