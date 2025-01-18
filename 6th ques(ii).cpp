#include <iostream>
#include <vector>
using namespace std;
int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
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
    cout << "Enter the size of the array : ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int duplicate = findDuplicate(nums);
    cout << "The duplicate number is: " << duplicate << endl;

    return 0;
}
