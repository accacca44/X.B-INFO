#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
   srand(time(NULL));

   int n;cin>>n;
   int row;
   int col;
   int matrix[n][n];

   for(int row = 0; row < n; row++){
   for(int col = 0; col < n; col++){
        if(row == col)matrix[row][col] = 1;
        else matrix[row][col] = rand()%100;
        if(row > col)matrix[row][col] *= -1;
   }
   }
    for(int row = 0; row < n; row++){
   for(int col = 0; col < n; col++){
    cout<<matrix[row][col]<<" ";
   }cout<<endl;}

    return 0;
}
