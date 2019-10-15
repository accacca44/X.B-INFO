#include <iostream>
#include <string>

using namespace std;

int main()
{
    string b;
    string a;

    cin >> b;

    if(b.length() >= 3)a = b.substr(b.length()-3,3);
    else a = "nedeterminat";

    cout << a;
    return 0;
}
