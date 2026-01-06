/*
    Problem Link: https://leetcode.com/problems/contains-duplicate/description/

	* This is the optimized approach
    
	Steps
	For the list [1, 2, 1]
	1. sort the array nums
	2. loop through from the first element to the second to last element
	3. in each step compare the current element with the next element
	4. if nums[i] == nums[i+1] return true
	5. else return false

    Description: this approach sorts the array first and then checks for duplicates by comparing elements next to each other
    
    Time Complexity: O(N log N) due to sorting the array
    Space Complexity: O(log N) due to stack space used by sorting algorithm

	Edge Cases Handled: the code handles empty arrays by returning false safely because i + 1 < nums.size() will be false

	Example: {1, 2, 1} -> true
	
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
	public:
	bool containsDuplicate(vector<int>& nums){
		sort(nums.begin(), nums.end());

		for(size_t i = 0; i + 1 < nums.size(); i++){ // i + 1 to avoid out of bounds
			if(nums[i] == nums[i + 1]){
				return true;
			}
		}

		return false;
	}
};

int main(){
	vector<int> nums = {1, 2, 1};
	Solution solution;
	bool result = solution.containsDuplicate(nums);
	cout << (result ? "true" : "false") << endl;
	return 0;
}