/*
#include <bits/stdc++.h>
using namespace std;

long long sum, coinCount;
vector<vector<long long>> dynamicprogTable;
vector<long long> coins;

//Function to initialize 1st column of dynamicprogTable with 1
void initdynamicprogTable() {
    dynamicprogTable = vector<vector<long long>>(coinCount+1, vector<long long>(sum + 1, 0));

    //First row to 0
    for( long long i = 1; i <= sum; i++) {
      dynamicprogTable[0][i] = 0;
    }

    //First column to 1
    for( long long i = 1; i <= coinCount; i++) {
      dynamicprogTable[i][0] = 1;
    }

}

long long solution(){
  long long coinindex, dynamicprogSum;

  for( coinindex = 1; coinindex <= coinCount; coinindex++) {
      for( dynamicprogSum = 1; dynamicprogSum <= sum; dynamicprogSum++) {
        //value of coin should be less than or equal to sum value to consider it
        if(coins[coinindex-1] > dynamicprogSum)
            dynamicprogTable[coinindex][dynamicprogSum] = dynamicprogTable[coinindex-1][dynamicprogSum];

        else
            dynamicprogTable[coinindex][dynamicprogSum] = dynamicprogTable[coinindex-1][dynamicprogSum]+dynamicprogTable[coinindex][dynamicprogSum-coins[coinindex-1]];
      }
  }

  //return final row and column value
  return dynamicprogTable[coinCount][sum];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> sum >> coinCount;
    coins = vector<long long>(coinCount, 0);
    for (long long i = 0; i < coinCount; i++) {
        cin >> coins[i];
    }
    sort( coins.begin(), coins.end() );
    initdynamicprogTable();

    cout << solution() << endl;

    return 0;
}


*/