//using hashmap concept
//time O(nlogn) , space O(n)
#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int target){
  vector<vector<int>>rs;
  unordered_map<int,int>mp;
  for(int i=0;i<arr.size();i++){
     int val=arr[i];
     int extra=target-arr[i];
     if(mp.find(extra)!=mp.end()){
       rs.push_back({extra, val});
     }
     mp[val]=i;
  }
  sort(rs.begin(),rs.end());
  return rs;
}


//two sum 
//time O(n), space O(n)
#include <bits/stdc++.h> 
#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int target) {
   vector<vector<int>>rs;
   sort(arr.begin(),arr.end());
   int left=0,right=arr.size()-1;
   while (left < right) {
     if (arr[left] + arr[right] == target) rs.push_back({arr[left],arr[right]});
     if(arr[left] + arr[right] < target) left++;
     else right++;
   }
   return rs;
}

//two sum(leetcode)
//time O(n) , space O(n) 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int left=0,right=v.size()-1;
        while(left <= right){
            if(v[left].first + v[right].first == target) return {v[left].second,v[right].second};
            else if(v[left].first + v[right].first < target) left++;
            else right--;
        }
        return {-1,-1};
    }
};
