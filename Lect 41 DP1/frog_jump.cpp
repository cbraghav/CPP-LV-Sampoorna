 // O(N)
//   int frog_jump(int idx , vector<int>&height, vector<int>&dp){
      
//       // base case
//       if(idx<= 0){
//           return 0;
//       }
//       if(dp[idx] !=-1) return dp[idx];
      
//       int cost1 = 1e9,cost2 = 1e9;
//       // jump from idx - 1;
//       if(idx-1 >=0){
//          cost1 = frog_jump(idx-1, height,dp)  + abs(height[idx-1] - height[idx]);
//       }
      
//       // jump from idx- 2;
//       if(idx-2 >=0){
//          cost2 = frog_jump(idx-2, height,dp)  + abs(height[idx-2] - height[idx]);
//       }
      
//       return dp[idx] =  min(cost1,cost2);
//   }
  
  
int minCost(vector<int>& height) {
    // Code here
    int n = height.size();
    vector<int> dp(n+1 , -1);
    // return frog_jump(n-1,height,dp);
    
    dp[0] = 0;
    
    for(int idx = 1; idx<n ;idx++){
        
        int cost1 = 1e9,cost2 = 1e9;
        // jump from idx-1 
        if(idx-1 >=0){
            // cost1 = frog_jump(idx-1, height,dp)  + abs(height[idx-1] - height[idx]);
            cost1 = dp[idx-1] + abs(height[idx-1] - height[idx]);
        }
  
        // jump from idx-2;
        if(idx-2 >=0){
             cost2 = dp[idx-2]  + abs(height[idx-2] - height[idx]);
        }
        
        dp[idx] = min(cost1 , cost2);
    }
    
    return dp[n-1];
    
    
}