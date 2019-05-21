#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream in("input.txt");
    ofstream out("output.txt");

    int n;cin>>n;
    int tomb[n];
    for(int i=0;i<n;i++)in>>tomb[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(tomb[i]>tomb[j]){
                int aux=tomb[j];
                tomb[j]=tomb[i];
                tomb[i]=aux;
            }
        }

    }
    int p=tomb[1]*tomb[n-1];
    int z=0;
    while(p>0){
        int c=p%10;
        z=z*10+c;
        p/=10;
    }
    out<<z;
    return 0;
}
