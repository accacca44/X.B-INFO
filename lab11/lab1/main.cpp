#include <iostream>

using namespace std;

int a;
int b;


int lkkt();
int lnko();

int main()
{
   cout << "Add  meg a 2 szamot!" << endl;
   cin >> a >> b;
   cout << "A ket szam lkkt:" << lkkt() << endl;
   cout << "A ket szam lnko:" << lnko() << endl;



    return 0;
}


int lnko(){
    while(a != b){
        if(a > b)a-=b;
        else     b-=a;
    }
return a;
}

int lkkt(){
return (a*b) / lnko();


}
