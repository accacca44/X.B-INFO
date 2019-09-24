#include <iostream>

using namespace std;

int main()
{
    int oszlop;
    int sor;
    cin>>sor;
    cin>>oszlop;
    int matrix[sor][oszlop];
    for(int i=0; i<sor; i++){
        for(int j=0; j < oszlop; j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0; i<sor; i++){
        for(int j=0; j < oszlop; j++){
            cout<<matrix[i][j] << " ";
        }   cout<<endl;
    }
    return 0;
}
