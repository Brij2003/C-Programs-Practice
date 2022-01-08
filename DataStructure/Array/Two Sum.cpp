/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Input: nums = [3,2,4], target = 6
Output: [1,2]

*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution{
    public:
    vector<int> twoSum(vector<int> &nums, int target){
        
        vector<int> res,ans;
        res = nums;
        sort(nums.begin(), nums.end());
        int start = 0,n1,n2;
        int end = nums.size() - 1;
        while(start<end){
            if (nums[start] + nums[end] == target)
            {
                n1 = nums[start];
                n2 = nums[end];
                break;
            }
            if (nums[start] + nums[end] > target)
            {
                end--;
            }
            if (nums[start] + nums[end] < target)
            {
                start++;
            }
        }
        for (int i = 0; i < nums.size(); ++i)
        {

            if (res[i] == n1)
                ans.emplace_back(i);
            else if (res[i] == n2)
                ans.emplace_back(i);
        }
        return ans;
    }
};

int main(){
    vector<int> a;
    vector<int> b;
    a = {3, 2, 4};
    Solution s;
    b = s.twoSum(a,6);
    for (int i = 0; i < 2; i++){
        cout << b[i] << endl;
    }
}