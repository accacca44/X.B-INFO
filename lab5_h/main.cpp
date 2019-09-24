#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("lkkt.out");

    int N; in>>N;
    int row;
    int col;
    int mtx[N][N];
    int sum1 = 0;
    int sum2 = 0;

    for(row = 0; row < N; row++){
    for(col = 0; col < N; col++){
        in>>mtx[row][col];
        if(row > col)sum1 += mtx[row][col];
        if(row < col)sum2 += mtx[row][col];
}}
    int aux = sum1 * sum2;

        while(sum1 != sum2)
    {
        if(sum1 > sum2)sum1 -= sum2;
        else sum2 -= sum1;
    }
    out << aux / sum1;

    return 0;
}
