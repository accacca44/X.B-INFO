#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream voda("vodafone.txt");
    ofstream digi("digi.txt");
    ofstream vez("vezetekes.txt");
    ofstream ora("orange.txt");


    string phoneNum;
    while(in >> phoneNum){
        if(phoneNum[0] == '6' && phoneNum.size() == 6){
                phoneNum.insert(0, "0040260");
                vez << phoneNum << endl;}
        if(phoneNum.size() == 7){
            phoneNum.insert(0, "00407");
            if(phoneNum[5] == '2')voda <<phoneNum << endl;
            if(phoneNum[5] == '4')ora <<  phoneNum << endl;
            if(phoneNum[5] == '7')digi <<  phoneNum << endl;
        }



    }
    return 0;
}
