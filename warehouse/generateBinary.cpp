// C++ program to generate binary numbers from 1 to n
// src: https://www.geeksforgeeks.org/interesting-method-generate-binary-numbers-1-n/
/*
#include <bits/stdc++.h>
using namespace std;

bool isABDividedBy3( string _src ) {
    size_t countA = std::count(_src.begin(), _src.end(), 'a');
    size_t countB = std::count(_src.begin(), _src.end(), 'b');
    return (countA == 3 && countB == 3);
}

// This function uses queue data structure to print binary
// numbers
void generatePrintBinary(int n)
{
    queue<string> q;
    q.push("a");
    q.push("b");
    cout << "{ " ;
    while ( true ) {
        string s1 = q.front();
        q.pop();
//        if ( isABDividedBy3( s1 ) ) {
//            cout << s1 << ", ";
//        }
        cout << s1 << ", ";
        string s2 = s1;
        q.push( s1.append("a") );
        q.push( s2.append("b") );

        if ( q.front().length() > 3 ) {
            break;
        }
    }
    cout << "}\n" ;
}

// Driver program to test above function
int main()
{
    int n = 10;
    generatePrintBinary(n);
    return 0;
}
 */