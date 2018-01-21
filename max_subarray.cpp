#include<iostream>
#include<vector>
#include<algorithm>   //the function max()
using namespace std;

class Solution {
public:
	int maxSubArray(vector<int> nums) {
		int n = nums.size();
		vector<int>dp;
		dp.push_back(nums[0]);
		int m = nums[0];
		int p = 0;

		for (int i = 1; i < n; i++)
		{
			if (dp[i - 1] > 0)
				p = dp[i - 1];
			else
				p = 0;
			dp.push_back(nums[i] + p);
			m = max(m,dp[i]);
		}

		cout << m << endl;
		return m;
	}
};

void main()
{
	Solution s;
	s.maxSubArray({ -2, 1, -3, 4, -1, 2, 1, -5, 4 });
}
