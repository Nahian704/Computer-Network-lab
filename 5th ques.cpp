#include <iostream>
#include <vector>
using namespace std;
void moveZerosToEnd(vector<int>& nums) {
    int nonZeroIndex = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[nonZeroIndex++] = nums[i];
        }
    }
    for (int i = nonZeroIndex; i < nums.size(); i++) {
        nums[i] = 0;
    }
}
int main() {
    vector<int> nums;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    moveZerosToEnd(nums);
    cout << "Array after moving zeros to the end: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
