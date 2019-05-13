#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream in("bac.in");
    bool yesno = true;
    int tomb[1000];
    int x=0;
    int Rr;
    while(in>>tomb[x])x++;
    for(int i=0;i<x-1;i++){
        for(int j=i+1;j<x;j++){
            if(tomb[i]>tomb[j]){
                int temp=tomb[i];
                tomb[i]=tomb[j];
                tomb[j]=temp;
            }
        }
    }
    int R,save;
    for(int i=1;i<x;i++){
        int r=tomb[i]-tomb[i-1];
        if(r!=0){R=r;save=i;break;}}





    for(int i=save;i<x;i++){
        if(tomb[i]-tomb[i-1]!=0){
             Rr=tomb[i]-tomb[i-1];
            if(Rr!=R){yesno=false;break;}
        }

    }


    if(yesno)cout<<"da";
    else cout <<"nu";
    return 0;}
