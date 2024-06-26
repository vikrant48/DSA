#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>
#include<algorithm>
#include <bits/stdc++.h> 
using namespace std;

// Function to find cycles and their lengths in the graph
vector<int> find_cycles(const vector<int>& A, int N) {
    vector<int> visited(N + 1, 0);
    vector<int> cycle_sizes;
    
    for (int i = 1; i <= N; ++i) {
        if (visited[i] == 0) {
            int cur = i;
            unordered_set<int> cycle_nodes;
            
            while (visited[cur] == 0) {
                visited[cur] = 1;
                cycle_nodes.insert(cur);
                cur = A[cur];
            }
            
            if (cycle_nodes.count(cur)) {
                int cycle_size = 0;
                int start = cur;
                do {
                    cycle_size++;
                    cur = A[cur];
                } while (cur != start);
                cycle_sizes.push_back(cycle_size);
            }
        }
    }
    
    return cycle_sizes;
}

// Function to calculate total pairs in the graph
int calculate_total_pairs(const vector<int>& cycle_sizes) {
    int total_pairs = 0;
    for (int size : cycle_sizes) {
        total_pairs += size * size;
    }
    return total_pairs;
}

// Main function
int main() {
    int N;
    cin >> N;
    
    vector<int> A(N + 1);
    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
    }
    
    vector<int> cycle_sizes = find_cycles(A, N);
    int base_pairs = calculate_total_pairs(cycle_sizes);
    
    if (cycle_sizes.size() == 1) {
        // Only one cycle, can't improve further
        cout << base_pairs << endl;
    } else if (cycle_sizes.size() == 2) {
        // Two cycles, we can connect them with one change
        int new_pairs = (cycle_sizes[0] + cycle_sizes[1]) * (cycle_sizes[0] + cycle_sizes[1]);
        cout << new_pairs << endl;
    } else {
        // More than two cycles, try to combine the largest ones
        sort(cycle_sizes.begin(), cycle_sizes.end(), greater<int>());
        int new_pairs = (cycle_sizes[0] + cycle_sizes[1]) * (cycle_sizes[0] + cycle_sizes[1]);
        new_pairs += cycle_sizes[2] * cycle_sizes[2];
        for (size_t i = 3; i < cycle_sizes.size(); ++i) {
            new_pairs += cycle_sizes[i] * cycle_sizes[i];
        }
        cout << new_pairs << endl;
    }
    
    return 0;
}
