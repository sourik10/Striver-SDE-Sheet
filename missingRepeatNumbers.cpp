#include <bits/stdc++.h> 
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int>ans;
	unordered_map<int,int>mp(n+1);
	for(int i=0;i<n;i++) mp[arr[i]]++;
	for(int i=1;i<=n;i++){
		if(mp[i]==0) ans.first=i;
	}
	for(int i=1;i<=n;i++){
		if(mp[i]>1) ans.second=i;
	}
	return ans;
}
