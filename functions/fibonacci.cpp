#include <iostream>
using namespace std;

void fib(int num) {
    int num1 = 0;
    int num2 = 1;
    int nextNum;

    for (int i=1; i<=num; i++) {
        cout<<num1<<" ";
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
    }
    cout<<endl;
    return;
}

int main() {
    int n;
    cin>>n;

    fib(n);

    return 0;
}