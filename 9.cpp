#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    int counter  = 0;
    int maximum  = 0;
    int rem      = 0;
    int previous = n % 2;
    while (n != 0)
    {
        rem = n % 2;
        if (rem == 1)
        {
            if (counter == 0 || previous == rem)
            {
                counter++;
                if (maximum < counter) maximum = counter;
            }
        } else counter = 0;
        previous = rem;
        n = n/2;
    }
    cout<<maximum;
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
