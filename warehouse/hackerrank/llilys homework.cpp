/*#include <bits/stdc++.h>
using namespace std;
const int N = int(1e5) + 5;
int n, a[N], p[N];
bool used[N];

bool cmp(int i, int j) {
    return a[i] < a[j];
}

void printArrayOfInt( int arr[N], int size ) {
    cout << "{ ";
    for ( int i = 0; i < size; i++) {
        cout << arr[i];
        if (i == size - 1) continue;
        cout << ",";
    }
    cout << " }" << endl;
}

void printArrayOfBool( bool arr[N], int size) {
    cout << "{ ";
    for ( int i = 0; i < size; i++) {
        cout << arr[i];
        if (i == size - 1) continue;
        cout << ",";
    }
    cout << " }" << endl;
}

int solve() {
    memset(used, 0, sizeof(used));
    int cur = 0;
    for (int i = 0; i < n; ++i) {
        int x = i;
        if (used[x])
            continue;
        while (!used[x]) {
            used[x] = true;
            x = p[x];
        }
        printArrayOfBool(used, n);
        cur++;
    }
    return n - cur;
}

int main() {
    assert(scanf("%d", &n) == 1);
    for (int i = 0; i < n; ++i) {
        assert(scanf("%d", &a[i]) == 1);
        assert(1 <= a[i] && a[i] <= int(2e9));
        p[i] = i;
    }

    sort(p, p + n, cmp);
    for (int i = 0; i + 1 < n; ++i)
        assert(a[p[i]] != a[p[i + 1]]);

    printArrayOfInt(p, n);

    int res = solve();
    reverse(p, p + n);
    res = min(res, solve());
    printf("%d\n", res);
    return 0;
}
// 10 10 1 3 5 6 4 9 8 7 2
 */