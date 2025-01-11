/*You are given a 2-dimensional array/list having N rows and M columns, which is filled with ones(1) and zeroes(0). 1 signifies land, and 0 signifies water.

A cell is said to be connected to another cell, if one cell lies immediately next to the other cell, in any of the eight directions (two vertical, two horizontal, and four diagonals).

A group of connected cells having value 1 is called an island. Your task is to find the number of such islands present in the matrix.
4 5
0 1 1 0 0
1 0 0 1 0
0 0 1 0 0
1 0 0 0 1
Sample Output 1 :
3


*/

/*BFS APPROACH*/
#include<bits/stdc++.h>
using namespace std;

void bfs(int row, int col, vector<vector<int>> &vis, int **arr, int n, int m) {
    vis[row][col] = 1;
    queue<pair<int, int>> q;
    q.push({row, col});

    int delrow[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int delcol[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

    while(!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        for(int i = 0; i < 8; ++i) {
            int nrow = r + delrow[i];
            int ncol = c + delcol[i];

            if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m 
                && arr[nrow][ncol] == 1 && !vis[nrow][ncol]) {
                vis[nrow][ncol] = 1;
                q.push({nrow, ncol});
            }
        }
    }
}

int getTotalIslands(int **arr, int n, int m) {
    vector<vector<int>> vis(n, vector<int>(m, 0));
    int islands = 0;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(arr[i][j] == 1 && !vis[i][j]) {
                bfs(i, j, vis, arr, n, m);
                islands++;
            }
        }
    }
    return islands;
}

int main() {
    int n, m;
    cin >> n >> m;

    int **arr = new int*[n];
    for(int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << getTotalIslands(arr, n, m) << endl;

    for(int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}





/*DFS APPROACH
#include<bits/stdc++.h>
using namespace std;

void dfs(int row, int col, vector<vector<int>> &vis, int **arr, int n, int m) {
    vis[row][col] = 1;

    int delrow[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int delcol[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

    for(int i = 0; i < 8; ++i) {
        int nrow = row + delrow[i];
        int ncol = col + delcol[i];

        if(nrow >= 0 && ncol >= 0 && nrow < n && ncol < m 
           && arr[nrow][ncol] == 1 && !vis[nrow][ncol]) {
            dfs(nrow, ncol, vis, arr, n, m);
        }
    }
}

int getTotalIslands(int **arr, int n, int m) {
    vector<vector<int>> vis(n, vector<int>(m, 0));
    int islands = 0;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(arr[i][j] == 1 && !vis[i][j]) {
                dfs(i, j, vis, arr, n, m);
                islands++;
            }
        }
    }
    return islands;
}

int main() {
    int n, m;
    cin >> n >> m;

    int **arr = new int*[n];
    for(int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << getTotalIslands(arr, n, m) << endl;

    for(int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}

*/