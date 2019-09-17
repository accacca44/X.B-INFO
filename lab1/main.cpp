#include <iostream>
#include <fstream>
using namespace std;

int main()

{
s
    ifstream in("bac.txt");
    int stat[1001] = {0};
    int a;
    while(in>>a){
        stat[a]++;
    }
    for(int i=0;i<1001;i+=2){
        while(stat[i]>0){cout<<i<<" ";stat[i]--;}
    }for(int i=1;i<1001;i+=2){
        while(stat[i]>0){cout<<i<<" ";stat[i]--;}
    }
    return 0;
}
