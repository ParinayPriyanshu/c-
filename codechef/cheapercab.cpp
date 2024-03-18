#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;
    cin >> T;
    while (T--) {
    int X, Y;
    cin >> X >> Y;
    if (X < Y)
    cout << "FIRST" << endl;
    else if (Y < X)
    cout << "SECOND" << endl;
    else
    cout << "ANY" << endl;
    }
return 0;
}