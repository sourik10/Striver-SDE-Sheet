//brute force
#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
   set<int>ans;
   for(int i=0;i<arr.size();i++){
       int ct=1;
       for(int j=i+1;j<arr.size();j++){
           if(arr[i]==arr[j]) ct++;
       }

       if(ct > (arr.size()/3)) ans.insert(arr[i]);
   }
   vector<int>res;
   for(auto it:ans) res.push_back(it);
   return res;
}

//hashmap approach
#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    int n=arr.size();
    set<int>st;
   unordered_map<int,int>mp;
    for(int i=0;i<n;i++) mp[arr[i]]++;
    for(auto it:mp){
        if(it.second > n/3) st.insert(it.first);
    }
    vector<int>rs;
    for(auto it:st) rs.push_back(it);
    return rs;
}

//optimised approach
//time O(n)
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &nums)
{
    int n=nums.size();
    int sz = n;
  int num1 = -1, num2 = -1, count1 = 0, count2 = 0, i;
  for (i = 0; i < sz; i++) {
    if (nums[i] == num1)
      count1++;
    else if (nums[i] == num2)
      count2++;
    else if (count1 == 0) {
      num1 = nums[i];
      count1 = 1;
    } else if (count2 == 0) {
      num2 = nums[i];
      count2 = 1;
    } else {
      count1--;
      count2--;
    }
  }
  vector < int > ans;
  count1 = count2 = 0;
  for (i = 0; i < sz; i++) {
    if (nums[i] == num1)
      count1++;
    else if (nums[i] == num2)
      count2++;
  }
  if (count1 > sz / 3)
    ans.push_back(num1);
  if (count2 > sz / 3)
    ans.push_back(num2);
  return ans;
}

