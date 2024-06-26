#include <bits/stdc++.h> 
using namespace std; 

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<bool> visited(n, false);
    int score = 0;
    
    while (true) {
        int max_value = INT_MIN;
        int max_index = -1;
        
        // Find the largest unvisited element with smallest index in case of tie
        for (int i = 0; i < n; i++) {
            if (!visited[i] && arr[i] > max_value) {
                max_value = arr[i];
                max_index = i;
            }
        }
        
        // Break the loop if no more unvisited elements are found
        if (max_index == -1) {
            break;
        }
        
        // Update the score with the selected element
        score += arr[max_index];
        
        // Mark the selected element as visited
        visited[max_index] = true;
        
        // Mark the right adjacent element as visited if it exists
        if (max_index + 1 < n) {
            visited[max_index + 1] = true;
        }
    }
    
    // Print the final score
    cout << score << endl;
    
    return 0;
}
