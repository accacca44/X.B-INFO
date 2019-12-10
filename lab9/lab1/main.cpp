#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "hun");

    string to_search;
    string line;
    string str;

    ifstream in("input.txt");
    ifstream in2("kovetelmeny.txt");
    ofstream out("output.txt");

    int k;
    int Count = 0;

    cin >> k;
    for(int i = 0; i < k; i++){

        in2 >> to_search;
        cout <<"XXXXXXXXXXXXXXXXX "<< to_search << endl;
        in2.open();
        while(in >> str)
        {
            cout << str << endl;
            if(str == to_search)Count++;}
        out << to_search <<  " " << Count <<endl;
        Count = 0;
        in2.close();
    }


    return 0;
}
