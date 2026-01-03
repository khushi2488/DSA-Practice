#include <bits/stdc++.h>
using namespace std;

int main() {
    int V = 5;
    vector<vector<int>> adjMatrix(V, vector<int>(V, 0));

    int c1 = 1, c2 = 2, c3 = 3, c4 = 4, c5 = 5, c6 = 6;

    adjMatrix[0][1] = adjMatrix[1][0] = c1; // A - B
    adjMatrix[0][2] = adjMatrix[2][0] = c2; // A - C
    adjMatrix[1][3] = adjMatrix[3][1] = c3; // B - D
    adjMatrix[2][3] = adjMatrix[3][2] = c4; // C - D
    adjMatrix[2][4] = adjMatrix[4][2] = c5; // C - E
    adjMatrix[3][4] = adjMatrix[4][3] = c6; // D - E

    // Print matrix
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
