#include <iostream>
#include <string>

using namespace std;

int main()
{
    string mondat, str;
    getline(cin, mondat);

    bool found = true;
    int pos;
    int cntr = 0;

    while(found){
        cout << mondat << endl;
        pos = mondat.find(' ');
        mondat.replace(pos,1,'+');
        cntr++;
    }






    return 0;
}
