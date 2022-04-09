/*#include <bits/stdc++.h>
#define ll unsigned long long
#define ll long long
using namespace std;

bool checkKey (ll key, const unordered_map<ll, ll> &m) {
    if (m.find(key) == m.end()) {
        return false; //Key is not in the map
    }
    return true; //Key is in the map
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll arraySize, difference, maxNum = 0;
    cin >> arraySize >> difference;
//    vector<ll> myArrayInput(2147483647, 0);
    unordered_map<ll, ll> mappedNumber;
    for(ll i = 0; i < arraySize; i++) {
        ll temp;
        cin >> temp;
        maxNum = max( (ll)0, temp);
        if (checkKey( temp, mappedNumber)) {
            mappedNumber[ temp ] = mappedNumber[ temp ] + (ll)1;
        } else {
            mappedNumber[ temp ] = (ll)1;
        }
    }

    ll counter = 0;
    unordered_map<ll, ll>::iterator it;
    for( it = mappedNumber.begin(); it != mappedNumber.end(); it++) {
        ll pairIndex = it->first + difference;
        if ( !checkKey(pairIndex, mappedNumber) ) continue;
        counter += ( it->second * mappedNumber[pairIndex] );
    }

    cout << counter << endl;

    return 0;
}
 */
/*




 */