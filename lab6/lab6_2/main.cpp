#include <iostream>
#include <fstream>

using namespace std;


bool prime_check(int a){
    int clone = a;
    int new_num = 0;


    while(clone > 0){
        int last = clone%10;
        new_num = new_num*10 + last;
        clone /= 10;
    }

    if(new_num == a)return 1;
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
