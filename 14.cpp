#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

    Difference(vector<int> e)
    {
       elements = e;
    }
    void computeDifference()
    {
        int heighestNumber = elements[0] ;
        int lowestNumber   = elements[0] ;
        for(int i : elements) {
            if (heighestNumber < i) {
                heighestNumber = i;
            }
            if (lowestNumber > i) {
                lowestNumber = i;
            }
        }
        maximumDifference = abs(heighestNumber - lowestNumber);
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}