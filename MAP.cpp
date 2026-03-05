#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declarations
    map<int, int> mpp; 
    // You can also use pairs as keys or values:
    // map<int, pair<int, int>> mpp2;
    // map<pair<int, int>, int> mpp3;

    // 1. Insertion [00:49:23]
    mpp[1] = 2;             // Stores key 1 with value 2
    mpp.emplace(3, 1);      // Stores key 3 with value 1
    mpp.insert({2, 4});     // Stores key 2 with value 4

    // Note: Elements are automatically stored in sorted order of the keys [00:50:05].
    // The map now looks like: { {1, 2}, {2, 4}, {3, 1} }

    // 2. Traversal [00:51:06]
    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl; 
    }

    // 3. Accessing Values [00:51:57]
    cout << mpp[1];  // Output: 2
    cout << mpp[5];  // Output: 0 (If a key does not exist, it returns 0 or null)

    // 4. Finding Elements [00:52:26]
    auto it = mpp.find(3);  // Returns an iterator pointing to the {3, 1} pair
    // cout << it->second;  // Accessing the value using the iterator
    
    auto it2 = mpp.find(5); // Since key 5 is not present, it points to mpp.end()

    return 0;
}
