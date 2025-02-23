#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'countingSort' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> countingSort(vector<int>& arr) {
    // Initialize frequency array of size 100 (for numbers from 0 to 99)
    vector<int> freq(100, 0);
    
    // Iterate over the input array and update frequency
    for (int num : arr) {
        freq[num]++;
    }
    
    return freq;  // Return the frequency array
}

int main() {
    // Reading input
    int n;
    cin >> n;  // Number of elements in the array
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Read the elements into the array
    }
    
    // Get the frequency array
    vector<int> result = countingSort(arr);
    
    // Print the frequency array
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
