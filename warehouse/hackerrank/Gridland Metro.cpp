/*#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

typedef struct trackStruct {
    ull row;
    ull start;
    ull end;
    trackStruct() {
        row = 0;
        start = 0;
        end = 0;
    }
    trackStruct(ull row_, ull start_, ull end_) {
        row = row_;
        start = start_;
        end = end_;
    }
} trackStruct;

bool compareTrackAscending(trackStruct ts1, trackStruct ts2) {
    if (ts1.row == ts2.row) {
        if (ts1.start == ts2.start) {
            return ts1.end < ts2.end;
        }
        return ts1.start < ts2.start;
    }
    return ts1.row < ts2.row;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ull rows, cols, trackCount;
    cin >> rows >> cols >> trackCount;
    if ( trackCount == 0 ) {
        cout << (rows*cols) << endl;
        return 0;
    }
    bool grids[rows][cols];
    for(ull i = 0; i < rows; i++) {
        for(ull j = 0; j < cols; j++) {
            grids[i][j] = false;
        }
    }
    ull counter = rows * cols;
    vector<trackStruct> tracks;
    for( ull i = 0; i < trackCount; i++ ) {
        ull row, start, end;
        cin >> row >> start >> end;
        tracks.emplace_back(row - 1, start - 1, end - 1);
    }

    sort(tracks.begin(), tracks.end(), compareTrackAscending);

    ull lastRow = 0;
    for( ull i = 0; i < rows; i++ ) {
        ull lastCol = 0;
        while( tracks[lastRow].row != i ) {
            if( i < tracks[lastRow].row ) {
                i++;
            } else {
                lastRow++;
            }
        }
        while( lastRow < (ull)tracks.size() && tracks[lastRow].row == i ) {
            for( ull j = max(tracks[lastRow].start, lastCol); j <= tracks[lastRow].end; j++) {
                grids[i][j] = true;
                lastCol = j;
            }
            lastRow++;
        }
    }

//    for(ull i = 0; i < rows; i++) {
//        for(ull j = 0; j < cols; j++) {
//            cout << (grids[i][j] == true) << " ";
//        }
//        cout << endl;
//    }

    counter = 0;
    for(ull i = 0; i < rows; i++) {
        for(ull j = 0; j < cols; j++) {
            if( grids[i][j] != true ) counter++;
        }
    }

    cout << counter << endl;

    return 0;
}
*/
/*
4 4 3
2 2 3
4 4 4
3 1 4

1 5 3
1 1 2
1 2 4
1 3 5
 */