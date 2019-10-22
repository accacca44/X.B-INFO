#include <iostream>

using namespace std;

int main()
{
    int n;
    int m;
    int last_num;

    cin >> n;
    cin >> m;

    int matrix[n][m];

    for(int sor = 0; sor < n; sor++){
    for(int oszlop = 0; oszlop < m; oszlop++){
            cin >> matrix[sor][oszlop];}}

    last_num = matrix[n-1][m-1];

     for(int sor = 0; sor < n; sor++){
    for(int oszlop = 0; oszlop < m; oszlop++){
        if(sor == 0 || sor == n-1 || oszlop == 0 || oszlop == m-1)matrix[sor][oszlop] = last_num;
        cout << matrix[sor][oszlop] << " ";}
        cout << endl;}




    return 0;
}
