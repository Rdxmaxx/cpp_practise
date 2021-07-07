#include <iostream>
using namespace std;

//   for n = 4
//       * 
//     * * * 
//   * * * * * 
// * * * * * * * 
// * * * * * * * 
//   * * * * * 
//     * * * 
//       * 

int main() {

    int n;
    cin>>n;

    // upper half
    for (int i=1; i<=n; i++) {
        // space
        for (int j=1; j<=(n-i); j++) {
            cout << "  ";
        }

        // upper triangle
        for (int j=1; j<=((2 * i) - 1); j++) {
            cout << "* ";
        }
        cout << endl;
        
    }

    // lower half
     
    for (int i=n; i>=1; i--) {
        // space
        for (int j=1; j<=(n-i); j++) {
            cout << "  ";
        }

        //  lower triangle
        for (int j=1; j<=((2 * i) - 1); j++) {
            cout << "* ";
        }
        cout << endl;
        
    }

    return 0;
}