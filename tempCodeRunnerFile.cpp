#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> adj(N + 1);
    for (int i = 0; i < N - 1; ++i) {
        int A, B;
        cin >> A >> B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }
    
    vector<int> degrees(N + 1, 0);
    for (int i = 1; i <= N; ++i) {
        degrees[i] = adj[i].size();
    }
    
    int maxDegreeSum = 2 * (N - 1); // The maximum possible sum of degrees is twice the number of edges.
    vector<vector<long long>> dp(N + 1, vector<long long>(maxDegreeSum + 1, 0));
    dp[0][0] = 1; // Base case: 0 vertices with sum of degrees 0
    
    for (int i = 1; i <= N; ++i) {
        for (int x = N; x >= 1; --x) {
            for (int y = degrees[i]; y <= maxDegreeSum; ++y) {
                dp[x][y] += dp[x - 1][y - degrees[i]];
            }
        }
    }
    
    long long uniquePairsCount = 0;
    for (int x = 0; x <= N; ++x) {
        for (int y = 0; y <= maxDegreeSum; ++y) {
            if (dp[x][y] > 0) {
                uniquePairsCount++;
            }
        }
    }
    
    cout << uniquePairsCount << endl;
    
    return 0;
}