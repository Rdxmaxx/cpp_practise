#include <bits/stdc++.h>
using namespace std;

string decimalTohex(int n) {
    string ans;
    int x = 1;

    while (x <= n) {
        x *= 16;
    }
    x /= 16;

    while (x > 0) {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=16;
        
        if (lastDigit <= 9) {
            ans = ans + to_string(lastDigit); 
        }
        else {
            char c = 'A' + lastDigit - 10;
        }
    }
    return ans;
}

int main() {

    int n;
    cin>>n;

    cout<<decimalTohex(n)<<endl;

    return 0;
}