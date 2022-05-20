#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void  evenOdd(string mySting)
{
    int myStringLength = mySting.length();
    string evenWord = "";
    string oddWord  = "";
    for (int i = 0; i<myStringLength; i++) {
        if (i % 2 == 0) {
            evenWord += mySting.at(i);
        } else {
            oddWord += mySting.at(i);
        }
    } 
    cout<<evenWord<<" "<<oddWord<<endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int test_cases;
    cin>>test_cases;
    string mySting[test_cases]; 
    cin.ignore();
    for (int i=0; i<test_cases; i++) {
        getline(cin, mySting[i]);
    } 
    for (int i=0; i<test_cases; i++) {
        //cout<<mySting[i]<<endl;
        // cout<<mySting[i].length()<<endl;
        evenOdd(mySting[i]);
    } 
    return 0;
}
