#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int solve(vector<int>&nums){
    if (nums.size()<=1) return nums.size();
    unordered_map<int,bool>m;
    int ans=0;
    for (auto x:nums){
        m[x]=false;
    }
    for (int i=0;i<nums.size();i++){
        const int curr=nums[i];
        if (m[curr]==true)   {continue;}
        else {
            int curr_ans=1;
            int left=curr-1;
            while (m.find(left)!=m.end() && !m[left]){
                curr_ans+=1;
                m[left]=true;
                left-=1;
            }
            int right=curr+1;
            while (m.find(right)!=m.end() && !m[right]){
                m[right]=true;
                curr_ans+=1;
                right+=1;
            }
            ans=max(ans,curr_ans);
        }   
    }
    return ans;
}
// Python Code

// class Solution:
//     def longestConsecutive(self, nums: List[int]) -> int:
//         dp={}
//         ans=0
//         if (len(nums)<=1):
//             return len(nums)
//         for x in nums:
//             dp[x]=False

//         for i in range(len(nums)):
//             curr=nums[i]
//             if (dp[curr]):
//                 continue
//             else:
//                 curr_ans=1
//                 left=curr-1
//                 while (left in dp):
//                     dp[left]=True
//                     curr_ans+=1
//                     left-=1
//                 right=curr+1
//                 while (right in dp):
//                     dp[right]=True
//                     right+=1
//                     curr_ans+=1
                    
//                 ans=max(ans,curr_ans)
//         return ans