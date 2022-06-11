#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    int data;
    try {
        data = stoi(S);
        cout<<data;
    } catch (...) {
        cout<<"Bad String";
    }

    return 0;
}
