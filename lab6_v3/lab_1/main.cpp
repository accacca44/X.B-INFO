#include <iostream>

using namespace std;

int main()
{

   int n;
   int num = 0;
   cin >> n;

   int fistM[n][n];
   int secM[n][n];
   int pM[n][n];
   for(int sor = 0; sor < n; sor++){
   for(int oszlop = 0; oszlop < n; oszlop++){
        cin >> fistM[sor][oszlop];
        cin >> secM[sor][oszlop];}}

   ///Beolvasas vege

   ///Szorzas
   for(int sor = 0; sor < n; sor++){
   for(int oszlop = 0; oszlop < n; oszlop++){
    pM[sor][oszlop] = 0;
    for( int trap = 0; trap < n; trap++){
        pM[sor][oszlop] = pM[sor][oszlop] + fistM[sor][trap] * secM[trap][oszlop];}}}


   for(int sor = 0; sor < n; sor++){
   for(int oszlop = 0; oszlop < n; oszlop++){
        cout << pM[sor][oszlop]<< " ";}
        cout <<endl;}

    return 0;
}
