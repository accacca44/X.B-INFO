#include <iostream>
#include <fstream>

using namespace std;


bool prime_check(int a){
    int oszto;
    bool check = 1;
    for(int oszto = 2; oszto <= a/2; oszto++){
        if(a%oszto == 0)check = 0;}
    if(check)return 1;
    else return 0;


}

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");

    int N,M;

    in >> N >> M;
    int matrix[N][M];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            in >> matrix[N][M];
            out << prime_check(matrix[N][M]) << " ";
        }   out << endl;
    }
    return 0;
}
