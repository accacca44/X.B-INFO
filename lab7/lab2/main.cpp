#include <iostream>
#include <string>

using namespace std;

int main()
{
    int pos;
    string str;

    getline(cin , str);

    while(pos = str.find("f") != string::npos){
        pos = str.find("f");
        str = str.replace(pos,2, "Fasz");
        cout << str;
    }

    return 0;
}
