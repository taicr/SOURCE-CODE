#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        int maxDigit = 0;
        for (char digit : s) {
            maxDigit = max(maxDigit, digit - '0');
        }
        
        cout << maxDigit << endl;
    }
    
    return 0;
}
