/*
	Problem Link: https://leetcode.com/problems/contains-duplicate/description/

	* This is the brute force approach

	this approach will give you Time Limit Exceeded on leetcode due to O(n^2) time complexity

	Steps
	For the list [1,2,1]
	1. pick the first element
	2. compare it with all other elements
	3. if any element matches return true
	4. if no match found pick the next element and repeat steps 2 to 4
	5. if no duplicates found after all comparisons return false

	Description: 
	the function containsDuplicate takes a vector of integers  
	as input and checks if there are any duplicate values in the vector

	Time Complexity:  O(n2) quadratic time
	Space Complexity: O(1)  constant space

	Edge Cases Handled: if nums is empty it will return false safely

	Example: { 1,2,1 } -> true

*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		for (size_t i = 0; i < nums.size(); i++) { // size_t is used to avoid signed/unsigned comparison warnings
			for (size_t j = i + 1; j < nums.size(); j++) {
				if (nums[i] == nums[j]) {
					return true;
				}
			}
		}
		return false;
	}
};

int main()
{
	vector<int> nums = {1,2,1};
	Solution solution;
	bool result = solution.containsDuplicate(nums);
	cout << (result ? "true" : "false") << endl;
}
