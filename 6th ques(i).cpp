#include <iostream>
#include <vector>
using namespace std;

// Function to find the duplicate number
int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    // Phase 1: Detect cycle using Floyd's Tortoise and Hare algorithm
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Phase 2: Find the start of the cycle (duplicate number)
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {
    vector<int> nums;
    int n;

    // Input the size of the array
    cout << "Enter the size of the array (n + 1): ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    // Find and display the duplicate number
    int duplicate = findDuplicate(nums);
    cout << "The duplicate number is: " << duplicate << endl;

    return 0;
}
