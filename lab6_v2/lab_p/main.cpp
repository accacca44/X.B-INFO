#include <iostream>

using namespace std;

int main()
{
    int n;
    int m;
    bool simm = true;

    cin >> m >>n;

    int mat[m][n];

    for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){cin >> mat[i][j];}}



    for(int sor = 0; sor < m; sor++){
        for(int oszlop = 0; oszlop < n/2; oszlop++){
            if(mat[sor][oszlop] != mat[sor][n-1-oszlop]){simm = false;break;}
        }
    }

    if(simm)cout<<"Da";
    else cout <<"Nu";

    return 0;
}
