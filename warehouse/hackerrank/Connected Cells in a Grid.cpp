/*#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
vector<vector<bool>> isVisited;
vector<vector<int>> matrix;
int m, n;
ofstream fout;
int MOVEMENT[8][2] = {
        {-1, -1},
        {-1, 0},
        {-1, 1},
        {0, -1},
        {0, 1},
        {1, -1},
        {1, 0},
        {1, 1}
};
 */
/*
 * Complete the 'connectedCell' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY matrix as parameter.
 *
 * step by step
 * 1. loop every posible node
 * 2. if a node is 1, then call the recursive method to count the area
 * 3. mark every visited node as isVisited = true
 * 4. last, save the maximum area
 */
/*
bool checkNode(int yIndex, int xIndex) {
    return (0 <= yIndex && yIndex < n &&
            0 <= xIndex && xIndex < m &&
            matrix[yIndex][xIndex] == 1 &&
            isVisited[yIndex][xIndex] == false);
}

void connectCurrentCell(int yIndex, int xIndex, int* gridCounted) {
    /*
     * 1 2 3
     * 4 * 5
     * 6 7 8
     * */
/*
    isVisited[yIndex][xIndex] = true;
    *gridCounted += 1;
    for (int i = 0; i < 8; i++) {
        if ( checkNode(yIndex + MOVEMENT[i][0], xIndex + MOVEMENT[i][1]) ) {
            connectCurrentCell( yIndex + MOVEMENT[i][0], xIndex + MOVEMENT[i][1], gridCounted );
        }
    }

    return;
}

int connectedCell() {
    isVisited = vector<vector<bool>>( matrix.size(), vector<bool>(matrix[0].size(), false) );

    int maxArea = 0;
    for( int i = 0; i < (int)matrix.size(); i++) {
        for( int j = 0; j < (int)matrix[i].size(); j++) {
            if ( isVisited[i][j] == false && matrix[i][j] == 1 ) {
                int localGridCounted = 0;
                connectCurrentCell( i, j, &localGridCounted);
                maxArea = max( maxArea, localGridCounted);
            }
        }
    }
    return maxArea;
}

int main()
{
//    ofstream fout(getenv("OUTPUT_PATH"));
    fout = ofstream(getenv("OUTPUT_PATH"));
    string n_temp;
    getline(cin, n_temp);

    n = stoi(ltrim(rtrim(n_temp)));

    string m_temp;
    getline(cin, m_temp);

    m = stoi(ltrim(rtrim(m_temp)));

    matrix = vector<vector<int>>(n);

    for (int i = 0; i < n; i++) {
        matrix[i].resize(m);

        string matrix_row_temp_temp;
        getline(cin, matrix_row_temp_temp);

        vector<string> matrix_row_temp = split(rtrim(matrix_row_temp_temp));

        for (int j = 0; j < m; j++) {
            int matrix_row_item = stoi(matrix_row_temp[j]);

            matrix[i][j] = matrix_row_item;
        }
    }

    int result = connectedCell();

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
            s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
*/