#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");

    string mtx[100][100];
    string str;
    int n;
    in >> n;

    for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      in >> mtx[i][j];
      str = mtx[i][j];
      if(j > i){str[0] = toupper(str[0]); str[1] = toupper(str[1]);}
      if(i > j){str[str.size()-1] = toupper(str[str.size()-1]); str[str.size()-2] = toupper(str[str.size()-2]);}
      out << str << " ";

     out << endl;}

    return 0;
}
