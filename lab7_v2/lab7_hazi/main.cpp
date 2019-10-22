#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;

    getline(cin ,s1);

    int pos;

    char mag[5] = {'a' ,'e', 'i' ,'o', 'u'};

    for(int betu = 0; betu < 5; betu++){
        while(pos = s1.find(mag[betu]) != std::npos){
            pos = s1.find(mag[betu], pos + 3);

        }

    }


    return 0;
}
