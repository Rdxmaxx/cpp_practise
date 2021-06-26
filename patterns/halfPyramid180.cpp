#include <iostream>
using namespace std;

// Half pyramid after 180 deg rotation
// let n = 5

//      * * * * *                   *
//      * * * *         =>        * *
//      * * *                   * * *
//      * *                   * * * * 
//      *                   * * * * *


int main() {

    int n;
    cin>>n;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (j<=n-i) {
                cout<<"  ";
            }
            else {
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    // for (int i=1; i<=n; i++) {
    //     for (int space=1; space<=n-i; space++) {
    //         cout<<"  ";
    //     } 
    //     for (int j=1; j<=i; j++) {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    return 0;
}