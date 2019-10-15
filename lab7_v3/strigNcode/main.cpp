#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    string code;
    string newstr;


    cin >> s;
    cin >> code;

    if(s.size() != code.size()) cout << "ERR";
    else{
        for(int i = 0; i < s.size(); i++){
                if(code[i] == '0' || code[i] == '2' || code[i] == '4' || code[i] == '6' || code[i] == '8' )newstr.insert(0, s, i, 1);
                else                                                                                       newstr.append(s, i ,1);
        }
    cout << newstr;
    }

    return 0;
}
