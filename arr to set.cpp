#include <iostream>
#include <set>
#include <array>

int main() {
    // 1. Create a modern std::array
    std::array<int, 6> arr = {5, 2, 8, 5, 2, 1};

    // 2. Pass the iterators to the set constructor
    std::set<int> mySet(arr.begin(), arr.end());

    // 3. Print the set
    for (int num : mySet) {
        std::cout << num << " ";
    }
    // Output: 1 2 5 8

    return 0;
}
