#include <iostream>

using namespace std;

int main()
{
    int n;
    float matrix[100][100];
    float line[100];
    float aux_line[100];
    float sum;
    cin >> n;

    for(int sor = 0; sor < n; sor++){
    for(int oszlop = 0; oszlop < n; oszlop++){
        cin >> matrix[sor][oszlop];}}

    for(int oszlop = 0; oszlop < n; oszlop++){
        sum = 0;
    for(int sor = 0; sor < n; sor++){
        sum += matrix[sor][oszlop];}
        line[oszlop] = sum/n;

        }


    return 0;
}
