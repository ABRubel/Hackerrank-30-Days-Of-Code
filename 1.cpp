#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int a;
    double b;
    string c;
    // Read and save an integer, double, and String to your variables.
    cin>>a;
    cin>>b;
    cin.ignore();

    getline (cin, c);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.
    cout<<i+a<<endl;
    // Print the sum of the double variables on a new line.
    double e = d+b;
    cout<<fixed<<setprecision(1)<<e<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    string result = s+c;
    cout<<result<<endl;
    return 0;
}