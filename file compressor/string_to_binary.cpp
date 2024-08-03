#include<iostream>
#include<bitset>
#include<string>

using namespace std;
int main(){

    string s = "0110";
    int n = s.length();

    cout << "String value : " << s << " size : " << sizeof(s) << endl;
    unsigned long binarynumber = stoul(s, nullptr, 2);
    cout << "Integer value : " << binarynumber << " size : " << sizeof(binarynumber) << endl; 
    bitset<4> bitset(binarynumber);
    cout << "Binary representation : " << bitset << " size : "<< sizeof(bitset) <<  endl; 
    return 0;
}