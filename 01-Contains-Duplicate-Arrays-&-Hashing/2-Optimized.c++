/*
    Problem Link: 

	* This is the optimized approach
    
	Steps
	For the list [1, 2, 3, 1]
	1. set the vector 
	2. sort the vector 
	3. iterate through the vector from i = 0 to i < nums.size() -1 and we will stop when we find the first duplicate
	4. compare the current element with the next element if they are the same return true
	5. if no duplicates found return false

    Description: this approach sorts the array first and then checks for duplicates by comparing elements next to each other
    
    Time Complexity: O(N log N) due to sorting the array
    Space Complexity: O(1) as no extra space is used

	Edge Cases Handled: the code handles empty arrays by returning false safely because i < nums.size() - 1 will be false

	Example: {1, 2, 3, 1} -> true
	
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class solution{
	public:
	bool containsDuplicate(vector<int>& nums){
		sort(nums.begin(), nums.end());
		for(int i = 0; i < nums.size() -1 ; i++){
			if(nums[i] == nums[i+1]){
				return true;
			}
		}
		return false;
	}
};

int main(){
	vector<int> nums = {1,2,3,1};
	solution obj;
	bool result = obj.containsDuplicate(nums);
	cout << (result ? "true" : "false") << endl;
	return 0;
}