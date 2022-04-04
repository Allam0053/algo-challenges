/*#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

typedef struct costType{
    ull oldPosition;
    ull cost;
    costType() {
        oldPosition = 0;
        cost = 0;
    }
    costType(ull oldPosition_, ull cost_) {
        oldPosition = oldPosition_;
        cost = cost_;
    }
}CostType;

bool ascendingCompare(CostType ct1, CostType ct2) {
    if (ct1.cost == ct2.cost) {
        return ct1.oldPosition < ct2.oldPosition;
    }
    return ct1.cost < ct2.cost;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ull testcase = 0;
    cin >> testcase;
    while(testcase--) {
        ull money, arraySize, pasanganKiri = -1, pasanganKanan = -1;
        cin >> money >> arraySize;
        vector<CostType> costs;

        for( ull i = 0; i < arraySize; i++) {
            ull temp;
            cin >> temp;
            costs.emplace_back(i, temp);
        }
        sort( costs.begin(), costs.end(), ascendingCompare);
        for( ull i = 0; i < arraySize; i++) {
            ull left = i, middle, right = arraySize - 1;
            while (left < right) {
//                middle = (left + right) / 2;
                middle = left + (right - left + 1) / 2;
                if (costs[middle].cost == (money - costs[i].cost)) {
                    while ( (costs[middle - 1].cost == (money - costs[i].cost)) &&
                            (costs[middle - 1].oldPosition != costs[i].oldPosition)) {
                        middle--;
                    }
                    pasanganKiri = min(costs[i].oldPosition, costs[middle].oldPosition);
                    pasanganKanan = max(costs[i].oldPosition, costs[middle].oldPosition);
                    break;
                } else if (costs[middle].cost < (money - costs[i].cost)){
                    left++;
                } else {
                    right--;
                }
            }
            if (pasanganKiri != -1 && pasanganKanan != -1) {
                break;
            }
        }
        cout << pasanganKiri+1 << " " << pasanganKanan+1 << endl;
    }

    return 0;
}
 */
/*
1
3
2
1 2


 */