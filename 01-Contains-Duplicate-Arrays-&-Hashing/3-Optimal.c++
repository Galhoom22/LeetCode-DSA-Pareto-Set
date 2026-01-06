/*
    Problem Link: https://leetcode.com/problems/contains-duplicate/description/

    * This is the Optimal approach using Hash Set.

    Steps
    For the list [1, 2, 1]
    1. Create an empty Hash Set `seen`.
    2. Loop through each number in the array (grab number by number).
    3. Check if the current number exists in the set.
    4. If yes (seen before) -> return true.
    5. If no -> add the number to the set and continue.
    6. If the loop finishes without finding duplicates -> return false.

    Description: 
    This approach uses a Hash Set data structure which offers fast lookups (O(1) average).
    We trade space for speed by storing elements to detect duplicates instantly.

    Time Complexity:  O(N) - We traverse the array once, and set lookups are O(1) on average.
    Space Complexity: O(N) - In the worst case, we store all unique elements in the set.

    Edge Cases Handled: 
    - Empty arrays are handled (loop doesn't run, returns false).
    - Single element arrays handled correctly.

    Example: {1, 2, 1} -> true
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution{
	public:
	bool containsDuplicate(vector<int>& nums){
		unordered_set<int> seen;
		
		seen.reserve(nums.size()); // Reserve space to avoid rehashing

		for(int num : nums){
			if(seen.contains(num)){
				return true;
			}
			seen.insert(num);
		}
		return false;
	}
};

int main() {
    vector<int> nums = {1, 2, 1};
    Solution solution;
    bool result = solution.containsDuplicate(nums);
    cout << (result ? "true" : "false") << endl;
    return 0;
}