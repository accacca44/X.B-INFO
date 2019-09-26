#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n; cin >> n;
    int matrix[n][n];

    for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
            cin >> matrix[i][j];}}

    bool sqr = true;
    int long_num = 1;
    int short_num;
    int alfa = matrix[0][0];

    while(sqr == true){
        for( short_num = 0; short_num <= long_num; short_num++){
            if(alfa != matrix[short_num][long_num])sqr = false;
            if(alfa != matrix[long_num][short_num])sqr = false;
        }
        long_num++;
    }
    cout << long_num-1;

    return 0;
}
