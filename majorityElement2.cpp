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

