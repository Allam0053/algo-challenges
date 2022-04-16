/*
#include <bits/stdc++.h>
using namespace std;

int coins[ 1000 ];

int coinTypes, targetSum;

int solution(int currentSum, int currentTypeOfCoins){

    if(coinTypes == 0 || currentSum > targetSum || currentTypeOfCoins>=coinTypes) {
        return 0;
    }

    else if(currentSum == targetSum) {
        return 1;
    }

    return solution(currentSum+coins[currentTypeOfCoins],currentTypeOfCoins) + solution(currentSum,currentTypeOfCoins+1) ;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> targetSum >> coinTypes;
    for(int i=0; i<coinTypes; i++) {
        cin >> coins[i];
    }
    cout << solution(0,0) << endl;
    return 0;
}
*/