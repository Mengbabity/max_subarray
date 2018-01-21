package max_subarray;
import java.lang.Math;

public class solution {
    public int maxSubArray(int[] nums) {
    	int n=nums.length;
        int[] dp=new int[n];       
        dp[0]=nums[0];
        int m=nums[0];
        int p=0;
        
        for(int i=1;i<n;i++)
        {
        	if(dp[i-1]>0)
        		p=dp[i-1];
        	else
        		p=0;
        	
        	dp[i]=nums[i]+p;
        	m=Math.max(m,dp[i]);
        }
        
        System.out.println(m);
        return m;
    }
}
