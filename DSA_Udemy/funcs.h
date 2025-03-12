//
//  funcs.h
//  DSA_Udemy
//
//  Created by Saurabh Ojha on 12/03/25.
//

#include<vector>
#include<unordered_map>
#include<algorithm>
#include<utility>
using namespace std;
pair<int,int> twoSum(vector<int>nums,int target){
    unordered_map<int,int>m;
    for (int i=0;i<nums.size();i++){m[nums[i]]=i;}
    
    for (int i=0;i<nums.size();i++){
        const int t=target-nums[i];
        if (m.find(t)!=m.end() && m[t]!=i){return {i,m[t]};}
    }   return {-1,-1};
}


vector<vector<int>> threeSum(vector<int>nums,int target){
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());
    for (int i=0;i<nums.size()-2;i++){
        while (nums[i+1]==nums[i]){continue;}
        int j=i+1;  int k=nums.size()-1;
        while (j<k){
            int f=nums[i]+nums[j]+nums[k];
            if (f==target){ans.push_back({nums[i],nums[j],nums[k]}); j++;   k--;}
            if (f>target){k-=1;}
            else {j+=1;}
        }
    }
    return ans;
    
}
