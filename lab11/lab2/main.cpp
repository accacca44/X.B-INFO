
#include <iostream>

using namespace std;




int lkkt(int a , int b);
int lnko(int &a , int &b);

int main()
{
    int a;
    int b;
   cout << "Add  meg a 2 szamot!" << endl;
   cin >> a >> b;
   cout << "A ket szam lnko:" << lnko( a,  b) << endl;
   cout << "A ket szam lkkt:" << lkkt( a,  b) << endl;




    return 0;
}


int lnko(int &a, int &b){
    while(a != b){
        if(a > b)a-=b;
        else     b-=a;
    }
return a;
}

int lkkt(int a, int b){
return (a*b) / lnko(a,b);


}



