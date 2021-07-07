#include <iostream>
using namespace std;

// for n=5
//         1 
//       2 1 2 
//     3 2 1 2 3 
//   4 3 2 1 2 3 4 
// 5 4 3 2 1 2 3 4 5 

int main() {

    int n;
    cin>>n;

    for (int i=1; i<=n; i++) {
        // spaces
        for (int j=1; j<=(n-i); j++) {
            cout << "  ";
        }

        // number 
        for (int j=i; j>=1; j--) {
            cout << j<< " ";
        }

        // number part 2
        for (int j=2; j<=i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}