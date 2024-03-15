#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int X, Y;
        cin >> X >> Y; 
        int total_cost = X * Y;
        cout << total_cost << endl;
    }

    return 0;
}
