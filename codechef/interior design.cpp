#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int T;
    cin >> T;
    while (T--) {
        int X1, Y1, X2, Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;
        int cost1 = X1 + Y1;
        int cost2 = X2 + Y2;
        int min_cost = min(cost1, cost2);
        cout << min_cost << endl;
    }
    
    return 0;
}