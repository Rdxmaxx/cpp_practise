#include <iostream>
#include <math.h>
using namespace std;

//   153  is an armstrong number
// (1)^3 + (5)^3 + (3)^3 = 153

int main() {

    int n;
    cin>>n;

    int sum=0;
    int originaln = n;
    while (n>0) {
        int lastdigit = n%10;
        sum += pow(lastdigit, 3);
        n = n/10;
    }

    if (sum == originaln) {
        cout<<"Armstrong Number"<<endl; 
    }
    else {
        cout<<"Not an armstrong number"<<endl;
    }

    return 0;
}