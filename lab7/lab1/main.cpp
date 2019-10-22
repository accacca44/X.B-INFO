#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1;
    string str2;

    getline(cin, str1);
    getline(cin, str2);

    int pos = str2.find(" ");

    str1.append(str2, 0 ,pos);

    cout << str1;
    return 0;
}
