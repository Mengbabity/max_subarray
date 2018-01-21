# max_subarray
Dymatic 

#C++
The method is:create a vector(dp) and put the first element(from vector(nums)) into it for intilizing.If the dp[i-1]<0,the dp[i] 
will be nums[i],because it is no need to add the negative to minimum the sum.If the dp[i-1]>=0,the dp[i] will be nums[i]+dp[i-1].
Then the sum will be the max of dp[i] and sum.
In other words,we put the sum of subarray into dp[i],and put the max of subarray into the result.
