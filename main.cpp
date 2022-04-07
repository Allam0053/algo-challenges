#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ull arraySizeA, arraySizeB;
    vector<ull> arrayA, arrayB;
    cin >> arraySizeA;

    ull temp;
    for( ull i = 0; i < arraySizeA; i++) {
        cin >> temp;
        arrayA.push_back( temp );
    }

    cin >> arraySizeB;
    for( ull i = 0; i < arraySizeB; i++) {
        cin >> temp;
        arrayB.push_back( temp );
    }

    sort( arrayA.begin(), arrayA.end() );
    sort( arrayB.begin(), arrayB.end() );

    ull indexA = 0;
    vector<ull> unmatched;
    for( ull indexB = 0; indexB < arraySizeB; indexB++) {
        if (arrayA[indexA] == arrayB[indexB]) {
            indexA++;
            continue;
        } else {
            unmatched.push_back( arrayB[indexB] );
        }
    }

    for( ull i = 0; i < unmatched.size(); i++) {
        cout << unmatched[i];
        if ( i != unmatched.size() - 1 ) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
/*
10
203 204 205 206 207 208 203 204 205 206
13
203 204 204 205 206 207 205 208 203 206 205 206 204

\


 3670 3674 3677 3684 3685 3685 3695 3714 3720
 */