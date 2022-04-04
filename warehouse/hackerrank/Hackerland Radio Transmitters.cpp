/*#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    LL totalHouses, range, totalTrasmitters = 0;
    cin >> totalHouses >> range;
    LL x[totalHouses];
    for(int i = 0; i < totalHouses; i++) {
        cin >> x[i];
    }
    sort(x, x+totalHouses);
    LL iterator = 0;
    while(iterator < totalHouses) {
        LL currentCoveredLocation = x[iterator] + range;
        while(iterator < totalHouses && x[iterator] <= currentCoveredLocation ) {
            iterator++;
        }
        iterator--;
        totalTrasmitters++;
        currentCoveredLocation = x[iterator] + range;
        while(iterator < totalHouses && x[iterator] <= currentCoveredLocation ) {
            iterator++;
        }
    }
    cout << totalTrasmitters << endl;
    return 0;
}
*/