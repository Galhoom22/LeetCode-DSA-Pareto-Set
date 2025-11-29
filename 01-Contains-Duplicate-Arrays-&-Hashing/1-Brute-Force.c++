/*
	Problem Link: https://leetcode.com/problems/contains-duplicate/description/

	* This is the brute force approach

	Steps
	For the list [1,2,3,1]
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

	Example: { 1,2,3,1 }

*/

#include <iostream>
#include <vector>
using namespace std;

class solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		for (int i = 0; i < nums.size(); i++) {
			// Inner loop compares it with every number AFTER it
			for (int j = i + 1; j < nums.size(); j++) {
				// If we find a match we found a duplicate
				if (nums[i] == nums[j]) {
					return true;
				}
			}
		}
		// If we finish checking EVERY pair and find no matches
		return false;
	}
};

int main()
{
	vector<int> nums = {};
	solution object;
	bool result = object.containsDuplicate(nums);
	cout << (result ? "true" : "false") << endl;
}
